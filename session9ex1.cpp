#include<stdio.h>

int main(){
	int arr[100];
	int leng;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&leng);
	for(int i=0;i<leng;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
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
	return 0;
}
