#include <iostream>
#include <vector>
#include <fstream>

int main() {
    std::ifstream file("data.txt");
    int x; std::vector<int> data;
    while(file >> x) data.push_back(x);
    for(int y : data) std::cout << y << " ";
}
