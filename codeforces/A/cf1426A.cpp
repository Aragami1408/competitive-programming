#include <iostream>

int main() {
    int t,n,x;
    std::cin>>t;
    while(t--){
        std::cin>>n>>x;
        if(n<=2) std::cout<<1<<std::endl;
        else std::cout<<((n-3)/x) + 2<<std::endl;
    }
    return 0;
}
