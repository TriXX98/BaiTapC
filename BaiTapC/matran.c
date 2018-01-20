#include<stdio.h>
#include<stdlib.h>
void NhapMaTran (int a[100][100],int *n)
{
    int i,j;
    printf("\n\tNHAP MA TRAN");
    printf("\nNhap n= ");
    scanf("%d",n);

    for (i=1;i<=*n;i++)
    {
        for(j=1;j<=*n;j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void InMaTran(int a[100][100], int *n){
    int i , j;
    printf("\n\tIN MA TRAN\n");
    for (i=1;i<=*n;i++)
    {
        for(j=1;j<=*n;j++)
        {
            printf("\t%d ",a[i][j]);

        }
        printf("\n");
    }

}

void InCheoChinh(int a[100][100],int *n)
{   int i ,j;
    printf("\n\tIN PHAN TU TREN DUONG CHEO CHINH");
    printf("\nCac phan tu tren duong cheo chinh trong ma tran:\n");
     for (i=1;i<=*n;i++)
    {
        for(j=1;j<=*n;j++)
     {      if(i==j){

            printf("\t%d ",a[i][j]);
                    }
            else{
                printf("\t*");
            }
     }
     printf("\n");
    }

}
int main()
{
    int n;
    int a[100][100];
    int choice;
     do{
    printf("\n\tXU LI MA TRAN");
    printf("\n 1. Nhap vao 1 ma tran");
    printf("\n 2. Hien thi ma tran");
    printf("\n 3. In cac phan tu tren duong cheo chinh");
    printf("\n 4. Ket thuc");
    printf("\n Moi ban nhap lua chon: ");
    scanf("%d",&choice);
    switch(choice){
     case 1: NhapMaTran(a,&n);  break;
     case 2: InMaTran(a,&n);    break;
     case 3: InCheoChinh(a,&n); break;
             break;
    case 4: printf("Thoat chuong trinh"); break;
     default: printf("\nMoi ban nhap lai lua chon ");
              system("cls");
              break;

    }


 }while(choice !=4);

getch();
}
