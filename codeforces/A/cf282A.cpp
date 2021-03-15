#include <iostream>
#include <string>

int main() {
    int n,x=0;
    std::cin >> n;
    std::string s;
    while(n--) {
        std::cin >> s;
        if(s=="++X"||s=="X++") x++;
        else x--;
    }

    std::cout << x << std::endl;
    return 0;
}
