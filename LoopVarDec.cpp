/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;
int main(){
    int x = 20;
    for (int i=0;i<5;i++){
        cout<< i;
        int x = 15;
    }
    cout << x;
}
