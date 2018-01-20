#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
printf("\n\tTONG THU NHAP GDP ");
float GDP , tocdo , goc ;
int nam;
nhap(&GDP , &tocdo);
In(&GDP , &tocdo , & goc);
getch();
}

void nhap( float *GDP , float *tocDo){
printf("\nNhap GDP nam 2014 : ");
scanf("%f", GDP);
printf("\nNhap toc do tang truong (%) : ");
scanf("%f", tocDo);

}
void In( float *GDP , float *tocDo , float *goc){
 int nam = 2014;
 *goc = *GDP;
 printf("\n    BANG SO LIEU TOC DO TANG TRUONG ");
 printf("\n \t+=================+");
 printf("\n \t|  NAM  |   GDP   |");
 do{
 printf("\n \t|  %-3d | %6.2f  |", nam++ , *GDP);
    *GDP += *GDP* (*tocDo/100);

 }while(*GDP <= 2**goc);
  printf("\n \t+=================+");
}
