//develop a menu driven program to demnsotrate the following operations of the array/
/*
(1)Create
(2)Display 
(3) Insert
(4) Delete
(5)Linear Search
(6) Exit
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> create(int n, vector<int>& vec){
    for(int i = 0 ;i<n;i++){
        cout<<"Enter the value no: "<<i+1<<" :";
        int value;
        cin>>value;
        vec.push_back(value);
        

    }
    return vec;


}
void Display(int n, const vector<int>& vec){
    for(int i = 0 ; i<n;i++){
        if(i==n-1){
            cout<<vec[i]; 

        }else{
            cout<<vec[i]<<",";
        }
    }
        
    }


void Delete(int &n ,vector<int>& vec,int del_indx_val){
    for(int i = del_indx_val; i<n-1; i++){
        vec[i] = vec[i+1];

    }
    vec.pop_back();
    n--;

    //now printing the after changes in deletion//
    cout<<"\n";
    for(int i = 0 ; i<n; i++){
        cout<<vec[i]<<endl;
    }
    

}
void insert(int &size,vector<int>& vec){
     cout << "Enter the position/index where you wanna insert element: ";
    int pos;
    cin >> pos;
    if(pos < 0 || pos > size){
    cout << "Invalid position!" << endl;
    return;
}

    int value;
    cout << "Enter the value for insertion: ";
    cin >> value;

    vec.push_back(0);   

    for (int i = size; i > pos; i--) {
        vec[i] = vec[i - 1];
    }

    vec[pos] = value;
    size++;

    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << vec[i] << " ";
    }
}
int linear_Search(int size,vector<int>vec,int te){
  

    for(int i = 0; i<size;i++){
        if(te ==vec[i]){
            return i;
            

        }

    }
    return -1;

}
int main(){
    vector<int> vec;
    int size;
    cout<<"Enter the size of the vector: ";
    cin>>size;

    cout<<"Creating array for you..."<<endl;
    create(size,vec);

   

while(true){


     cout<<"\n";
    int choice;
    cout<<"Enter your choice from one of the following(1-6): "<<endl;
    cout<<"(1) Create "<<endl;
    cout<<"(2) Display"<<endl;
    cout<<"(3) Insert"<<endl;
    cout<<"(4)Delete"<<endl;
    cout<<"(5) Linear Search"<<endl;
    cout<<"(6) Exit"<<endl;

    cout<<"\n";
    cout<<"Enter here: ";

    cin>>choice;
    

    switch (choice)
    {
    case 1:
        create(size,vec);
        break;

    case 2:
        Display(size,vec);
        break;

    case 3:
        insert(size,vec);
        break;
    case 4:
        cout<<"First of all you check your current array elements : "<<endl;
    for(int i : vec){
        cout<<i<<endl;
    }
    cout<<"Now enter which index value you wanna delete: "<<endl;
    int idx;
    cin>>idx;
        Delete(size,vec,idx);
        break;

    case 5:
    cout<<"Enter the targeted element: ";
    int targeted_element;
    cin>>targeted_element;
        if(linear_Search(size,vec,targeted_element)!=-1){
            cout<<"The element is present in the arrayy at the  index number of "<<linear_Search(size,vec,targeted_element)<<endl;
        }else{
            cout<<"Element is not found"<<endl;
        }
        break;

    case 6:
        cout<<"Exiting.....";
        return 0;
        

    
    default:
        break;
    }
 
 
 
}
}
