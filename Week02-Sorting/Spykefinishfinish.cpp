#include <iostream>
#include <conio.h>

using namespace std;
void cycleSort(int arr[], int n);

int main()
{
    int secretary_number;
    int level=0;
    int press=0;
    cin>>secretary_number;

    int spyke[secretary_number];

    for(int i=0; i<secretary_number; i++)
    {
        cin>>spyke[i];
    }

    cycleSort(spyke, secretary_number);

  for(int i=0; i<secretary_number;i++)
    {
        press=i+2;
        if(spyke[i]==spyke[i+1] && spyke[i]!=0)
        {
            level++;
        }
        if(spyke[i]==spyke[press]&&spyke[i]!=0)
        {
            level=-1;
            break;
        }
    }
    cout << level << endl;
}

void cycleSort(int arr[], int n)
{
    int writes = 0;

    for (int cycle_start = 0; cycle_start <= n - 2; cycle_start++) {
            int item = arr[cycle_start];

        int pos = cycle_start;
        for (int i = cycle_start + 1; i < n; i++)
            if (arr[i] < item)
                pos++;

        if (pos == cycle_start)
            continue;

        while (item == arr[pos])
            pos += 1;

        if (pos != cycle_start) {
            swap(item, arr[pos]);
            writes++;
        }

        while (pos != cycle_start) {
            pos = cycle_start;


            for (int i = cycle_start + 1; i < n; i++)
                if (arr[i] < item)
                    pos += 1;

            while (item == arr[pos])
                pos += 1;

            if (item != arr[pos]) {
                swap(item, arr[pos]);
                writes++;
            }
        }
    }
}
