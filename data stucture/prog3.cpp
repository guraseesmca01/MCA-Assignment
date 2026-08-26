/*Design the logic of a program to rotate a 1-D array by K positions. e.g., for A = {1,2,3,4,5} and K = 2, the left rotation is {3,4,5,1,2} and the right rotation is {4,5,1,2,3}. */
#include<iostream>
using namespace std;
int main(){
    int A[5] = {1,2,3,4,5};
    int k ;
    cout<<"Enter any postion K value where you want to left reverse(Basically index): ";
    cin>>k;
    int idx = 0;
    int arr[5];
    for(int  i = k ; i<5 ; i++){  //here i took firstly part from k pos to end index and and stored its value into new array with starting
        int value;
        value = A[i];
        arr[idx] = value;
        idx++;
        

    }
    for(int i = 0; i < k; i++){ // then here i took the intial part 0 - k  and out it to the last part in the new array//
    arr[idx] = A[i];
    idx++;
}
    cout<<endl;
    for(int  i = 0 ;i<5 ; i++){
        cout<<arr[i]<<" ";
    }
 
 
 
}