#include <stdio.h>
 

void NhapMang(int a[], int n){

    for (int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d] = ", i +1);
        scanf("%d", &a[i]);
    }
    
 }
void XuatHien(int a[], int b[], int n){
    int x;
        for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[j] == a[i])
            {
                b[i]++;
                
            }
            
        }
    }
    int max =1;
    for (int i = 0; i < n; i++)
    {
        if (b[i] > max)
        {
           max =b[i];
           x = i;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == max)
        {
        
           printf("\nGia tri  %d xuat hien nhieu nhat %d ", a[i], b[i] );
           
       
        }
        
    } 

    printf("\nTai vi tri");
    for (int i = 0; i < n; i++)
        {
            if (a[i] == a[x])
            {
            printf(" %d ", i+1); 
            }
                
        }
    
}

int main(int argc, char const *argv[])
{
    int a[100],b[100] ={0};
    int n,x;
    do
    {
        printf("nhap so phan tu : ");
        scanf("%d",&n);
    } while (n<0 || n > 100);
    NhapMang(a,n);
    XuatHien(a,b,n);

    return 0;
}
