#include <iostream>
#include <string>
int main() {
    int n,r=0;
    std::string p;
    std::cin>>n;
    while(n--){
        std::cin>>p;
        if(p=="Tetrahedron")r+=4;
        else if(p=="Cube")r+=6;
        else if(p=="Octahedron")r+=8;
        else if(p=="Dodecahedron")r+=12;
        else if(p=="Icosahedron")r+=20;
    }
    std::cout<<r<<std::endl;
    return 0;
}
