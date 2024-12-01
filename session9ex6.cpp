#include<stdio.h>

int main(){
	int ans;
	int a,b;
	int numbers[100][100];
	int tich=1;
	int sum=0;
	do{	
		printf("                    MENU\n");
		printf("1.nhap kich co va gia tri cac phan tu cua mang\n");
		printf("2.in gia tri cac phan tu cua mang theo ma tran\n");
		printf("3.in cac phan tu la le va tinh tong\n");
		printf("4.in ra cac phan tu nam tren duong bien va tinh tich\n");
		printf("5.in ra cac phan tu nam tren duong cheo chinh\n");
		printf("6.in ra cac phan tu nam tren duong cheo phu\n");
		printf("7.in ra dong co tong gia tri cac phan tu la lon nhat\n");
		printf("8.thoat\n");
		printf("nhap lua chon cua ban: ");
		scanf("%d",&ans);
		switch(ans){
			case 1:
				printf("nhap so hang: ");
				scanf("%d",&a);
				printf("nhap so cot: ");
				scanf("%d",&b);
				if (a <= 0 || b <= 0 || a > 100 || b > 100) {
                    printf("Kich thuoc khong hop le! Vui long nhap lai.\n");
                    break;
            }
				for(int i=0;i<a;i++){
					for(int j=0;j<b;j++){
						printf("nhap phan tu [%d][%d]: ",i+1,j+1);
						scanf("%d",&numbers[i][j]);
					}
				}
				break;
			case 2:
				for(int i=0;i<a;i++){
					for(int j=0;j<b;j++){
						printf("%3d",numbers[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				for(int i=0;i<a;i++){
					for(int j=0;j<b;j++){
						if(numbers[i][j]%2!=0){
							printf("%d",numbers[i][j]);
							sum+=numbers[i][j];
							printf("\n");
						}
					}
				}
				printf("tong cac so le =%d",sum);
				break;
			case 4:
				for(int i=0;i<a;i++){
					for(int j=0;j<b;j++){
						if(i==0||i==a-1||j==0||j==b-1){
							printf("%d",numbers[i][j]);
							tich*=numbers[i][j];
							printf("\n");
						}
					}
				}
				printf("tich phan tu nam tren duong bien =%d",tich);
				break;
			case 5:
				for(int i=0;i<a;i++){
					for(int j=0;j<b;j++){
						if(i==j){
							printf("%d",numbers[i][j]);
							printf("\n");
						}	
					}
				}
				break;
			case 6:
                if (a != b) {
                    printf("Khong the tim duong cheo phu vi ma tran khong vuong\n");
                    break;
                }
                for (int i = 0; i < a; i++) {
                    int j = a - 1 - i;
                    printf("%d ", numbers[i][j]);
                }
                printf("\n");
                break;
            case 7:
            	int sum1 =0;
            	int sohang =0;
                for(int i=0;i<a;i++){
                	int sum2=0;
                	for(int j=0;j<b;j++){
                		sum2+=numbers[i][j];
					}
				    if(sum2>sum1){
					sum1=sum2;
					sohang=i;
				    }	
				}
				printf("day co tong lon nhat la: ");
				for(int j=0;j<b;j++){
					printf("%3d",numbers[sohang][j]);
				}   			 
                printf("\n tong bang: %d\n", sum1);
				break;
		}
	}while(ans != 8);
	return 0;
}
