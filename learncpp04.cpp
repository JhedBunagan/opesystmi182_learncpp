#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int i,j,n;
    cout << "Enter a number: " << endl;
    cin >> n;
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=(int)pow(i,0.5);j++)
        {
            if(i%j==0)
            {
                cout << i << " is a composite" << endl;
                break;
            }    
        }
    }
    return 0;
}
