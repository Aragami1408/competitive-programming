#include <iostream>
#include <string>

int main() {
    int n;
    std::string s;
    std::cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            s.append("I hate ");
        }
        else if(i%2==0){
            s.append("I love ");
        }
        if (i==n) {
            s.append("it");
        }
        else {
            s.append("that ");
        }
    }
    std::cout << s << std::endl;
    return 0;
}
