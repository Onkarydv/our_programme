#include<stdio.h>
int countodd(int arr[],int n);

int main(){
     int arr[]={1,2,3,4,5,6,8,9,9,3,6,5,7,5,7};
     printf("%d", countodd(arr,15));

     return 0;

}

int countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 !=0 ){
            count++;

        }

}
return count;
}