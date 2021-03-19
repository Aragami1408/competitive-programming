#include <iostream>
#include <vector>

#define ll long long 

int main() {
    ll n,res=0;
    std::vector<int> b = {1,5,10,20,100};
    std::cin>>n;
    for(int i = 4;i>=0;i--){
        while(n>=b[i]){
            n-=b[i];
            res++;
        }
    }

    std::cout<<res<<std::endl;
    return 0;
}
