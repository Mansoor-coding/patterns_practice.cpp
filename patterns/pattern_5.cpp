#include<iostream>
using namespace std;
int main(){

cout<<"enter a number\n";
int n;
cin>>n;
int num=1;

for(int k=0;k<n;k++){
    
        for(int i=k+1;i>0;i--){
            cout<<num<<" ";

            num++;

        }
        
    cout<<endl;

    }
    
 
 

return 0;
}