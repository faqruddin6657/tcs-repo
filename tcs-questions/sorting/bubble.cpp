// the below code is for improved bubble sort
// wherein if there happens no swaps in the first pass that means that
// the array is already sorted 
// and we dont have run the next pass ( we can immediately break the loop)
//and we can say that the array is already sorted


#include<iostream>
using namespace std;
int main(){
    bool isSwapped= false;
    int arr[]= {11,1,2,3,4,10,5,6,7,8,9,12};

    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;


    int arr_size= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<arr_size-1;i++){
        for(int j=0; j<arr_size-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(isSwapped) break;
    }
    for(int i: arr){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}