#include <iostream>
using namespace std;

int sum_of_two_number(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        for (int y=0;y<n;y++){
        if(arr[i]+arr[i+y]==k || (i==n && arr[i]+arr[0]==k)){
            return 1;
        }
    }
    }
    return 0;
    

};

int main(){
    int n, k;
    cout<<"number of elements in array:\n";
    cin>>n;
    cout<<"enter number to be found:\n";
    cin>>k;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int out =sum_of_two_number(arr, n, k);
    if(out== 0){
        cout<<"no";
    }
    else{
        cout<<"yes";
    }
    return 0;

}