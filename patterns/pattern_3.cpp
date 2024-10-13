//pyramid patterns
#include<iostream>
using namespace std;
int main(){
   cout<<"enter a number\n";
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    //for spaces
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }

    //for num1
    for(int j=1;j<=i+1;j++){
        cout<<j;

    }
    //num 2
    for(int j=i;j>0;j--){
        cout<<j;

    }
    cout<<endl;
   }
   
    return 0;

}