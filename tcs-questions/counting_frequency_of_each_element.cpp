#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;
void count_frequency(vector<int> &vec){
    unordered_map<int,int> map;
    for(int i : vec){
        map[i]++;
    }
    for(auto p : map){
        cout<<p.first<<" "<<p.second<<endl;
    }

}

int main(){
    vector<int>  v={10,5,10,15,10,5};
    count_frequency( v);

    return 0;
}