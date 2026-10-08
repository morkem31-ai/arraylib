#include "arraylib.h"
#include <cassert>
#include <iostream>
using namespace std;

int main() {
    int a[]={10,20,30,40,50};
    size_t n=sizeof(a)/sizeof(a[0]);
    assert(arr_sum(a,n)==150);
    assert(arr_average(a,n)==30);
    assert(arr_max(a,n)==50);
    assert(arr_min(a,n)==10);
    assert(arr_median(a,n)==30);
    cout<<"Интеграционный тест пройден!"<<endl;
    return 0;
}
