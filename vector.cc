#include <vector>
#include <iostream>

int main(int argc, char *argv[]) {

    std::vector<int> vector_a;

    for (int i = 0; i < 100; ++i) {
      vector_a.__emplace_back(i);
    }
    std::cout << "the 2th num is:" << vector_a[98] << std::endl;
    std::cout << "hello world" << std::endl;
    vector_a.insert(vector_a.end(), 5, 3);
    std::cout << "The first insert num is " << vector_a[100] << std::endl;
    std::cout << "The second insert num is " << vector_a[101] << std::endl;

    std::vector<int>::const_iterator it = vector_a.begin(); 
    for (; it != vector_a.end(); it++) {
      std::cout << *it << ",";
    }

    return 0;
}