#include<iostream>

using namespace std;

int main(){
    int a = 10;
    int *p = &a;

    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;

    int arr[4] = {23, 52, 23, 25};
    int *arr_pointer = arr;
    cout<<arr_pointer<<endl;
    cout<<*arr_pointer<<endl;
    cout<<arr_pointer[1]<<endl;

    // using malloc of C++ that is new

    int *mal = new int[3];
    mal[0] = 24; mal[1] = 893; mal[2] = 523;
    cout<<'Printing the elements of mal'<<endl;
    
    for(int i=0; i<3; i++){
        cout<<mal[i]<<endl;
    }

    delete [] mal;

    return 0;
}