#include "../arraylib.h"
#include <cassert>
#include <iostream>
using namespace std;

int main() {
    int a[]={1,2,3,4,5};
    size_t n=sizeof(a)/sizeof(a[0]);
    assert(arr_sum(a,n)==15);
    assert(arr_max(a,n)==5);
    assert(arr_min(a,n)==1);
    assert(arr_average(a,n)==3);
    assert(arr_count_positive(a,n)==5);
    assert(arr_count_negative(a,n)==0);
    assert(arr_count_zero(a,n)==0);
    assert(arr_product(a,n)==120);
    assert(arr_median(a,n)==3);

    int b[]={-2,0,4,6};
    n=sizeof(b)/sizeof(b[0]);
    assert(arr_sum(b,n)==8);
    assert(arr_max(b,n)==6);
    assert(arr_min(b,n)==-2);
    assert(arr_average(b,n)==2);
    assert(arr_count_positive(b,n)==2);
    assert(arr_count_negative(b,n)==1);
    assert(arr_count_zero(b,n)==1);
    assert(arr_product(b,n)==0);
    assert(arr_median(b,n)==2);

    cout<<"All tests passed!"<<endl;
    return 0;
}