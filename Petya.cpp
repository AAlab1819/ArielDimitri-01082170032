#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{

    int randnum, anotherrand, ave;
    srand(time(NULL));
    randnum = rand()%ave;
    anotherrand = rand()%ave;

    int counterNum;
    while(ave<3 || ave>10000)
    {
        cin >> ave;
    }

    for (int i=2 ; i<ave; i++)
    {

    while(randnum>=anotherrand || randnum+anotherrand!=ave || (anotherrand%i==0&&randnum%i==0))
        {

            anotherrand=rand()%ave+1;
            randnum=rand()%ave+1;
        }

    }

    cout << randnum << " " << anotherrand << endl;

}
