#include<stdio.h>
#include<conio.h>
void nhapDay(int a[100] , int *n){
    int i;
printf("\nNhap so phan tu cua day: ");
scanf("%d",n);
printf("\nNhap day so : ");
for(i=0;i<*n;i++){
    printf("\nNumber %d : ",i+1);
    scanf("%d",&a[i]);
}
}

int maxDay( int a[100], int n){
if(n == 1) return a[0];

else{

    if(a[n-1]> maxDay(a,n-1)){
    return a[n-1];}

    else{
        return maxDay(a,n-1);
    }
  }
}

int sumDay(int a[100], int n){
if(n==1) return a[0];
 return a[n-1] + sumDay(a,n-1);
}




void main(){
    int choice;
int a[100], n;
 do{
    printf("\n\tCHUC NANG CUA DAY SO");
    printf("\n 1. Nhap day so");
    printf("\n 2. Tim phan tu lon nhat");
    printf("\n 3. Tinh tong day");
    printf("\n 4. Ket thuc");
    printf("\n Moi ban nhap lua chon: ");
    scanf("%d",&choice);
    switch(choice){
     case 1: nhapDay(a,&n); break;
     case 2: printf("\nPhan tu lon nhat cua day %d phan tu la: ",n);
             printf("%d ",maxDay(a,n) );
             break;
     case 3: printf("\nTong cua cac so trong day la:  ");
             printf("%d",sumDay(a,n));
             break;
     case 4: printf("\nThoat !!!");  break;
     default: printf("\nMoi ban nhap lai lua chon "); break;

    }


 }while(choice !=4);
}

