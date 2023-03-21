// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void increase_value(int &value){
    value++;
    cout<<value<<endl;
}
int main(){
    int number = 9;
    increase_value(number);
    cout<<number<<endl;
    return 0;
  
}