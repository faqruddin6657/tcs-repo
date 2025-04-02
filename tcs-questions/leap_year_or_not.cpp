#include<iostream>
using namespace std;
bool check_leap_year(int year){
    if(year%400==0) return true;
    if(year%4==0 && year%100!=0) return true;
    return false;

}

int main(){
    bool result = check_leap_year(1900);
    cout<<result<<endl;
    return 0;
}