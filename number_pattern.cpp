#include<iostream>
#include<algorithm>
using namespace std;
    
int main() {
    int row;
    cout<<"Enter the row";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<" ";
        }
        
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    
        
    
return 0;
}