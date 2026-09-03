//Write a program to find sum of every row and every column in a two-dimensional array. //
#include<iostream>
using namespace std;
void create2dmatrix(int  (&arr)[4][3]){
    cout<<"Taking input each element of the matrix: "<<endl;

    for(int i = 0 ; i<4; i++){
        for(int j = 0 ; j<3; j++){
            cout<<"\t";
            cin>>arr[i][j];
            cout<<" ";
            
            
        }
        cout<<endl;
    }

}
void printing2dmatrix(int arr[4][3]){
        cout<<"Printing the matrix: "<<endl;
        for(int i = 0 ; i<4; i++){
        for(int j = 0 ; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void printing_sum_rows(int arr[4][3]){
    for(int i = 0 ; i<4; i++){
        cout<<"The sum of row "<<i+1<<" :";
        
        for(int j = 0 ; j<3; j++){
          
            cout<< arr[i][j] + arr[i][j+1] + arr[i][j+2];
            cout<<endl;
            break;
            
        }
        cout<<endl;
        
    }   

}
void printing_sum_colms(int const arr[4][3]){
    for (int j = 0; j < 3; j++)
    {
        int sum = 0;

        for (int i = 0; i < 4; i++){
            sum += arr[i][j];
        }

        cout<<"The sum of column " << j + 1 <<" :" <<sum<<endl;
    }

    
}
int main(){

    int arr[4][3];
    create2dmatrix(arr);
    cout<<"Now printing the sum of rows: "<<endl;
    printing_sum_rows(arr);
    cout<<"\n";

    cout<<"And now printing the sum of cols: "<<endl;
    printing_sum_colms(arr);
    // cout<<arr[0][0] + arr[1][0] + arr[2][0] + arr[3][0];

}