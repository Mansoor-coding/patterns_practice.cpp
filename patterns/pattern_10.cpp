#include<iostream>
using namespace std;
int main(){
cout<<"Enter a number\n";
int n;
cin>>n;

for (int k=1,j=1; k<=j*n,j<=n;k++,j++){
    for(int i =k; i<=j*n; i++){
    cout<<i<<" ";
    
}
k=j*n;
cout<<endl;
}

return 0;
}