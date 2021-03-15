#include <cstdlib>
#include <iostream>
#include <string>
#include <set>
int main() {
    std::string n;
    std::cin >> n;
    std::set<char> s;
    std::set<char> res={'4','7'};
    for (auto c: n) {
        s.insert(c);
    }
    if (s==res) {
        std::cout << "YES" << std::endl;
    } 
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;

}
