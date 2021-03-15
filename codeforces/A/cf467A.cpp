#include <iostream>

int main() {
    int n,p,q,x=0;
    std::cin>>n;
    while(n--){
        std::cin>>p>>q;
        if((q-p)>=2)x++;
    }
    std::cout<<x<<std::endl;
    return 0;
}
