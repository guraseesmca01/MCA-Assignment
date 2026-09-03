//Dsign a logic to remove the duplicate elements from an Array and after the deletion the array should contain the unique elements. //
#include<iostream>
#include<vector>
using namespace std;
void checkallunique(vector<int> & vec,int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (vec[i] == vec[j])
            {
             for (int k = j; k < size - 1; k++)
         {
                    vec[k] = vec[k + 1];
            }
                vec.pop_back();

                // Decrease size
                size--;

                j--;
             }
    }
    }

}
int main(){
    
    vector<int> vec = {1,2,3,2,5,6,7};
    int size = vec.size();
     checkallunique(vec,size);
     for(int i : vec){
        cout<<i<<endl;
     }
}