#include<iostream>
using namespace std;
int main(){
int m = 8;
const int n = 7;
const int * p = &n;
int * const q = &m;
//n = 9;      // stmt-1
//*p = 2;    // stmt-2
p = &m;  // stmt-3
//q = &n;   // stmt-4
*q = 5;    // stmt-5
}
