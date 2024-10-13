#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a number\n";
cin>>n;
for(int k= n; k>0 ;k--){
    for(int i = 1;i<=k ; i++ ){
    cout<<"* ";
}

cout<<endl;
}

return 0;
}