#include<stdio.h>

// we should also pass the number of elements also as this may result in some pointer error
void sort(int [], int);
void print(int [], int);

int main(){

    int a[]={1,4,5,3,2,6};
    int len = sizeof(a)/sizeof(a[0]);

    // sorting the array
    sort(a, len);
    print(a, len);
    

    return 0;
}

void sort(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                // swap
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void print(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d -> ",a[i]);
    }
    printf("\n");
}