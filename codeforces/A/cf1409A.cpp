#include <iostream>
#include <cstdlib>
#define ll long long
int main() {
    ll t,a,b;
    int deno[10] = {10,9,8,7,6,5,4,3,2,1};
    std::cin>>t;
    while(t--){
        int res=0;
        std::cin>>a>>b;
        int diff=abs(a-b);
        if(diff!=0){
            for(int i=0;i<10;i++){
                while(diff>=deno[i]){
                    diff -= deno[i];
                    res++;
                } 
            }
        }
        else{
            res+=0;
        }
        std::cout<<res<<std::endl;
    }
    return 0;
}
