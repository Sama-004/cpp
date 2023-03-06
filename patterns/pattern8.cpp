#include <iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int row=1;
    while (row<=m)
    {
        int column=1;
        int count=row;
        while (column<=row)
        {
            cout<<count;
            count=count+1;

            column=column+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    
}