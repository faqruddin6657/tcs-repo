#include<iostream>
using namespace std;
int main(){
    int arr[]={7,1,3,6,9,5,8,2,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i=1;i<size; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;

        }
        arr[j+1]=key;
    }

    

    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}