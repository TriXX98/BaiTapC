#include<stdio.h>
#include<conio.h>
#include<math.h>

int Fibonaci(int n){
// n phần tử
// tính dãy Fibonaci theo f
// sử dụng như này ta có thể in ra vị trí thứ n trong dãy Fiboanci
//if(n == 1 || n ==2)
//{
//    return 1;
//}
//else {
//    return n = Fibonaci(n-1) + Fibonaci(n-2);
//
//}
// nếu ko sử dụng biến tĩnh thì các kết quả từ phép tính sẽ nhảy vào các ô nhớ
static int n1=0,n2=1,n3;

// biến tĩnh thì nằm cố dịnh bên trong hàm
// khởi tạo 1 lần duy nhất và hoạt động trong suốt quá trình chạy
// Ở đây các giá trị biến tĩnh sẽ đc tích lũy dựa vào các phép tính ở dòng  23 24 25 :))
if(n>0)
{ n3 = n1 + n2;
  n1 = n2 ;
  n2 = n3 ;
  printf("%d " , n3);
  // trả về các số trong dãy Fibonaci bắt đầu từ 1
   return Fibonaci(n-1);
}
}

void main(){
    printf("\tFIBONACI");
int n ;
printf("\nNhap so phan tu: ");
scanf("%d",&n);
printf("\nDay Fibonaci:  ");
// n -2 vì trong dãy hiện giờ đã có 2 số 0 1
Fibonaci(n-2);


//printf("%d",Fibonaci(n));

}
