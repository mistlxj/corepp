#include <iostream>
#include <map>
using namespace std;

int main(int argv, char *argc[]) {
    map<string, int> m_map;
    m_map["a"] = 10;
    m_map.insert(pair<string, int>("c", 12));
    m_map.insert(pair<string, int>("c", 7));
    m_map.insert(make_pair<string, int>("c", 9));
    cout << m_map["c"] << " find num of 'c' = " << m_map.count("c") << endl;
    map<string, int>::iterator it = m_map.find("a");
    bool flag = (it == m_map.end()) ? false : true;
    cout << "falg = " << flag << endl;
    return 0;
}