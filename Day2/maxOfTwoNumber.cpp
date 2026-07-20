#include <iostream>
using namespace std;
int main(){
    int a, b, c, max;
    cout<<"Enter 3 numbers";
    cin>>a>>b>>c;
    
    if (a > b && a > c) 
    {
        max = a;
    }
    else if (b > c and b > a) 
    {
        max = b;
    }
    else {
        max = c;
    }
    
    return 0;
    
}
