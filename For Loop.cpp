#include <iostream>
#include<cmath>
#include<vector>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b,i;
    string numbers[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for(i=a;i<=b;i++){
        if(i>9){
            if(i%2==0){
                cout<<"even\n";
            }
            else{
                cout<<"odd\n";
            } 
        }
        else{
            cout<<numbers[i]<<"\n";
        }     
    
    }
    
    return 0;
}