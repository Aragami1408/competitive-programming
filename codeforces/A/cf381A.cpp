#include <iostream>
#include <deque>
#include <vector>
#define ll long long int
int main() {
    ll n,s=0,d=0;
    std::deque<ll> a;
    std::cin >> n;
    
    for (int val, i=0;(std::cin>>val)&&i<n;i++) a.push_back(val);

    while (!a.empty()) {
        s += std::max(a.front(),a.back());
        (a.front() > a.back())? a.pop_front() : a.pop_back();
        d += std::max(a.front(),a.back());         
        (a.front() > a.back())? a.pop_front() : a.pop_back();
    }

    std::cout << s << d << std::endl;

    return 0;
}
