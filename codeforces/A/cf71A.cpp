#include <iostream>
#include <string>

int main() {
    int n;
    std::string a;
    std::cin>>n;
    while(n!=0){
        std::cin>>a;
        (a.length()>10)?(std::cout<<a[0]<<a.length()-2<<a[a.length()-1]<<std::endl):(std::cout<<a<<std::endl);
        n--;
    }
}
