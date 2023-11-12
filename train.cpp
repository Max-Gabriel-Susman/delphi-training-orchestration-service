// train.cpp
#include <iostream>
#include "setup.h"
#include "model_checkpoint.h"
#include "create_loaders.h"

int train()
{

    std::cout << "training underway..." << std::endl;
    // Implements the training loop for PyTorch a model
    
    // global variables for evaluation 

    // setup process groups 
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