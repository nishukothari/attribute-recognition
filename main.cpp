#include <torch/torch.h>
#include "Standard.h"

int main() {
    at::Tensor tensor = torch::rand({2, 3});
    std::cout << tensor << std::endl;
}