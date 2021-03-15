#include <iostream>
#include <cmath>

int main() {
    int x;
    std::cin >> x;
    int res=(x%5==0)?(x/5):(x/5+1);
    std::cout << res << std::endl;
    return 0;
}
