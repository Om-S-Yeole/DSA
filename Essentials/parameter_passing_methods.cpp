#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}

void swap_by_address(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_by_reference(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

void print_array_elements(int *arr, int size_of_arr){
    for(int i=0; i<size_of_arr; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void multiply_arr_by_2(int *arr, int size_of_arr){
    for(int i=0; i<size_of_arr; i++){
        arr[i] *= 2;
    }
}

int * create_and_return_array(int size){
    int *p = new int[size];
    for(int i=0; i<size; i++){
        p[i] = i;
    }
    return p;
}

int area(struct Rectangle rect){
    return rect.length*rect.breadth;
}

void double_length_of_rectangle(struct Rectangle *rect){
    rect -> length *= 2;
}

int main(){
    int a, b;
    a = 10;
    b = 20;
    swap(a, b); // Pass by Value
    cout<<"Pass By Value"<<endl<<a<<endl<<b<<endl;

    swap_by_address(&a, &b); // Pass by Address
    cout<<"Pass by Address"<<endl<<a<<endl<<b<<endl;

    swap_by_reference(a, b);
    cout<<"Pass by Reference"<<endl<<a<<endl<<b<<endl;

    int myarr[] = {2, 4, 6, 8, 10};
    print_array_elements(myarr, sizeof(myarr)/sizeof(int));

    multiply_arr_by_2(myarr, sizeof(myarr)/sizeof(int));
    print_array_elements(myarr, sizeof(myarr)/sizeof(int));

    int *new_arr = create_and_return_array(3);
    for(int i=0; i<3; i++){
        cout<<new_arr[i]<<' ';
    }
    cout<<endl;

    struct Rectangle r = {10, 5};
    int area_of_r = area(r);
    cout<<area_of_r<<endl;

    double_length_of_rectangle(&r);
    cout<<r.length<<endl;

    return 0;
}