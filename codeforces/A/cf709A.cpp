#include <iostream>

#define ll long long

int main() {
    ll n,b,d,a[n],t=0,s,c=0;

    std::cin >> n >> b >> d;

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] <= b) {
            t += a[i];
        }
        if (t > d) {
            c++;
            t=0;
        }
    }
    
    std::cout << c << std::endl;
    return 0;
}
