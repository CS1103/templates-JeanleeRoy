//
// Created by jeanlee on 17/05/19.
//

#ifndef QUICKSORT_QSORT_H
#define QUICKSORT_QSORT_H

#include <iostream>

template <typename T>
void swap(T* a, T* b){
    T t = *a;
    *a = *b;
    *b = t;
}

template <typename T>
void quickSort(T [], int, int);
template <typename T>
T particion(T [], int , int);

template <typename T>
void quickSort(T arr[], int primero, int ultimo){
    if (primero < ultimo){
        int p = particion(arr, primero, ultimo);
        quickSort(arr, primero, p - 1);
        quickSort(arr, p + 1, ultimo);
    }
}

template <typename T>
void print_arr(T *array, int n){
    for (int k = 0; k < n; k++)
        std::cout << array[k] << " ";
    std::cout << std::endl;
}

template <typename T>
T particion(T *arr, int primero, int ultimo){
    T pivote = arr[primero];
    T pos_pivote = primero;

    for (int pos = primero + 1; pos <= ultimo; pos++)
    {
        if (arr[pos] < pivote){
            swap(&arr[pos_pivote + 1], &arr[pos]);
            swap(&arr[pos_pivote], &arr[pos_pivote + 1]);
            pos_pivote ++;
        }
    }
    return pos_pivote;
}

#endif //QUICKSORT_QSORT_H
