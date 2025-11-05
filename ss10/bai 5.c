#include<stdio.h>
	int main (){
		int n [6]={1,2,3,4,5,5};
		int x;
		int sum =0;
		
		printf(" phan tu trong mang la ");
		for ( int i=0; i<6; i++){
			printf("%d ",n[i]);
		}
		
		
		printf(" \n nhap vao gia tri can tim ");
		scanf("%d",&x);
		
		for(int i =0; i<6 ; i ++){
			if( n[i]== x){
			sum++; 
			}
			
		} 
			printf (" so lan phan tu xuat hien ") ;
			printf ("%d", sum) ;	 
				
		return 0;
	}
			
