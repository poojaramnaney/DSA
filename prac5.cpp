/*
Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input was [3, 2, 1], the expected output would be [2, 3, 6].
*/
#include <iostream>

using namespace std;
void product(int n, int arr[]){
    
    if(n==1){
        cout<<"product of array is 0";
        return;
    }
    int product=1;
  
    for(int i=0; i<n; i++){
        product = product*arr[i];
    }
    for(int y=0; y<n; y++){
        cout<<product/arr[y]<<" ";
    }
    
        /*
        prodright=1;
        prodleft=1;
    for(int r=arr[i+1]; r<arr[n-1]; r++){
        prodright*=r;
        
    }
    if(i!=0)
    for(int l=arr[i-1]; l>arr[0]; l--){
        prodleft*=l;
        
    }
    
    prod[i]=prod[prodright*prodleft];
    cout << prod[i] << " ";
    }
    
   
        
 
    
    
    */
}

int main()
{
    int n;
    cout<<"Number of elements in the array:";
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    product(n, arr);
    
    
    return 0;
}