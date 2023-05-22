#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "heapsort.h"

TEST_CASE("heapsort tests"){
    int a[] = {1};
    heapsort(a, 1);
    CHECK(a[0] == 1);
    int b[] = {32, 21, 8, 67, 13, 25, 98, 53};
    int b_sorted[] = {8, 13, 21, 25, 32, 53, 67, 98};
    heapsort(b, 8);
    for (int i = 0; i< 8; i++){
        CHECK(b[i] == b_sorted[i]);
    }
    int c[] = {72, 12, 30, 39, 40, 43, 84, 44, 51, 57, 59, 60, 87,  100, 70, 89, 94, 95, 34, 38};
    int c_sorted[] = {12, 30, 34, 38, 39, 40, 43, 44, 51, 57, 59, 60, 70, 72, 84, 87, 89, 94, 95, 100};
    heapsort(c, 20);
    for (int i = 0; i< 20; i++){
        CHECK(c[i] == c_sorted[i]);
    }

}