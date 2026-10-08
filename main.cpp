#include "arraylib.h"
#include <iostream>
using namespace std;

int main() {
    int data[]={5,3,8,1,9,2};
    size_t n=sizeof(data)/sizeof(data[0]);
    cout<<"Sum: "<<arr_sum(data,n)<<endl;
    cout<<"Max: "<<arr_max(data,n)<<endl;
    cout<<"Min: "<<arr_min(data,n)<<endl;
    cout<<"Average: "<<arr_average(data,n)<<endl;
    cout<<"Positive: "<<arr_count_positive(data,n)<<endl;
    cout<<"Negative: "<<arr_count_negative(data,n)<<endl;
    cout<<"Zero: "<<arr_count_zero(data,n)<<endl;
    cout<<"Product: "<<arr_product(data,n)<<endl;
    cout<<"Median: "<<arr_median(data,n)<<endl;
    return 0;
}