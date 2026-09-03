/*
8) Write a program to count the total number of distinct elements in an array of length n. 
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
     int size;
     cout<<"Enter the size of vector: ";
     cin>>size;
    for(int  i = 0 ; i<size ; i++){
        long value;
        cout<<"Enter the value for index "<<i+1<<" : ";
        cin>>value;
        vec.push_back(value);
    }


    

   

    int frequency[10] = {};

    for(int  i = 0 ; i<vec.size() ; i++){
        frequency[vec[i]]++;
    }

    cout<<"The elements present in the array: "<<endl;
    int count = 0;
    for(int  i = 0 ; i<size; i++){
        if(frequency[i]>0){
             cout<<i<<" ";
             count++;

        }
    }
    cout<<"\n";

    cout<<"There are "<<count<<" disticnt elements: ";
    //done//

}
