#include<iostream>
using namespace std;
int main(){
cout<<"Enter a number\n";
int n;
cin>>n;
for(int j =1; j<= n;j++){
    for(int i=1; i<=j;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
return 0;
}