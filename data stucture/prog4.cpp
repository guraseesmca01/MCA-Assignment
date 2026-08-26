// //  Implement the logic to a. Reverse the elements of an array b. Find 
// the matrix multiplication c. Find the Transpose of a Matrix 

#include<iostream>
#include<vector>
using namespace std;
void arrayinput(vector<int>& vec ,int size){
    
    
    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Taking the array elemnt inputs: "<<endl;
    for(int i = 0 ;i<size; i++){
        int value;
        cout<<"Enter the element no "<<i+1<<":";
        cin>>value;
        vec.push_back(value);
    }
}
void printingarray(vector<int> &vec){
        for(int i = 0 ;i<vec.size() ; i++){
        if(i==vec.size()-1){
            cout<<vec[i];
        }else{
         cout<<vec[i]<<",";


        }
    }
}
void create2dmatrix(int  (&arr)[3][3],char x){
    cout<<"--------*******--------"<<endl;

    cout<<"Enter the values for the matrix "<<x<<" :"<<endl;
    cout<<"Taking input each element of the matrix: "<<endl;

    for(int i = 0 ; i<3; i++){
        for(int j = 0 ; j<3; j++){
            cout<<"\t";
            cin>>arr[i][j];
            cout<<" ";
            
            
        }
        cout<<endl;
    }

}
//Part(a)
void revesearray(vector<int> & vec,int st_idx, int end_idx){
    //iam gonna solve this problem by using two pointers technique + also recurrsion//
     if(st_idx>=end_idx){
        return ;

     }
     swap(vec[st_idx],vec[end_idx]);
     return revesearray(vec, st_idx + 1, end_idx-1);
    

}
//Part(b)
void find_matrix_multi(int arr[3][3], int arr2[3][3]){

    int result[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            result[i][j] = 0;

            for(int k = 0; k < 3; k++)
            {
                result[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }


}

void transpose(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}
    

    

int main(){
    vector<int>vec;
    int arr[3][3];
    int arr2[3][3];
    string A;
    string B;
    int op;
    cout<<"<------------Welcome to the menu------------>"<<endl;
    cout<<"Enter the operation to perform: "<<endl;
    cout<<"(1)Reversing of the array"<<endl;
    cout<<"(2)Find the matrix multiplication"<<endl;
    cout<<"(3)find the transpose of the matrix."<<endl;
    cout<<"\n";
    cout<<"Enter your choice: ";
    cin>>op;

    

    switch (op)
    {
    case 1:
    int size;
    
    arrayinput(vec,size);
    
    cout<<"(1) Reversiing the array: "<<endl;
    revesearray(vec,0,vec.size()-1);
    printingarray(vec);
    cout<<endl;
        
        break;

    case 2:
    cout<<"-----------*******------------"<<endl;
    cout<<"(2) Finding the matrix multiplication: "<<endl;

    create2dmatrix(arr,'A');
    cout<<"\n";

    create2dmatrix(arr2,'B');

    cout<<"The array multiplcation for A and B is :"<<endl;
    find_matrix_multi(arr,arr2);
    break;

    case 3:
    
    cout<<"Now enter the matrix elemnts for transposong operation: ";
    int matrix[3][3];
    create2dmatrix(matrix,'C');
    cout<<"The transpose of matrix: "<<endl;
    transpose(matrix);


    
    default:
    cout<<"Invalid choice.."<<endl;
        break;
    }
}