#include <iostream>

using namespace std;
void evodSort(int [], int);

int main()
{
    int kirito;
    int dragon_number;

    cin>>kirito;
    cin>>dragon_number;

    int kirito_point[dragon_number];
    int dragon_strength[dragon_number];

    for(int i=0; i<dragon_number; i++)
    {
        cin>>dragon_strength[i];
        cin>>kirito_point[i];
    }

    evodSort(dragon_strength, dragon_number);
     for(int i=0; i<dragon_number; i++)
   {
       if (kirito>dragon_strength[i])
       {
           kirito=kirito+kirito_point[i];
           cout<<"YES";
       }
       if (kirito<dragon_strength[i])
       {
           cout<<"NO";
       }
   }


}

    void evodSort(int arr[],int barr[], int n)
{
    bool isSorted = false; // Initially array is unsorted

    while (!isSorted)
    {
        isSorted = true;

        // Perform Bubble sort on odd indexed element
        for (int i=1; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
             {
                swap(arr[i], arr[i+1]);
                swap(barr[i], barr[i+1]);
                isSorted = false;
              }
        }

        // Perform Bubble sort on even indexed element
        for (int i=0; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                swap(barr[i], barr[i+1]);
                isSorted = false;
            }
        }
    }

    return;
}
