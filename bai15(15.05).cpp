#include <stdio.h>
int main(){
	int n, i;
	printf("\nnhap mot so nguyen duong: ");
	scanf("%d", &n);
	for(i = 3; i <= n; i++){
		if(i % 3 == 0 || i % 5 == 0){
	    	printf("%d\n", i);
		}
	}
	return 0;
}
		
