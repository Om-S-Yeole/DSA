#include<iostream>

using namespace std;

template<class T>
class Arithmatic{
    private:
        T a;
        T b;

    public:
        Arithmatic(T first_val, T second_val);
        T add();
        T subtract();
};

template<class T>
Arithmatic <T> :: Arithmatic(T first_val, T second_val){
    a = first_val;
    b = second_val;
}

template<class T>
T Arithmatic <T> :: add(){
    T c = a+b;
    return c;
}

template<class T>
T Arithmatic <T> :: subtract(){
    T c = a-b;
    return c;
}


int main(){
    Arithmatic<int> ar(5, 2);
    cout<<"Addition: "<<ar.add()<<endl<<"Subtraction: "<<ar.subtract()<<endl;

    Arithmatic<float> ar2(5.38, 6.912);
    cout<<"Addition: "<<ar2.add()<<endl<<"Subtraction: "<<ar2.subtract()<<endl;


    return 0;
}