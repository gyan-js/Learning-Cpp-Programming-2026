#include <iostream>
using namespace std;

int main(){
    int i, num;
    cout<<"Enter the number for multiplication table: ";
    cin>>num;
    cout<<"Multiplication table of "<< num << " is:\n ";
    for (i = 1; i < 11; i++)
    {
        cout<<num<<" x "<< i <<" = "<< (num * i)<<"\n";

    }

    return 0;
    
}