#include<iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


int main(){
    struct Rectangle r1 = {10, 5};

    struct Rectangle *p = &r1;

    cout<<r1.length<<endl;
    cout<<p<<endl;
    // cout<<*p<<endl;
    cout<<(*p).length<<endl;

    p -> length = 23;
    cout<<p -> length<<endl;

    // Allocate the dynamic memory

    struct Rectangle *p2 = new Rectangle;

    p2 -> length = 54;
    p2 -> breadth = 37;

    cout<<p2->length<<endl<<p2->breadth<<endl;

    return 0;
}