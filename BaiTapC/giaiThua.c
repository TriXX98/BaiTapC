#include<stdio.h>
#include<math.h>
#include<conio.h>
// Sử dụng đệ quy để tính n!
long giaiThua( n){
if( n<=1){
    return 1;
}
return  n = n*giaiThua(n-1);
}
// do bước thực hiện đệ quy chiếm dụng nhiều bộ nhớ
// nên khi ta nhập số lớn > 35 thì sẽ trả về 0
void main(){
    printf("\tGIAI THUA");
    long n ;
    printf("\nNhap n : ");
    scanf("%ld",&n);
    printf("\n%ld! = %ld ",n ,giaiThua(n));
getch();
}
