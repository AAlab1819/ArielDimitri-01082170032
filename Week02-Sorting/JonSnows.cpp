#include <iostream>

using namespace std;
int shellSort(int arr[], int n);

int main()
{

    int steward_number;
    int level=0;
    cin>>steward_number;

    int strength[steward_number];

    for(int i=0; i<steward_number; i++)
    {
        cin>>strength[i];
    }

    shellSort(strength, steward_number);

    for(int i=0; i<steward_number; i++)
   {
       if(strength[i]>strength[0] && strength[i]<strength[steward_number-1])
       {
           level++;
       }
   }
   cout<<level<<endl;
}

int shellSort(int arr[], int n)
{

    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
    {

            int temp = arr[i];


            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
            }

            arr[j] = temp;
        }
    }
}



