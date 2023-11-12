def checkpoint(model: nn.Module, gpu: int, epoch: int):
    """Saves the model in master process and loads it everywhere else.
    
    Args:
        model: the model to save
        gpu: the device identifier
        epoch: the training epoch
    Returns:
        model: the loaded model
    """
    if gpu == 0:
        # All processes should see same parameters as they all start from same
        # random parameters and gradients are synchronized in backward passes.
        # Therefore, saving it in one process is sufficient.
        torch.save(model.module.state_dict(), CHECKPOINT_PATH + f"_{epoch}.pt")

    # use a barrier() to make sure that process 1 loads the model after process
    # 0 saves it.
    dist.barrier()
    # configure map_location properly
    map_location = {'cuda:%d' % 0: 'cuda:%d' % gpu}
    model.module.load_state_dict(
        torch.load(CHECKPOINT_PATH + f"_{epoch}.pt", map_location=map_location))