/*Implement the binary search algorithm regarded as a fast search 
algorithm with run-time complexity of Ο(log n) in comparison to the Linear Search. */
#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>vec , int target_element){
    int start = 0;
    int end = vec.size()-1;

    while(start<=end){
        int mid = start + (end - start) / 2;
        if(vec[mid]==target_element){
            return mid;
        }else if(target_element>vec[mid]){
            start = mid  +  1;
        }else{
            end = mid - 1;
        }

    }
    return -1;
}
int main(){
    vector<int> vec;
    int size ;
    cout<<"Enter the size of the vector: ";
    cin>>size;

    for(int  i = 0 ; i<size; i++){
        cout<<"Enter the element no "<<i<<" :";
        int value;
        cin>>value;
        vec.push_back(value);

    }
    cout<<"So you entred: "<<endl;
    for(int i : vec){
        cout<<i<<" ";

    }
    bool response;
    cout<<"\n";
    cout<<"yes(1) or no(0)??: ";
    cin>>response;
    if((response!=1)||(response!=true)){
        exit(0);

    }
    cout<<"Appplying sorting algo: "<<endl;
    int *ptr = &vec[0];
    for(int  i = 0 ; i <size-1; i++){
        for(int j = 0 ; j<size-i-1 ; j++){
            
            if(*(ptr+j)>*(ptr+j+1)){
                int temp = *(ptr+j);
                 *(ptr+j) = *(ptr + j + 1);
                *(ptr+j+1)= temp;
                
            }
           
        }
    }
    cout<<"Sorted vector::"<<endl;
    for(int  i = 0 ; i<size ; i++){
        cout<<*(ptr+i)<<" ";
      
    }
    cout<<endl;

    cout<<"What element you need to find out: ";
    int target;
    cin>>target;
    cout<<endl;

    int answer = binarysearch(vec,target);
    if(answer!=-1){
        cout<<"The element "<<target<<" found at index "<<answer<<" of vector.."<<endl;
    }else{
        cout<<"Not found..";

    }

}