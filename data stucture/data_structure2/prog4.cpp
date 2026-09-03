/*
4) String Related Programs
(a) Write a program to concatenate one string to another string.
(b) Write a program to reverse a string.
(c) Write a program to delete all the vowels from the string.
(d) Write a program to sort the strings in alphabetical order.
(e) Write a program to convert a character from uppercase to lowercase.

*/
#include<iostream>
#include<string>
using namespace std;
string stringconcat(string s1, string s2){
    string result(s1.size() + s2.size(), '\0');

    char* ptr1 = &s1[0];
    char* ptr2 = &s2[0];
    char* ptr3 = &result[0];

    while (*ptr1 != '\0') {
        *ptr3 = *ptr1;
        ptr1++;
        ptr3++;
    }

    while (*ptr2 != '\0') {
        *ptr3 = *ptr2;
        ptr2++;
        ptr3++;
    }

    return result;


}
string Reversingstring(string & s1,int size){
  
    char *start = &s1[0];
    char *end = &s1[size-1];

    while(start<end){
        swap(*start,*end);
        start++;
        end--;
    }
    return s1;

}
int calculatesizeofstring( string s){
   char *ptr = &s[0];
        int size = 0;
    while(*ptr!='\0'){
        size++;
        ptr++;


    }
    return size;
    
}
void Deleteallvowels(string & s1){
        char *read = &s1[0];
    char *write = &s1[0];

    while (*read != '\0') {

        if (*read != 'a' && *read != 'e' &&
            *read != 'i' && *read != 'o' &&
            *read != 'u') {

            *write = *read;
            write++;
        }

        read++;
    }

    *write = '\0';
    s1.resize(write - &s1[0]);
}
void stringsortingalpha(string s){
    char *ptr1 = &s[0];
    int ascival[128] = {};
    while(*ptr1 != '\0'){
        ascival[*ptr1]++;
        ptr1++;

    }

    for(int  i = 0 ; i<128;i++){
        if(ascival[i]>0){
            for(int  j = 0 ; j<ascival[i];j++){
                cout<<char(i);
            }
        }

    }

}
void uppercasetolower(string s){
    char *ptr  = &s[0];

    



    while(*ptr!='\0'){
        if(*ptr>='A'&&*ptr<='Z'){
            *ptr = *ptr +32;

        }
        ptr++;
        




    }
    cout<<"The upper case string is: "<<s<<endl;
 

    }

int main(){
    string a ,b;
    int sizeofs1;
    int sizeofs2;


    cout<<"Enter the string 1: ";
    cin >>a;
    cout<<"Enter the string 2: ";
    cin>>b;
    char *ptr1 = &a[0];
    char *ptr2 = &b[0];


    cout<<"The concatenation operation on string gives: "<<stringconcat(a,b)<<endl;
    sizeofs1 =calculatesizeofstring(a);
    cout<<" calculating the size of string: "<<sizeofs1<<endl;


    cout<<"The reverse Operation on string gives: "<<Reversingstring(a,sizeofs1)<<endl;

    cout<<"Delete all vowels: ";
    string s = "hello world";
    Deleteallvowels(s);
    cout << s;
    cout<<endl;
    cout<<"Sorting the string: ";

    stringsortingalpha(a);
    cout<<endl;

    uppercasetolower(a);

}