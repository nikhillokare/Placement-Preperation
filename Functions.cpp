// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void multiply1(int n1,int n2){
    cout<<n1 * n2<<endl;
};
int multiply(int n1,int n2){
    return n1 * n2;
};
int main() {
    // cout<< 5 * 6<<endl;
    // cout<< 7 * 6<<endl;
    // cout<< 3 * 6<<endl;
     int ans =  multiply(4,4);
     cout<<ans<<endl;
     ans =  multiply(4,5);
     cout<<ans<<endl;
     ans =  multiply(4,6);
     cout<<ans<<endl;
     ans =  multiply(4,7);
     cout<<ans<<endl;
     ans =  multiply(4,8);
     cout<<ans<<endl;
     multiply1(5,6);
    return 0;
}