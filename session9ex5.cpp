#include<stdio.h>

int main(){
	int arr[100];
	int ans;
	int leng;
	int sum=0;
	int max=arr[0];
    int min=arr[0];
   	int sum1=0;
	printf("               MENU\n");
	printf("1.nhap vao mang\n");
	printf("2.hien thi mang\n");
	printf("3.in phan tu la chan va tinh tong\n");
	printf("4.in ra gia tri lon nhat va nho nhat\n");
	printf("5.in cac phan tu la so nguyen to va tinh tong\n");
	printf("6.nhap vao mot so va thong ke co bao nhieu so\n");
	printf("7.them phan tu vao vi tri chi dinh\n");
	printf("8.thoat\n");
	do{
		printf("lua chon cua ban: ");
		scanf("%d",&ans);
		switch(ans){
			case 1:
				printf("nhap so phan tu cua mang: ");
	            scanf("%d",&leng);
	            for(int i=0;i<leng;i++){
		            printf("nhap phan tu thu %d: ",i+1);
		            scanf("%d",&arr[i]);
	            }break;
	        case 2:
			    for(int i=0;i<leng;i++){
			        printf("%3d",arr[i]);
	            
		        }
		        printf("\n");
				break;
			case 3:
				for(int i=0;i<leng;i++){
					if(arr[i]%2==0){
						printf("%d",arr[i]);
						sum+=arr[i];
						}
				}
				printf("tong cac so chan =%d",sum);
				break;	
			case 4:
	            for(int i=0;i<5;i++){
		            if(max<arr[i]){
			            max=arr[i];
		            }
	            }
	            for(int i=0;i<5;i++){
		            if(min>arr[i]){
			            min=arr[i];
		            } 
	            }
	            printf("max la: %d\n",max);
	            printf("min la: %d\n", min);
				break;			
			case 5:
				for(int i=0;i<leng;i++){
					for(int j=2;j<arr[i];j++){
						if(arr[i]%j==0){
							break;
						}
						printf("%d",arr[i]);
						sum1+=arr[i];
						printf("\n");
					}
				}
				printf("tong cac so nguyen to= %d\n",sum1);
				break;
			case 6:
				int hoi;
				printf("nhap so: ");
				scanf("%d",&hoi);
				for(int i=0;i<leng;i++){
					if(arr[i]==hoi){
						printf("%d",arr[i]);
					}
				}
				break;
			case 7:
				printf("nhap gia tri can them: ");
	            int a;
	            scanf("%d",&a);
	            printf("nhap vi tri can them: ");
	            int b;
	            scanf("%d",&b);
	            for(int i=leng;i>b;i--){
		            arr[i]=arr[i-1];
	            }
	            arr[b]=a;
	            leng++;
	            printf("mang sau khi them phan tu: ");
		        for(int i=0;i<leng;i++){
			        printf("%3d",arr[i]);
		        }
				break;
		}	
	}while(ans!=8);
    return 0;
}
