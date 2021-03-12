#include <iostream>
#include <algorithm>


int main() {
    int x;
    std::cin >> x;
    int arr[x-1];

    for (int i = 0; i < x;i++) std::cin >> arr[i];
    std::sort(arr,arr+x);
    for (int i = 0;i<x;i++) std::cout << arr[i] << " ";

    return 0;
}
