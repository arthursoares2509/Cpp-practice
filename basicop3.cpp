#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> data = {0, 2, 4, 6, 8};
    double mean = std::accumulate(data.begin(), data.end(), 0.0)/data.size;
    std::cout << "Mean: " << mean;
}










