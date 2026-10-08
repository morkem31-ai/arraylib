#include "arraylib.h"
#include <algorithm>
using namespace std;

int arr_sum(const int* a, size_t n) {
    int s=0;
    for(size_t i=0;i<n;i++) s+=a[i];
    return s;
}
int arr_max(const int* a, size_t n) {
    int m=a[0];
    for(size_t i=1;i<n;i++) if(a[i]>m) m=a[i];
    return m;
}
int arr_min(const int* a, size_t n) {
    int m=a[0];
    for(size_t i=1;i<n;i++) if(a[i]<m) m=a[i];
    return m;
}
double arr_average(const int* a, size_t n) {
    return double(arr_sum(a,n))/n;
}
int arr_count_positive(const int* a, size_t n) {
    int k=0;
    for(size_t i=0;i<n;i++) if(a[i]>0) k++;
    return k;
}
int arr_count_negative(const int* a, size_t n) {
    int k=0;
    for(size_t i=0;i<n;i++) if(a[i]<0) k++;
    return k;
}
int arr_count_zero(const int* a, size_t n) {
    int k=0;
    for(size_t i=0;i<n;i++) if(a[i]==0) k++;
    return k;
}
int arr_product(const int* a, size_t n) {
    int p=1;
    for(size_t i=0;i<n;i++) p*=a[i];
    return p;
}
double arr_median(const int* a, size_t n) {
    int* b=new int[n];
    for(size_t i=0;i<n;i++) b[i]=a[i];
    sort(b,b+n);
    double m;
    if(n%2==0) m=(double(b[n/2-1])+b[n/2])/2;
    else m=b[n/2];
    delete[] b;
    return m;
}