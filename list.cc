#include <iostream>
#include <list>

void print_list(std::list<int> va_list);


int main(int argc, char *argv[]) {
    std::list<int> m_list(10, 3);
    m_list.push_back(7);
    m_list.push_front(6);
    std::cout << "The first reference is = " << m_list.front() << std::endl;
    // std::list<int>::const_iterator it = m_list.begin();
    // while (it != m_list.end()) {
    //     std::cout << *it << ",";
    //     it++;
    // }
    print_list(m_list);
    m_list.unique();
    print_list(m_list);
    m_list.sort();
    print_list(m_list);

    std::cout << std::endl;
    return 0;
}

void print_list(std::list<int> va_list) {
    std::list<int>::const_iterator iter = va_list.begin();
    for (; iter != va_list.end(); iter++) {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}