#include <iostream>
#include <set>

#define ll long long

int main() {
    std::set<ll> s;
    ll s1, s2, s3, s4;

    std::cin >> s1 >> s2 >> s3 >> s4;

    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);
    
    std::cout << 4 - s.size() << std::endl;

    return 0;
}
