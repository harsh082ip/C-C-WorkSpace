#include <iostream>
using namespace std;
int main() {
   int i ,j ,k,n;
   cout<<"Enter the number of rows you want to print:";
   cin>>n;
   for (i=1;i<=n; i++){
       for(k=n-i;k>0;k--){
           cout<<" ";
       }
       for (j=1;j<=i;j++){
           cout<<"*";
       }
       cout<<endl;
   }
    return 0;
}











