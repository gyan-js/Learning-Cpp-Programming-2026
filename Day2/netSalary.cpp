#include <iostream>
using namespace std;
int main() {
    double bs, pa, pd;
    cout<<"Enter the Basic Salary, Percentage of Allowance and Percentage od Deduction: ";
    cin>>bs>>pa>>pd;
    double net_salary = bs + (bs * pa) - (bs*pd);
    cout<<"YOUR NET SALARY = "<<net_salary;
    return 0;
}