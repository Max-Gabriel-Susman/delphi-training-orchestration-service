### Delphi Training Orchestration Service 

## Overview

The Delphi Training Orchestration Service orchestrates the training of neural networks on kubernetes clusters using Distributed Data Parallelism(DDP)

## Operation 

## Testing 

## Resources

current inspiration from this series: 
https://towardsdatascience.com/distributed-deep-learning-101-introduction-ebfc1bcd59d9
https://towardsdatascience.com/pytorch-distributed-all-you-need-to-know-a0b6cf9301be
https://towardsdatascience.com/pytorch-distributed-on-kubernetes-71ed8b50a7ee

the series is ultimately based off of one guy's particiapation in this coding competition:

https://www.kaggle.com/c/ranzcr-clip-catheter-line-classification

training data is archived as delphi-training-data.zip

## TODOs 

# Business logic 

* complete implementation of business logic 

* refactor business logic according to cpp best practices

# Testing 

currently using google test, is this what we want to use going forward?

# CI 

having trouble implementng google test in github actions 

# Build System

looks like we're going to want to keep using CMake, I'm definitely going to have to become more familiar w/ that

# Dockerization 

biggest hurdles are familiarity w/ CMake and whatever tf the Test Framework ends up being 

might just be able to find a good example I can borrow tho 

# Networking

* setup make targets to hit grpc endpoints

* modify proto file to better reflect the service being exposed here

* expose training orchestration logic w/ grpc