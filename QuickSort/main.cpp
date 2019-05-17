#include <iostream>
#include "Qsort.h"

using namespace std;
int main() {
    int array[10] = {100, 35, 7, 21, 89, 10, 148, 983, 33, 29};
    print_arr(array,10);
    quickSort(array, 0, 10-1);
    print_arr(array,10);
    return 0;
}