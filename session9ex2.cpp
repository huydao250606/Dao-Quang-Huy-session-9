#include<stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};
	printf("cho mang sau: ");
	for(int i=0;i<5;i++){
		printf("%3d",arr[i]);
	}
	printf("\nnhap vi tri can sua: ");
	int a;
	scanf("%d",&a);
	printf("nhap gia tri: ");
	int b;
	scanf("%d",&b);
	arr[a-1]=b;
	for(int i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
