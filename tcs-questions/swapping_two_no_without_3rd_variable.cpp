#include<iostream>
using namespace std;

void swaping(int &x, int &y){
    x=x+y;
    y=x-y;
    x=x-y;

}

int main(){
    int a=10,b=20;
    cout<<"the values of a , b before swapping are "<<a<<" "<<b<<endl;
    swaping(a,b);
    cout<<"the values of a , b after swapping are "<<a<<" "<<b<<endl;



    return 0;
}