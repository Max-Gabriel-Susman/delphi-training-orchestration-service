def create_loaders(train_df: pd.DataFrame, 
                   valid_df: pd.DataFrame, 
                   rank: int, 
                   args: Namespace) -> Tuple[DataLoader, DataLoader]:
    """Creates the train/valid dataloaders.
    
    Args:
        train_df: the training dataset as a pandas DataFrame
        valid_df: the validation dataset as a pandas DataFrame
        rank: a unique identifier for the process
        args: user defined arguments
    Returns:
        train_dataloader: the train dataloader
        valid_dataloader: the valid dataloader
    """
    _transforms = get_transforms(args.image_size)

    train_dataset = RanzcrDataset(train_df, tfms=_transforms)
    valid_dataset = RanzcrDataset(valid_df, tfms=_transforms)

    train_sampler = DistributedSampler(train_dataset, 
                                       num_replicas=args.world_size,
                                       rank=rank)
    valid_sampler = DistributedSampler(valid_dataset, 
                                       num_replicas=args.world_size,
                                       rank=rank)

    train_dataloader = DataLoader(train_dataset, batch_size=args.batch_size,
                                  shuffle=False, num_workers=8,
                                  pin_memory=True, sampler=train_sampler)

    valid_dataloader = DataLoader(valid_dataset, batch_size=args.batch_size,
                                  shuffle=False, num_workers=8,
                                  pin_memory=True, sampler=valid_sampler)
    
    return train_dataloader, valid_dataloader