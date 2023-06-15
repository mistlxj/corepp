#include <iostream>

using namespace std;

int f(int** ptr);

int main () {
    int a = 10;
    int* ptr1 = &a;
    int** ptr2 = &ptr1;

    cout << "*ptr1 = " << *ptr1 <<endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr2 = " << ptr2 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "**ptr2 = " << **ptr2 << endl;

    f(ptr2);
    cout << "1111111111111111111" << endl;

    cout << "*ptr1 = " << *ptr1 <<endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr2 = " << ptr2 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "**ptr2 = " << **ptr2 << endl;

    f(&ptr1);
    cout << "222222222222222222" << endl;

    cout << "*ptr1 = " << *ptr1 <<endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr2 = " << ptr2 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "**ptr2 = " << **ptr2 << endl;

}

int f(int** ptr) {
//    *ptr
    //int *p = nullptr;
    int v = 100;
    **ptr = 200;
    //ptr = &p;
//    delete p;
    return 0;
}

