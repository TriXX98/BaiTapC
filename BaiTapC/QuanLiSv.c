#include<stdio.h>
#include<stdlib.h>

typedef struct sinhVien{
char name[30];
int age;
char cLass[10];

}sinhVien;

void addSV( int *n , sinhVien sv[100]){
    int i;
    printf("\n\tNHAP DANH SACH SINH VIEN");
 printf("\nNhap so luong sinh vien: ");
 scanf("%d",n);

 for(i=0;i<*n;i++){
   printf("\nNhap thong tin sinh vien thu %d ",i+1);
   printf("\nNhap ten: ");
   fflush(stdin);
   gets(sv[i].name);
   printf("\nNhap tuoi: ");
   scanf("%d",&sv[i].age);
   printf("\nNhap lop: ");
   fflush(stdin);
   gets(sv[i].cLass);
 }
}

void printSV(int *n , sinhVien sv[100]){
int i;
printf("\n\tIN DANH SACH SINH VIEN");
printf("\n+=========================================+");
printf("\n|      HO VA TEN       | TUOI |    LOP    |");
for(i=0;i<*n;i++){
    printf("\n|%-22s|%-6d|%-11s|",sv[i].name , sv[i].age , sv[i].cLass);

}
printf("\n+=========================================+");
printf("\n");

};
void foundSV(int *n , sinhVien sv[100]){
    int i ;
    char ht[30];
    printf("\nMoi ban nhap ten can tim ");
    fflush(stdin);
    gets(ht);
    for(i=0;i<*n;i++){
        if(strcmp(sv[i].name,ht)==0){
                printf("\nTim kiem thanh cong\n");
             printf("\nDANH SACH SINH VIEN TIM THAY");
		printf("\nSTT     HO TEN    TUOI     LOP");
		printf("\n%d\t%s\t%d\t%s",i+1,sv[i].name,sv[i].age,sv[i].cLass);
			break;

        }
        else{
            printf("\nKhong tim thay sinh vien");

        }

    }


}



void main(){
    int choice;
    int n;
    sinhVien sv[100];

    do{
        printf("\n\tQUAN LI SINH VIEN");
        printf("\n1. Nhap sinh vien");
        printf("\n2. Hien thi sinh vien");
        printf("\n3. Tim kiem sinh vien");
        printf("\n4. Thoat");
        printf("\nNhap lua chon cua ban: ");
        scanf("%d",&choice);
        switch(choice){
        case 1: addSV(&n,sv); break;
         case 2: printSV(&n,sv); break;
          case 3:foundSV(&n,sv); break;
           case 4: printf("\nBan da thoat chuong trinh"); break;
           default : printf("\nBan da nhap sai lua chon ");

        }




    }while(choice<4);
    getch();

}
