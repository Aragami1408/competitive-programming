#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cmath>
#define ll long long 

int main() {
    std::string phrase = "abcdefghijklmnopqrstuvwxyz";
    std::string inp;
    ll step=0;
    std::cin >> inp;
    char pivot = 'a';
    for (char c: inp) {
        double x = (double) phrase.find(pivot);
        double y = (double) phrase.find(c);
        step += std::min(abs(x-y),abs(inp.size() - x - y));
        pivot = c;
    }

    std::cout << step << std::endl;
    return 0;
}
