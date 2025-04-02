#include<iostream>
using namespace std;

void check_even_or_odd(int n){
    if(n%2==0) cout<<"even"<<endl;
    else cout<<"odd"<<endl;


}

int main(){
    int n=103;
    check_even_or_odd(n);
    return 0;
}