#include <stdio.h>
#include <stdlib.h>

const int MAX = 100;
 
 
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\n%d", a[i]);
    }
}
 

void Tangdan(int a[], int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++){
            if(a[j]>a[i]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    printf("\nMang sau khi sap xep tang:\n");
    XuatMang(a,n);
}

void Giamdan(int a[], int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++){
            if(a[j]<a[i]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    printf("\nMang sau khi sap xep giam:\n");
    XuatMang(a,n);
}


int main(){
    int arr[MAX];
    int n;
    printf("\nNhap so luong phan tu: ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > MAX);
    printf("\n======NHAP MANG=====\n");
    NhapMang(arr, n);
    printf("\n======NHO DEN LON=====\n");
    Tangdan(arr, n);
    printf("\n======LON DEN NHO=====\n");
    Giamdan(arr, n);
}
