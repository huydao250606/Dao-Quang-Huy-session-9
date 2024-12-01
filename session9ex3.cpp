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
	printf("nhap vi tri muon xoa: ");
	int a;
	scanf("%d",&a);
	for(int i=a-1;i<leng+1;i++){
		arr[i]=arr[i+1];
	}
	leng--;
	printf("mang sau khi xoa: \n");
	for(int i=0;i<leng;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
