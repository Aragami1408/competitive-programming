#include <bits/stdc++.h>

int main() {
    int n, a=0,d=0;
    std::string s;

    std::cin >> n;
    std::cin >> s;

    for(char c: s) {
        if(c == 'A') a+= 1;
        else if (c == 'D') d+=1;
    }

    if (a > d) std::cout << "Anton";
    else if (a < d) std::cout << "Danik";
    else std::cout << "Friendship";
}