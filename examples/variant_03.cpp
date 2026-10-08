
#include "arraylib.h"
#include <iostream>
using namespace std;

int main() {
    int a[]={12500,9800,14300,11700,15600,13200,8900,16400,15100,12800};
    size_t n=sizeof(a)/sizeof(a[0]);
    cout<<"Выручка по дням: ";
    for(size_t i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Общая выручка: "<<arr_sum(a,n)<<endl;
    cout<<"Средняя дневная выручка: "<<arr_average(a,n)<<endl;
    cout<<"Лучший день: "<<arr_max(a,n)<<endl;
    cout<<"Худший день: "<<arr_min(a,n)<<endl;
    cout<<"Медианная выручка: "<<arr_median(a,n)<<endl;
    return 0;
}
