#include <iostream>
#define ll long long
int main() {
    ll n, a[n],s=0,d=0,iter=0;
    std::cin >> n;
    for (int i = 0; i <= n; i++) {
        std::cin >> a[i];
    }

    while (iter <= n-iter) {
        s += (a[iter] > a[n-(iter+1)]) ? a[iter] : a[n-(iter+1)];
        iter++;
        d += (a[iter] > a[n-(iter+1)]) ? a[iter] : a[n-(iter+1)];
        iter++;
    }

    std::cout << s << d << std::endl;

    return 0;
}
