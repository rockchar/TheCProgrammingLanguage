//
//  main.c
//  BinarySearch
//
//  Created by Rohit Kumar on 24/04/22.
//

#include <stdio.h>

int BinarySearch(int x,int *arr,int size);

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int x = 3;
    int result = BinarySearch(x, arr, 12);
    if(result == -1)
    {
        printf("Not Found %d\n",x);
    }
    else{
        printf("Found number %d\n",result);
    }
    return 0;
}
/* Binary Search */
int BinarySearch(int x,int *arr,int size)
{
    int low=0,high=size-1,mid=0;
    for( ; (low<=high);(x<arr[mid])? (high=mid-1):(low=mid+1),mid = (low+high)/2)
    {
        if(x == arr[mid])
        {
            printf("Found\n");
            return x;
        }
    }
    return -1;
}

