#include<iostream>
#include<algorithm>
using namespace std;
    
int main() {
    int row;
    cout<<"Enter the row";
    cin>>row;
    for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        
    
return 0;
}