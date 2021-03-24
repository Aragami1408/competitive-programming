#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main(){
    std::string s;
    std::vector<char> v;
    std::cin>>s;
    for(int i=0;i<s.size();i++){
        if(i%2==0)v.push_back(s[i]);
    }
    std::sort(v.begin(),v.end());
    s="";
    for(auto i: v){
        s.push_back(i);
        s.push_back('+');
    } 
    s.erase(s.length()-1);
    std::cout<<s<<std::endl;
    return 0;

}
