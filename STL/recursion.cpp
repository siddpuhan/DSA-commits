#include<iostream>
using namespace std;
int some=0;

void sum(int i,int n){
    if(i>n){
        cout<<"the sum is:"<<some;
        return;
    }
    some=some+i;
    sum(i+1,n);
    

}

int main(){
    int n;
    cin>>n;
    sum(1,n);
    
}