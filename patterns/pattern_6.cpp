#include<iostream>
using namespace std;
int main(){
cout<<"Enter a number\n";
int n;
cin>>n;

for(int k=1,j=1;k<=n;k++,j++ ){
    for(int i=k; 0<i; i--){
        cout<<i<<" ";
    }
    cout<<endl;
}
return 0;
}