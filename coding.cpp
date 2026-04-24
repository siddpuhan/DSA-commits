#include <iostream>
using namespace std;

void change(int *x) {
    *x = *x + 10;   
    cout << "Inside function: " << *x << endl;
}

int main() {
    int num = 5;
    change(&num);   
    cout << "Outside function: " << num << endl; 
    return 0;
}
