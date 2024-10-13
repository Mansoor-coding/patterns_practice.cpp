#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number\n";
    int n;
    cin>>n;
    //printing q2
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    //printing q1    
    for(int j=0;j<=2*i+1;j++){
        cout<<" ";
    }    
    cout<<"*"<<endl;
    }


    cout<<"  "<<endl;
    //printing q3
    for(int i=0;i<n-1;i++){
        
        for(int j=1;j<i+1;j++){
            cout<<"  ";
        }
        cout<<"*";
        cout<<endl;

        for(int j=1;j<2*(n-i-2)-1;j++){
            cout<<" ";


        }
        cout<<"*"<<endl;
    }

    return 0;
}