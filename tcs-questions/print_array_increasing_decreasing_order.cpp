#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void inc_dec(vector<int> &vec){
    int n=vec.size();
    sort(vec.begin(),vec.end());
    for(int i=0;i<floor(n/2);i++){
        cout<<vec[i]<<" ";
    }
    for(int i= n-1;i>=floor(n/2);i--){
        cout<<vec[i]<<" ";
    }
    cout<<endl;



}
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9};
    for(int i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    inc_dec(v);
    return 0;
}