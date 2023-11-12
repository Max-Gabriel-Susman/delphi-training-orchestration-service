// model_checkpoint.cpp
#include<iostream>

int model_checkpoint() {
    std::cout << "traversing model checkpont...\n";
    /*Saves the model in master process and loads it everywehre else.
    */

   // use a barrier() to make sure that process 1 loads the model after process
   // 0 saves it 

   // configure map_locatin properly
    return 2;
}