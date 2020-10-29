/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main() {
    string a = {'c','a','t'};
    string b = {'d','o','g'};
    a=b;
    b[1] = 'u';
    cout << a;
    cout << b;



return 0;
}
