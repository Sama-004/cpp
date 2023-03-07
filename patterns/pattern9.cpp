#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while (row<=n)
    {                           /*steps
                                1 number of rows
                                2 number of columns
                                3 what to print */
        int column=1;
        while (column<=row)
        {
            cout<<row-column+1;
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }
    
    return 0;
}