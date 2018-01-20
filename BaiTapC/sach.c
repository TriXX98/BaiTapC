#include <stdio.h>
#include <stdlib.h>
typedef struct Sach
{
    int Masach, MaNXB;
    char Tensach[100];
    char Tacgia[100];
}Sach;
void Taodanhmucsach (Sach a[100], int *n)
{
    printf("Nhap so luong dau sach:");
    scanf("%d",n);
    for(int i=1;i<=*n;i++)
    {
        printf("Ma sach cua dau sach thu %d la:",i);
        scanf("%d",&a[i].Masach);
        fflush(stdin);
        printf("Ma NXB cua dau sach thu %d la:",i);
        scanf("%d",&a[i].MaNXB);
        fflush(stdin);
        printf("Ten sach cua dau sach thu %d la:",i);
        gets(a[i].Tensach);
        printf("Tac gia cua dau sach thu %d la:",i);
        gets(a[i].Tacgia);
    }
}
void Hienthidanhsach (Sach a[100],int *n)
{
    for (int i=1;i<=*n;i++)
    {
        printf("Dau sach thu %d co ma sach la %d, ma NXB la %d, co ten la %s, cua tac gia %s\n",i,a[i].Masach,a[i].MaNXB,a[i].Tensach,a[i].Tacgia);
    }
}
void HienthisachtrongNXB(Sach a[100],int *n)
{
    int ma;
    printf("Danh sach cac dau sach co cung ma NXB \n");
    printf("Nhap ma:");
    scanf("%d",&ma);
    for (int i=1;i<=*n;i++)
    {
    if (ma==a[i].MaNXB)
    {
        printf("\nDau sach thu %d co ten la %s, ma sach la %d, cua tac gia %s\n",i,a[i].Tensach,a[i].Masach,a[i].Tacgia);
    }
}}
int main()
{
    int n,i,choice;
    struct Sach a[100];
    do
    {

        printf("\n1.Nhap danh sach");
        printf("\n2.Hien thi danh sach");
        printf("\n3.Hien thi danh sach theo NXB");
        printf("\n4.Ket thuc chuong trinh");
        printf("\nMoi ban nhap lua chon:");
        scanf("%d",&choice);
        printf("\n----------DANH SACH CAC DAU SACH CUA CAC TRUONG----------\n");
        switch (choice)
        {
            case 1:Taodanhmucsach(a,&n); break;
            case 2:Hienthidanhsach(a,&n); break;
            case 3:HienthisachtrongNXB(a,&n); break;
            case 4:exit(0); break;
            default: printf("Lua chon ban nhap khong howp le"); break;
        }
    }while(choice<=4);
    return 0;
}
