// train.cpp
#include <iostream>
#include "setup.h"
#include "model_checkpoint.h"
#include "create_loaders.h"

int train() // we need to figure out how to take in gpu: int, args: Namespace as cmd line args
{
    std::cout << "training underway..." << std::endl;
    /*Implements the training loop for PyTorch a model

    Args:
        gpu: the GPU device
        args: user defined arguments
    */

    // global variables for evaluation 
    int *losses = nullptr; // needs to be c++ equivalent of pythonic list
    int *scores = nullptr; // needs to be c++ equivalent of pythonic list

    // setup process groups 
    int *rank = nullptr; // rank = args.nr * args.gpus + gpu
    int setupReturn = setup();

    // define the model 

    // wrap the model 

    // define loss function (criterion) and optimizer 

    // split data
    int create_loadersReturn = create_loaders();

    // train 
    // for(<le-stuff>)
        // evaluate

        // checkpoint model 
    int model_checkpointReturn = model_checkpoint();

    return 0;
}