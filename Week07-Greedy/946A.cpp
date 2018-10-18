#include <iostream>

using namespace std;

int main()
{
    {

    int i, j, k;
    int n,m,x;

    cin>>n;

    int b=0,c=0;
    for(i=0;i<n;i++)
    {
        cin>>m;

        if(m<0)
            c+=m;
        else
            b+=m;
    }

    cout<<(b-c);

    return 0;
}
}
