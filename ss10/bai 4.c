#include<stdio.h>
	int main (){
		int n [5]={2,1,3,7,6};
		
		printf("cac phan tu trong mang la ");
		for(int i =0; i<5 ; i++){
			printf ( "%d ",n [i]);
		}
		
	for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (n[j] > n[j + 1]) {
               
                int temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

   
    printf("\nMang sau khi sap xep tang dan: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", n[i]);
    }
		
		
		return 0;
	}
