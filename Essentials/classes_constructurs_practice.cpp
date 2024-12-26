#include<iostream>

using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;

    public:
        Rectangle(int len, int bre);
        int Area();
        int Perimeter();
        int getLength();
        void setLength(int len);
        int getBreadth();
        void setBreadth(int bre);
        ~Rectangle();
};

Rectangle :: Rectangle(int len, int bre){
    length = len;
    breadth = bre;
}

int Rectangle :: Area(){
    return length*breadth;
}

int Rectangle :: Perimeter(){
    return 2*(length+breadth);
}

int Rectangle :: getLength(){
    return length;
}

void Rectangle :: setLength(int len){
    length = len;
}

int Rectangle :: getBreadth(){
    return breadth;
}

void Rectangle :: setBreadth(int bre){
    breadth = bre;
}

Rectangle :: ~Rectangle(){
    cout<<"Destructer"<<endl;
}

int main(){

    Rectangle r(10, 5);
    cout<<r.Area()<<endl;
    cout<<r.Perimeter()<<endl;
    cout<<r.getLength()<<endl;
    cout<<r.getBreadth()<<endl;
    r.setBreadth(2);
    r.setLength(3);
    cout<<r.Area()<<endl;
    cout<<r.Perimeter()<<endl;
    cout<<r.getLength()<<endl;
    cout<<r.getBreadth()<<endl;


    return 0;
}