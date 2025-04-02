#include <iostream>
using namespace std;
bool check_palindrome(int n){
    int remainder=0;
    int original=n;
    int temp;
    while(n>0){
        temp=n%10;
        remainder= (remainder*10)+temp;
        n=n/10;
    }
    return original==remainder;

}

int main(){
    int n=1211;
    bool result=check_palindrome(n);
    cout<<result<<endl;
    return 0;
}