#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float km, sotien;
    printf("nhap so km: ");
    scanf("%f", &km);
    if (km <= 1)
    {
        printf("So tien la 5000 dong ");
    }
    else if (km <= 30)
    {
        sotien =5000 + (km-1) * 4000;
        printf("So tien phai tra la %f dong ",sotien);
    }
    else if (km > 30)
    {
        sotien =5000 + 29 * 4000;
        sotien = sotien + (km-30) * 3000;
        printf("So tien phai la %f dong ", sotien);
    }
    
    return 0;
}
