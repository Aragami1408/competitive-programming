#include <iostream>
#include <vector>

#define ll long long
#define MAX 99999

int main() {
    ll n;

    std::cin >> n;
    std::cout << n << " ";
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else if (n % 2 != 0) {
            n = n * 3 + 1;
        }
        std::cout << n << " ";
    }

    return 0;
}
