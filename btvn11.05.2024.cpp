//t�nh tong c�c so chan tu 1 den 100 bang c�ch su dung v�ng lap for v� while �p dung h�m
#include <stdio.h>
int main(){
	int S, i, kqFor, kqWhile;
	 kqFor = vongFor;
 	 kqWhile = vongWhile;
 	 printf("\nKet qua cua ham For la:%d", kqFor);
 	 printf("\nKet qua cua ham While la: %d", kqWhile);
 	 return 0;
}
int vongFor(int kqFor){
	int S, i;
	for( i = 2; i <= 100; i++){
		if(i % 2 == 0){
			S+= i;
}
}
printf ("S = %d", S);
return 0;
}
int vongWhile(int kqWhile){
 int S, i;
 do{
  	for( i = 2; i <= 100; i++){
		if(i % 2 == 0){
			S+= i;
}
while(i >= 100);
printf ("S = %d", S);
 }
}
 
