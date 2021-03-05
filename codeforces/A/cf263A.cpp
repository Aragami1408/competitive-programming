#include <bits/stdc++.h>


#define ll long long
#define MAX 100

ll pmatrix[MAX][MAX], pivot[2];

template <typename Iter>
size_t index_of(Iter first, Iter last, typename std::iterator_traits<Iter>::value_type &x) {
    size_t i = 0;
    while (first != last && *first != x)
      ++first, ++i;
    return i;
}

int main() {
    for (int i = 0; i < 5; i++) {
        std::cin >> pmatrix[i][0] >> pmatrix[i][1] >> pmatrix[i][2] >> pmatrix[i][3] >> pmatrix[i][4];

        if (std::find(std::begin(pmatrix[i]), std::end(pmatrix[i]), 1) != std::end(pmatrix[i])) {
            pivot[0] = i;
            pivot[1] = std::distance(pmatrix[i], std::find(std::begin(pmatrix[i]), std::end(pmatrix[i]), 1));
        }
        
    }

    std::cout << abs(pivot[0]-2) + abs(pivot[1]-2) << std::endl;
}