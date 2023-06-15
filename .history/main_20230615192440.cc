#include <stdio.h>
#include <vector>


int main(int argc, char *argv[]) {

    std::vector<int> a = {1, 2};
    int *pos = &a[0];
    
    for (int i = 0; i < 100; ++i) {
      a.push_back(i);
    }
    std::cout << *pos;
}
