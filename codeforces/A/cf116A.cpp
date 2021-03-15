#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n,a,b,temp=0;
    std::vector<int> min;
    std::cin >> n;
    for(int i=0;i<n;i++) {
        std::cin >> a >> b;
        temp -= a;
        temp += b;
        min.push_back(temp);
    }
    std::cout << *std::max_element(min.begin(),min.end()) << std::endl;
    return 0;
}
