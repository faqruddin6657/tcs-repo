#include<iostream>
#include<vector>
using namespace std;
void find_largest_and_smallest(vector<int> &v){
    int max=v[0];
    int min=v[0];
    for(int i : v){
        if(i>=max) max=i;
        if(i<=min) min=i;

    }
    cout<<"maximum: "<<max<<endl<<" minimum: "<<min<<endl;


}
int main(){
    vector<int> vec={10,90,30,80,50,60,70,100};
    find_largest_and_smallest(vec);

    return 0;
}