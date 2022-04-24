//
//  main.c
//  ShellSort
//
//  Created by Rohit Kumar on 24/04/22.
//

#include <stdio.h>

void ShellSort(int * arr, int nSize);
void shellSortFromNet(int array[], int n);

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[]={ 3,9,1,19,2,88,54,12,99,32,45,43,31,86,56,76,75 };
    ShellSort(arr,17);
    for(int i=0 ;i<7;i++)
    {
        printf("%d ",arr[i]);
        
    }
    int arr1[]={ 3,9,1,19,2,88,54,12,99,32,45,43,31,86,56,76,75 };
    printf("\n\n\n Shell Sort from net\n");
    shellSortFromNet(arr1,17);
    for(int i=0 ;i<7;i++)
    {
        printf("%d ",arr1[i]);
        
    }
    return 0;
}


void ShellSort(int * arr, int nSize)
{
    int i,j,k=0;
    for( int gap = nSize/2 ; gap > 0 ; gap /=2 )
    {
        for( i = 0 ;i+gap < nSize ; i++ )
        {
            
            for (j=i+gap;j<nSize;j+=gap) {
                
                if(arr[i] > arr[j])
                {
                    k++;
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    printf("Swapped pos %d and %d\n",i,j);
                }
            
            }
        }
    }
    printf("number of swaps = %d\n",k);
    
}
                      
                      // Shell sort
void shellSortFromNet(int array[], int n) {
    int k=0;
// Rearrange elements at each n/2, n/4, n/8, ... intervals
for (int interval = n / 2; interval > 0; interval /= 2) {
  for (int i = interval; i < n; i += 1) {
    int temp = array[i];
    int j;
    for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
      array[j] = array[j - interval];
        printf("Swapped pos %d and %d\n",j-interval,j);
        k++;
    }
    array[j] = temp;
  }
}
    printf("number of swaps = %d\n",k);
}
