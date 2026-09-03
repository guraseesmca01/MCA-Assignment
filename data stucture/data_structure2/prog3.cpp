/*
3) Design the Logic to Find a Missing Number in a Sorted Array. Given an array of n-1 distinct integers in the range of 1 to n, 
find the missing number in it in a Sorted Array (a) Linear time (b) Using binary search.
*/
#include<iostream>
using namespace std;
void Missingnum(int *ptr, int size){
        for(int  i = 0 ; i<size-1 ; i++){
        if(*(ptr + i+1)- *(ptr + i)!=1){
            

            
            cout<<"The number "<<*(ptr+i) + 1<<" is missing"<<endl;
            

        }
        
    }

}
int BinarySearch(int  arr[] , int size){
    int start = 0;
        int end = size-1;

    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid] == mid+1){
            start = mid + 1;
        }else {

            end = mid - 1;
        }
    }
    return start  + 1;


  
    

}
int main(){
    int arr[] = {1,2,3,4,6,7,9};
    int size = sizeof(arr) / sizeof(int);
    int *start = arr;
    cout<<"Using linear time: "<<endl;
    Missingnum(start,size);

    cout<<"\n";
    cout<<"Using binary search: "<<endl;
    cout<<BinarySearch(arr,size);
}