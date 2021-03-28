#include <iostream>

int main() {
    int n,m,k;
    std::cin>>n>>m>>k;
    if ((m<n)||(k<n)) std::cout << "NO";
    else std::cout << "YES";
    
    return 0;
}
