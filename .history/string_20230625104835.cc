#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    string s("In the movie cast way, tom hanks palays a man named chark");
    int len = s.length();
    for (int i = 0; i < len; i++) {
        cout << s.at(i) << endl;
    }
    return 0;
}