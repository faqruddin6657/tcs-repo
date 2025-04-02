#include<iostream>
using namespace std;
int factof(int n){
    int result=1;
    while(n>0){
        result*=(n--);

    }
    return result;

}

int main(){
    cout<<factof(5);

    return 0;
}