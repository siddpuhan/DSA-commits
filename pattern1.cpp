#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows you want:";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=n;j>=1;j--){
            cout<<'*'<<' ';
        }
        cout<<endl;

    }
}