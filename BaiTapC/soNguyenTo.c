#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapSo(int *n){

printf("Nhap so nguyen duong:  ");
scanf("%d",n);

if(*n>0){
    printf("\nThoa man la so nguyen duong\n");

}else if(*n<=0){
   printf("\nMoi ban thuc hien lai lenh\n");
   nhapSo(&n);
}
}
int checkSNT(int *n ){
    int i;
    if(*n==1){
            return 1;
    }else {
    for(i=2;i<=sqrt(*n);i++)
    {
    if(*n%i==0){
        return 0;
        }
    }
    return 1;
    }

}

void lapSoNT(int *n){
    int i ;
    printf("\nDay so nguyen to nho hon %d la: ",*n);
    for(i=2;i<=*n;i++){
    if(checkSNT(&i)){

        printf("%d ",i);
    }
}
    printf("\n");


}
int dequySNT(int n){
   int check =1  ;
   int i ;
   if(n==1) return 1;
   else{

   for(i=2;i<=sqrt(n);i++ )
{
    if(n%i==0)
    {
     check =0;
     return dequySNT(n-1);
    }
}

   if(check == 1)
    {
       printf("%d ",n);
       return dequySNT(n-1);
    }
   return dequySNT(n-1);
   }

}

void main(){
    int choice;
    int n;
    do{
        printf("\n\tIN DAY SO NGUYEN TO");
        printf("\n1.Nhap so nguyen duong");
        printf("\n2.Hien thi cac so nguyen to su dung vong lap");
        printf("\n3.Hien thi cac so nguyen to bang de quy");
        printf("\n4.Ket thuc chuong trinh");
        printf("\n Nhap lua chon: ");
        scanf("%d",&choice);
        switch(choice){
        case 1: nhapSo(&n); break;
        case 2: lapSoNT(&n); break;
        case 3:     {printf("\nDay so nguyen to nho hon %d la: ",n);
                    dequySNT(n);} break;
        case 4: printf("\nEXIT"); break;
        default: printf("\n Moi ban thuc hien lai !!!");
        }

    }while(choice !=4);


}
