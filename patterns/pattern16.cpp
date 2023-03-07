#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    int s=1;
    while (row<=n)
    {
        int column=1;
        
        while (column<=row)
        {
            
            char ch=s+'A'-1;
            cout<<ch;
            s=s+1;
            
            column=column+1;
           
        }
        cout<<endl;
        row=row+1;
    }
    
}
