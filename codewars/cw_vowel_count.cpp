#include <string>
#include <vector>
#include <algorithm>
#include <iostream>


int getCount(const std::string &s) {
    std::vector<char> v{'a','e','i','o','u'};
    int num_vowels = 0;

    for (std::string::size_type i = 0; i < s.size(); i++) {
        if(std::find(v.begin(), v.end(), s[i]) != v.end()) {
            num_vowels += 1;
        }
    }
    

    return num_vowels;
    
}

int main() {
    std::cout << getCount("aaabbbcccdddeeefff") << std::endl;
}