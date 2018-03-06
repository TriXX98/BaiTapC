#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhap(int *n , int a[][100]){
    int i ,j;
    printf("\n\tXu Li Nhap");
    printf("\nNhap n= ");
    scanf("%d",n);
    printf("\nNhap ma tran cap %d \n",*n);
    for(i=0;i<*n;i++){
        for(j=0;j<*n;j++){
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }

    }
}
void in(int n ,int a[][100]){
int i , j;
printf("\n\tXu Li In");
printf("\n\tMa tran vuong cap %d \n ",n);
 for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\t%d",a[i][j]);

        }
        printf("\n");
    }
}
void inDuongCheo(int n , int a[][100] ){
    int i ,j;
    printf("\n\tIn Duong Cheo Chinh\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(i==j)
            printf("\t%d",a[i][j]);
         else printf("\t*");
        }
        printf("\n");
    }
}
int Max(int n , int a[][100]){
    int max = a[0][0];
    int i , j;
for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if( max < a[i][j])
                max = a[i][j];
        }
}
  return max ;
}

int Min(int n , int a[][100]){
    int min = a[0][0];
    int i , j;
printf("\n\tGTNN cua ma tran\n");
for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if( min > a[i][j])
                  min = a[i][j];
        }
  }
    return min;
}

void sortHang(int n , int a[][100]){
    int i ,j , k;
printf("\n\tSap xep tang dan theo hang\n");
//for(i=0;i<n*n-1;i++){
//        for(j=i+1;j<n*n;j++){
//                if( a[i/n][i%n] > a[j/n][j%n]){
//                    int temp = a[i/n][i%n];
//                    a[i/n][i%n] = a[j/n][j%n];
//                    a[j/n][j%n] = temp;
//                }
//
//        }
//  }
for(k=0;k<n;k++){
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
                if( a[k][j] < a[k][j-1]){
                    int temp = a[k][j];
                    a[k][j] = a[k][j-1];
                    a[k][j-1] = temp;
                }

        }
  }
}

  return in(n,a);
}
void sortCot(int n , int a[][100]){
    int k , i ,j;
    printf("\n\tSap xep tang dan theo cot\n");
    for(k=0;k<n;k++){
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
                if( a[j][k] < a[j-1][k]){
                    int temp = a[j][k];
                    a[j][k] = a[j-1][k];
                    a[j-1][k] = temp;
                }

        }
  }
}

  return in(n,a);
}

int Thu2(int n ,int a[][100] ){
    int max2 = 0;
    int i ,j;

for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                if(a[i][j] != Max(n,a) && max2 < Max(n,a) && max2 < a[i][j])
                       max2 = a[i][j];
}
        }
     return max2;
}

int checkSNT(int n){
int i;
int check =0 ;
if(n<2){return check; }
else{
for(i=2;i<=sqrt(n);i++){
    if(n%i==0){
        return check;
    }
  }
}
return 1;


}



int Congsonguyento(int n ,int a[][100])
{
    int i,j;
    int sum=0;
    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (checkSNT(a[i][j])== 1){
                sum+=a[i][j];
            }
        }
    }
    return sum;
}

void main(){
 int choice ;
 int n , a[100][100];
 do{
      printf("\n\t----Xu Li Ma Tran----");
      printf("\n1. Nhap ma tran vuong cap n ");
      printf("\n2. In ma tran");
      printf("\n3. In cac phan tu tren duong cheo chinh");
      printf("\n4. GTLN cua ma tran");
      printf("\n5. GTNN cua ma tran");
      printf("\n6. Sap xep cac phan tu tang dan theo dong");
      printf("\n7. Sap xep cac phan tu tang dan theo cot");
      printf("\n8. Tim phan tu lon thu 2 trong ma tran");
      printf("\n9. Tinh tong cac so nguyen to trong ma tran");
      printf("\n0. Ket thuc chuong trinh");
      printf("\nMoi ban nhap lua chon: ");
      scanf("%d",&choice);
    switch(choice){
            case 1: nhap(&n,a); break;
            case 2: in(n,a); break;
            case 3: inDuongCheo(n,a); break;
            case 4: printf("\n\tGTLN cua ma tran\n");
                    printf("GTLN la : %d",Max(n,a)); break;
            case 5: printf("GTNN la : %d",Min(n,a));break;
            case 6: sortHang(n,a);break;
            case 7: sortCot(n,a);break;
            case 8: printf("\nPhan tu lon thu 2 trong ma tran la : %d",Thu2(n,a));break;
            case 9: printf("\n\tXu Li Tinh Tong");
                    printf("\nTong cac so nguyen to trong ma tran la : %d",Congsonguyento(n,a));break;
            case 0: printf("\nThoat");
                    exit(0);
             break;
             default : system("cls");
    }
 }while(choice!=0);


}
