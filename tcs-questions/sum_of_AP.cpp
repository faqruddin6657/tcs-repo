#include<iostream>
using namespace std;
void sum_of_ap(int a, int d, int n, float &summ){
    summ=n*(2*a + (n-1)*d)/2.0;
}
int main(){
    int n=5,a=2,d=2;
    float sum;
    sum_of_ap(a,d,n,sum);
    cout<<" the sum of ap is "<<sum<<endl;
    return 0;
}