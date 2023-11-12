// main.cpp
#include <iostream>
#include "train.h"

int main() {
    // Training settings
    std::cout << "training service request received" << std::endl;
    int trainReturn = train();
    std::cout << "training service request served" << std::endl;
    return 0;
}
