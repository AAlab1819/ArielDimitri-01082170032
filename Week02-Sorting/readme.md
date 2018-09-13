For the 768A (oath), i use shell sort. 
improves on the insertion sort by breaking the original list into a number of smaller sublists, each of which is sorted using an insertion sort. The unique way that these sublists are chosen is the key to the shell sort. Instead of breaking the list into sublists of contiguous items, the shell sort uses an increment i
 In this case, we begin with n/2 sublists. 
 just like this
 
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
        Eventually, a single list is sorted with the basic insertion sort. 
 At first glance you may think that a shell sort cannot be better than an insertion sort, since it does a complete insertion sort as the last step. It turns out, however, that this final insertion sort does not need to do very many comparisons (or shifts) since the list has been pre-sorted by earlier incremental insertion sorts, as described above. In other words, each pass produces a list that is “more sorted” than the previous one. This makes the final pass very efficient.
 
 
 For the 291A I use cycle sort
 just like what i searched in google, Cycle sort is an in-place, unstable sorting algorithm, a comparison sort that is theoretically optimal in terms of the total number of writes to the original array, unlike any other in-place sorting algorithm. 
 
so it is like based on the idea that the permutation to be sorted can be factored into cycles. Unlike nearly every other sort, items are never written elsewhere in the array simply to push them out of the way of the action

just like this

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
    
    
    For the dragons,
    i use brick sorting, or can be called odd-even sorting.  It functions by comparing all odd/even indexed pairs of adjacent elements in the list and, if a pair is in the wrong order (the first is larger than the second) the elements are switched.
    The next step repeats this for even/odd indexed pairs (of adjacent elements). Then it alternates between odd/even and even/odd steps until the list is sorted. 
    
    just like this :
    
    for (int i=1; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
             {
                swap(arr[i], arr[i+1]);
                swap(barr[i], barr[i+1]);
                isSorted = false;
              }
        }
        
        it shows us the use of odd-even in this sort.
        
         for (int i=0; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                swap(barr[i], barr[i+1]);
                isSorted = false;
            }
        }
        
     
