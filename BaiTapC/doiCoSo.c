#include<stdio.h>
#include<stdlib.h>

void Nhap(int *n){
printf("\nNhap so n: ");
scanf("%d",n);
if(*n<0){
    printf("\nKhong thoa man so nguyen duong\n");
    Nhap(*n);
}else {printf("\nThoa man so nguyen duong");}

}
void from10To2( int *n , int a[]){
    int i=0 , j;
while(*n>0){
    a[i] = *n%2;
    *n = *n/2;
    i++;
}
for(j=i-1 ; j>=0 ; j--){
    printf("%d",a[j]);

}
}
int from10To8(int n){
 if(n<8){
    printf("%c","01234567"[n]);
    return;
 }else  from10To8(n/8);

   printf("%c","0123434567"[n%8]);

}


void main(){
 int choice;
 int n;
 int a[100];
 do
    {

        printf("\n\t                   MOI BAN CHON\n");
        printf("		   ============================\n");
        printf("		    1. Nhap so nguyen duong(he 10)\n");
        printf("		    2. Chuyen sang he 2\n");
        printf("		    3. Chuyen sang he 8\n");
        printf("		    4. Ket thuc.\n");
        printf("\nMoi ban chon: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:Nhap(&n);
            break;
        case 2: printf("\nSo %d chuyen sang co so 2 la: ",n);
                from10To2(&n,a);
            break;
        case 3: printf("\nSo %d chuyen sang co so 8 la: ",n);
                from10To8(n);
            break;
        case 4:
            exit(0);
            break;
            default : printf("\nMoi ban nhap lai !!!"); break;
        }
    }
    while (choice!=4);

}
