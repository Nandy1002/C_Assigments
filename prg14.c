// binary search and linear search
#include<stdio.h>
int main(){
    int n,x;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("Binary Search : \n");
    int a[n];
    printf("Enter the array elements in sorted order : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element for binary Search : ");
    scanf("%d",&x);
    int l = 0, r = n-1;
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (a[m] == x){
            printf("The %d element is in %d index\n",x,m);
            goto linear;
        }
 
        // If x greater, ignore left half
        if (a[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
    printf("The element is not in the array.\n");
    linear:
    printf("Linear Search : \n");
    printf("Enter the array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element for binary Search : ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(a[i] == x){
            printf("The element %d is in %d index.\n",a[i],i);
            return 0;
        }
    }
    printf("The element %d is not in the array",x);

}
