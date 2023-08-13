#include<iostream>
#include<math.h>
using namespace std;

int pow(int n){
    for(int i=0;i<=32;i++){
        int ans=pow(2,i);

        if(ans==n){
             return true;
        }
        
    }
    return false;
        
}
int main(){
    int n;
    cout<<pow(4);
    
    return 0;
}