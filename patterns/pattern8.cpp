#include <iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int row=1;
    while (row<=m)
    {
        int column=1;
        while (column<=row)
        {
            
            cout<<row;
            

            column=column+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    
}