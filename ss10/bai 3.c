#include<stdio.h>
	int main(){
			int n, flag = 0;
			printf("nhap so phan tu cua mang: ");
			scanf("%d", &n);
			
			int arr[n];
			printf("nhap cac phan tu trong mang: ");
			for(int i = 0; i < n; i++){
				scanf("%d", &arr[i]);
			}
			int x;
			printf("nhap so can tim: ");
			scanf("%d",&x);
			
			for(int i = 0; i < n ; i++){
				if (arr[i] == x){
				printf("so phan tu tim thay tai vi tri %d", i);
				flag = 1;
				break;
				}
			}
			if (!flag){
				printf("khong tim thay \n");
				}
		return 0;
	}
