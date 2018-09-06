#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int yelldis, bluedis, yellball, blueball, greenball;
    int prod,acquire,total;
    int yellcrys = 0;
    int bluecrys = 0;

    cin>>yelldis>>bluedis;
    cin>>yellball;blueball;greenball;

    while (yellball>0)
    {
       yellcrys = yellcrys+2;
       yellball--;
    }

    while (greenball>0)
    {
       yellcrys++;
       bluecrys++;
       greenball--;
    }

    while (blueball>0)
    {
       bluecrys = bluecrys+3;
       blueball--;
    }

    total = yelldis + bluedis;
    prod = yellcrys + bluecrys;
    acquire = prod - total;

    cout<<acquire<<endl;
}
