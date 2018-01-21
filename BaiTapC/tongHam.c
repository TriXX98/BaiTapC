#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhap(int *n){
    printf("\nNhap vao so nguyen n: ");
    scanf("%d",n);

}
int Tong(int n ){

   int  sum = (1-5)*(1-5);

    if(n == 1) return sum;
    else {
         return n*n + Tong(n-1);
         }

}

double tongCos(int n){
int i ;
double sum =0 ;
for(i=1 ;i<=n ;i++){
    sum += cos((double)i)*cos((double)i);
}
return sum;

}

double tongSin(int n){
 if(n==1 ) return sin(1)* sin(1);
 else return   sin(n)*sin(n)+tongSin(n-1);

}




void main(){
    int choice;
    int n;

    do
    {

        printf("\n\t                   MOI BAN CHON\n");
        printf("		   ============================\n");
        printf("		    1. Tinh tong ham ((x-5)*(x-5)) tu 1 den N\n");
        printf("		    2. Tinh tong ham cos(x)2 tu 1 den N\n");
        printf("		    3. Tinh tong ham sin(x)2 tu 1 den N\n");
        printf("		    4. Ket thuc.\n");
        printf("\nMoi ban chon: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
             nhap(&n);
            printf("Tong cua day S la: %d ",Tong(n));

                break;
        case 2:
               nhap(&n);
                printf("Tong cua day Cos(n)^2 la : %lf ",tongCos(n));
                break;
        case 3: nhap(&n);
                 printf("Tong cua day Sin(n)^2 la: %lf ",tongSin(n));

               break;
        case 4:
            exit(0);
            break;
            default : printf("\nMoi ban nhap lai  lua chon");
        }
    }
    while (choice!=4);
}





