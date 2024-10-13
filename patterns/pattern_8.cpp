#include<iostream>
using namespace std;
int main(){
int n ;
cout<<"Enter a number\n";
cin>>n;
for(int j=1; j<=n ; j++ ){
    for(int i =j; i<=j;i++ ){
       for(int k =1;k<=i;k++){
        cout<<i<<" ";
       }
        
    }
    cout<<endl;
}

return 0;
}
