
#include "arraylib.h"
#include <cassert>

int main() {
    int data[] = {5, 3, 8, 1, 9, 2};
    const std::size_t n = sizeof(data) / sizeof(data[0]);

    assert(arr_sum(data, n) == 28);
    assert(arr_max(data, n) == 9);
    assert(arr_min(data, n) == 1);
    assert(arr_count_positive(data, n) == 6);
    assert(arr_count_negative(data, n) == 0);
    assert(arr_count_zero(data, n) == 0);
    assert(arr_product(data, n) == 2160);
}
