#include <iostream>
#include <string>
#include <algorithm>
int main() {
    std::string s;
    std::cin >> s;
    if(s[0]>='a'&&s[0]<='z') s[0]-=32;
    std::cout << s << std::endl;
}
