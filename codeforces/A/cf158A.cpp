#include <iostream>

int main() {
    int n,k,res=0;
    int a[n+1];
    std::cin>>n>>k;
    for(int i=0;i<n;i++)std::cin>>a[0];
    for(int i=0;i<n;i++){
        
        if(a[i]>=a[k-1]){
            if(a[i]==0&&a[k-1]==0)res+=0;
            else res++;
        }
    }
    std::cout<<res<<'\n';
    return 0;
}
