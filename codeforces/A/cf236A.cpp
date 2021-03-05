#include <bits/stdc++.h>


int main() {
    std::string s;
    std::set<char> charset;

    std::cin >> s;

    for (char c : s) {
        charset.insert(c);
    }

    if (charset.size() % 2 == 0) {
        std::cout << "CHAT WITH HER!" << std::endl;
    }
    else {
        std::cout << "IGNORE HIM!" << std::endl;
    }   
    
}