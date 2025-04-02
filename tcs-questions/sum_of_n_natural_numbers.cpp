#include <iostream>
using namespace std;

float sum_of_n(int n){
    return n*(n+1)/2.0;
}
int main(){
    int m=3;
    cout<<sum_of_n(3)<<endl;
    return 0;
}