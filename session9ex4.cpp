#include<stdio.h>

int main(){
	int arr[100];
	int ans;
	int leng;
	printf("               MENU\n");
	printf("1.nhap vao mang\n");
	printf("2.hien thi mang\n");
	printf("3.them phan tu\n");
	printf("4.sua phan tu\n");
	printf("5.xoa phan tu\n");
	printf("6.thoat\n");
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
	            break;
			case 4:
				printf("nhap phan tu can sua: ");
				int phantu;
				scanf("%d",&phantu);
				printf("nhap gia tri can sua: ");
				int sua;
				scanf("%d",&sua);
				arr[phantu]=sua;
				break;
			case 5:
				printf("\nnhap vi tri can sua: ");
	            int c;
	            scanf("%d",&c);
	            printf("nhap gia tri: ");
	            int d;
	            scanf("%d",&b);
	            arr[c-1]=d; 
				break; 
		}
	}while(ans!=6);
	
	
    return 0;
}
