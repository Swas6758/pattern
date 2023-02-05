#include<iostream>
#include<algorithm>
using namespace std;
    
int main() {
    int row;
    cout<<"Enter the row";
    cin>>row;

    for( int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<" ";
        }
        
        for(int k=i;k>=1;k--){
            cout<<k;
        }
        //int count=2;
        for(int k=2;k<=i;++k){
            if(i>1){
                cout<<k;
                //count++;
            }
        }
        
        cout<<endl;
    }
    
    
        
    
return 0;
}