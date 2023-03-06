//triangular pattern with row number and then row number +1
#include <iostream>
using namespace std;
int main(){
    int rown;
    cin>>rown;
    int row=1;
    int count=1;
    while (row<=rown)
    {
        int column=1;
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