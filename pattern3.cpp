#include<iostream>
using namespace std;
void upward(int n){
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}

void downward(int n){
    for (int i = n-1; i>=0; i--){
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
        
    }

}
int main(){
    int n;
    cout<<"enter the no of rows you want:";
    cin>>n;
    upward(n);
    downward(n);
    
    
}
