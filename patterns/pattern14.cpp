#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    
    while (row<=n)
    {
        int column=1;
        
        while (column<=row)
        {
            char ch='A'-1+row;
            cout<<ch;
            column=column+1;
           
        }
        cout<<endl;
        row=row+1;
    }
    
}
