
#include "arraylib.h"
#include <cassert>
#include <cmath>

int main() {
    int data[] = {1, 2, 3, 4};
    const std::size_t n = 4;

    assert(arr_sum(data, n) == 10);
    assert(arr_min(data, n) == 1);
    assert(arr_max(data, n) == 4);
    assert(std::abs(arr_average(data, n) - 2.5) < 1e-9);
    assert(std::abs(arr_median(data, n) - 2.5) < 1e-9);
    assert(arr_product(data, n) == 24);
}
