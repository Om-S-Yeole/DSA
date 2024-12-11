#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int a[5] = {2, 4, 1, 6, 33};
    cout<<sizeof(a)<<endl;
    cout<<a[3]<<endl;
    printf("%d\n", a[2]);

    for(int x:a){
        cout<<x<<endl;
    }

    return 0;
}