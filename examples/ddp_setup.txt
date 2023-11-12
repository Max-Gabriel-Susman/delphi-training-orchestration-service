.def setup(rank: int, args: Namespace):
    """Initializes a distributed training process group.
    
    Args:
        rank: a unique identifier for the process
        args: user defined arguments
    """
    os.environ['MASTER_ADDR'] = args.host
    os.environ['MASTER_PORT'] = args.port

    # initialize the process group
    dist.init_process_group(backend=args.backend, 
                            init_method='env://', 
                            rank=rank, 
                            world_size=args.world_size)