/*
Let A[1 …. n] be an array of n real numbers. A pair (A[i], A[j ]) is 
said to be an inversion if these numbers are out of order, i.e., i < j but A[i]>A[j ].
 Write a program to count the number of inversions in an array. 
*/
#include<iostream>
#include<vector>

using namespace std;
int Inversioncounts(vector<int> vec){
    int count = 0;
    for(int i = 0 ;  i <vec.size() ; i++){
        for(int  j = i+1; j<vec.size() ;j++){
            if(vec[i]>vec[j]){
                count = count + 1;
            }
        }
    }
    return count;

}
int main(){
    vector<int>vec;

    cout<<"Enter the size of vector: ";
    int size;
    cin>>size;


    for(int i = 0 ; i <size; i++){
        cout<<"Enter the elemnt for index no "<<  i + 1<<" :";
        int value;
        cin>>value;

        vec.push_back(value);

    }
    cout<<"Vector elements are inputted.."<<endl;
    cout<<"You entred: \n";

    for(int i = 0 ; i<size; i++){
        cout<<vec[i]<<" ";
    }
    cout<<"\n";

    int inversions = Inversioncounts(vec);
    if(inversions!=0){
         cout<<"There are total "<<inversions<<" in vector";

    }else{
        cout<<"No inversioons found..";
    }
   
}
