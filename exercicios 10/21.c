#include<stdio.h>
#include<stdlib.h>

main(){

	int a[5] = {1,2,3,4,5}, b[5]={1,3,5,7,9}, i,k = 0,j, c[5];

	for( i = 0; i < 5; i++){
		for( j = 0; j < 5; j++){
			if(a[i] == b[j]){
				c[k++] = a[i];
				break;
			}


		}
	}
	for( i = 0; i < k; i++){
		printf("\n %d", c[i]);
	}


}
