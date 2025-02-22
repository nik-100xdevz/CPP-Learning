// print the number from 1 to n that are even 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i = 1; i<=n;i++){
       if(i%2==0){
           cout<<i<<endl;
       }
   }
    return 0;
}