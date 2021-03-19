#include <iostream>


int main(){
    int n,m;
    bool isReversed=false;
    std::cin>>n>>m;
    std::string s = "";
    for(int i=0;i<n;i++){
        if(i%2==0){
            s="";
            for(int j=0;j<m;j++)s+="#";
        }
        else {
            s="";
            if(isReversed){
                s+="#"; 
                for(int j=0;j<m-1;j++)s+=".";
                isReversed=false;
            }
            else {
                for(int j=0;j<m-1;j++)s+=".";
                s+="#";
                isReversed=true;
            }
        }
        std::cout<<s<<std::endl;
    }
    return 0;
}
