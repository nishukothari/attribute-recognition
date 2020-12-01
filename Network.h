//
// Created by Nishant Kothari on 11/30/20.
//

#ifndef ATTRIBUTE_RECOGNITION_NETWORK_H
#define ATTRIBUTE_RECOGNITION_NETWORK_H

#include <torch/torch.h>

class Network : torch::nn::Module {
private:
    torch::nn::Module layers;
public:
    Network();
    at::Tensor forward(at::Tensor image);
};


#endif //ATTRIBUTE_RECOGNITION_NETWORK_H
