#ifndef ARRAYLIB_H
#define ARRAYLIB_H
#include <cstddef>

int arr_sum(const int* a, std::size_t n);
int arr_max(const int* a, std::size_t n);
int arr_min(const int* a, std::size_t n);
double arr_average(const int* a, std::size_t n);
int arr_count_positive(const int* a, std::size_t n);
int arr_count_negative(const int* a, std::size_t n);
int arr_count_zero(const int* a, std::size_t n);
int arr_product(const int* a, std::size_t n);
double arr_median(const int* a, std::size_t n);

#endif