#include<stdio.h>
#include<conio.h>
#include<math.h>

void nhapAbc(int *a ,int * b ,int *c){
 printf("\nNhap a= ");
 scanf("%d",a);
  printf("\nNhap b= ");
 scanf("%d",b);
 printf("\nNhap c= ");
 scanf("%d",c);
}
void giaiPT(int *a , int * b ,int *c){
printf("\n\tGiai phuong trinh bac 2  ");
float delta , x1 , x2   ;
delta = (*b* *b)-4**a**c;
x1 = (-*b-sqrt(delta))/(2**a);
x2 = (-*b+sqrt(delta))/(2**a);
if(*a == 0 ){
        printf("\nPhuong trinh co dang Bx + C = 0");
        if(*b==0){
                    printf("\nPhuong trinh vo nghiem");
}else{
            printf("\nNghiem cua phuong trinh la : %6.2f", (float)-*c/ *b);
}
}
else if(delta == 0){
        printf("\nPhuong trinh bac 2 co nghiem kep X = %6.2f",(float) -*b/2**a);


}else if(delta < 0){
printf("\nPhuong trinh bac 2 vo nghiem");
}
else {
    printf("\nPhuong tring bac 2 co 2 nghiem phan biet \nX1 =%6.2f \t X2 = %6.2f ", x1, x2);

}

}

void main(){
 int a , b, c ;
 printf("\tGIAI PHUONG TRINH BAC 2 \n\t     Ax2+Bx+C =0 ");
 nhapAbc(&a,&b,&c);
 giaiPT(&a,&b,&c);
 free(0);
getch();

}


