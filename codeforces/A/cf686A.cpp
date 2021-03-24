#include <iostream>
#define ll long long 
int main() {
    ll n,x,d,t=0;
    char o;
    std::cin>>n>>x;
    while(n--){
        std::cin>>o>>d;
        if(o=='+') x+=d;
        if(o=='-') {
            if(x<d)t+=1;
            else x-=d;
        }
    }
    std::cout<<x<<" "<<t<<std::endl;
    return 0;
}
