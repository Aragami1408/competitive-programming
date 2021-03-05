#include <iostream>

#define ll long long

int main() {
    int n, arr[3], res=0;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[0] >> arr[1] >> arr[2];
        if (arr[0] + arr[1] + arr[2] > 1) {
            res++;
        }
    }
        
    std::cout << res << std::endl;
    return 0;
}