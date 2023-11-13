// main.cpp
#include <iostream>
#include "train.h"

int main() {
    // Training settings
    int *parser = nullptr; // what type does parser need to be? might have to define a class for that
    std::cout << "training service request received" << std::endl;
    int trainReturn = train();
    std::cout << "training service request served" << std::endl;
    return 0;
}
