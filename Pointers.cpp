// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main(){
    int number = 9;
    int *ptr = &number;
    int *khali_ptr = NULL;
    cout<< khali_ptr <<endl;
    cout<< ptr <<endl;
    cout<< *ptr <<endl;
    *ptr = 10;
    cout<<*ptr<<endl;
    int **pointer_ka_pointer = &ptr;
    cout<< pointer_ka_pointer <<endl;
    int ***new_ptr = &pointer_ka_pointer;
    cout<< ***new_ptr <<endl;
    
    return 0;
  
}