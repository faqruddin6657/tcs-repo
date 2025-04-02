// we are optimizing the below selection sort by using the 
// isSwapped boolean variable

#include<iostream>
using namespace std;
int main(){
    bool isSwapped = false;
    int arr[]=  {60,20,40,100,80,50,70,10,30,90,};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i : arr){
        cout<<i<<" ";
    }


    cout<<endl;

    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++){
            if(arr[i]>arr[j]){
                isSwapped=true;
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        if(isSwapped==false) break;
    }


    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}