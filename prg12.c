// bubble sort and selection sort

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);
    int a[n];
    printf("Selection sort Algorithm :- \n");
    printf("Enter the array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //selection sort algorithm
    int min=0;
    for(int i=0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(a[min]>a[j]){
                    min = j;
                }
            }
			//swapping
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    printf("After selection sort the array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("Bubble sort Algorithm :- \n");
    printf("Enter the array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //bubble sort algorithm
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
				//swapping
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("After bubble sort the array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
