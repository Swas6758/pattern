#include<iostream>
#include<algorithm>
using namespace std;
    
int main() {
    int row,count=1;
    cout<<"Enter the row";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
                cout<<count%2;
                count++;
            }
            cout<<endl;
        }
        
    
return 0;
}