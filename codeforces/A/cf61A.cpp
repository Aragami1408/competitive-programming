#include <iostream>
#include <string>

int main() {
    std::string a;
    std::string b;
    std::cin>>a;
    std::cin>>b;
    for(int i=0;i<a.size();i++){
        if(a[i]==b[i]){
            std::cout<<"0"<<"";
        }
        else if(a[i]!=b[i]){
            std::cout<<"1"<<"";
        }
    }
    return 0;
}
