
#include <iterator>

void f1() {
    const int arrsize = 6;
    int arr[arrsize] = {0, 1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < arrsize; ++i)                              // Violation
    {
        sum += arr[i];
    }
    for (int * p = std::begin(arr); p != std::end(arr); ++p)       // Violation
    {
        sum += *p;
    }
}
