#include <iostream>
#include <string>

int main() {
    int n,x=0;
    std::string s;
    std::cin>>n;
    std::cin>>s;
    for (int i=0;i<n-1;i++) {
        if (s[i]==s[i+1]) x++;
    }
    std::cout << x << std::endl;
    return 0;
}
