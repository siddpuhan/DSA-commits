#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows:";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        //for spaces
        for (int j = 1; j <= (n-i); j++)
        {
            cout<<" ";
        }
        //for alphabets
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout<<ch;
            ch++;
        }
        //for reverse alphabets
        ch = ch -2;
        for( int j = 1; j<=i ; j++){
            cout<<ch;
            ch--;
        }
        cout<<endl;


        
        
    }
    

}