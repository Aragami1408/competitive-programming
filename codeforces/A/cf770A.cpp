#include <iostream>
#include <string>

int main() {
    int n,k;
    std::cin>>n>>k;
    std::string pan = "abcdefghijklmnopqrstuvwxyz";
    std::string res = "";
    while(res.size() <= n){res+=pan.substr(0,k);}
    std::cout<<res.substr(0,n)<<std::endl;

    return 0;
}