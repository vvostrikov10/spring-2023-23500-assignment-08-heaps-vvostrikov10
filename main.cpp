#include "heapsort.h"
#include <iostream>
int main(){
    int a[] = {4, 10, 3, 5, 1};
    heapsort(a, 5);
    for (int i = 0; i < 5; i++){
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
}
