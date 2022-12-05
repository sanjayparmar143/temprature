#include<stdio.h>


main(){
  
  int a;
  int n = 0;
    
  	printf("Enter integer: ");
  	scanf("%i",&n);
 
   		for(a = 0; n != 0; a++){
   
    			n /= 10;
    
	} 
  
    printf("Number of digits: %i", a);
}
