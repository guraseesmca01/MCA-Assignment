/*
2) Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements 
if they are in the wrong order. Code the Bubble sort with the following elements:
*/
#include<iostream>
using namespace std;
void bubblesort(int *ptr,int size){


for(int  i = 0 ; i<size-1; i++){
    for(int j = 0 ; j<size - i - 1 ; j++){
        int temp = *(ptr+j);
        if(temp>*(ptr + j +1 )){
            *(ptr + j ) = *(ptr+ j + 1);
            *(ptr + j + 1) = temp;
        }
    }


}

}




int main(){
 int arr[] = {5, 2, 4, 1};
 int size = sizeof(arr) /sizeof(int);
 int *ptr = arr;
 

 cout<<"After the implementation of bubble sort: ";
 bubblesort(arr,size);

 for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
 }

}
