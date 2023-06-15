#include <vector>
#include <iostream>

int main(int argc, char *argv[]) {

    std::vector<int> a = {1, 2};
    int *pos = &a[1];
    
    for (int i = 0; i < 100; ++i) {
      a.push_back(i);
    }
    std::cout << *pos;
}