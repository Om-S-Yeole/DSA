#include<iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


int main(){
    struct Rectangle R_1 = {10, 5};
    cout<<R_1.length<<endl<<R_1.breadth<<endl;

    struct Rectangle rectangle_array[3] = {{5, 1}, {5, 3}, {9, 4}};
    cout<<rectangle_array[1].breadth<<endl;
    

    return 0;
}