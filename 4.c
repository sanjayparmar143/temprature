#include<stdio.h>


main(){
    
	int a,b;
	int n; 
	int total = 0;
	    	
	printf("Enter number:- ");
    scanf("%i", &n);
    
    b = n % 10;
    
    while(n>=10){
        
		n = n / 10;
    }
    
	a = n;
    
    total = a + b;
    
	printf("Total = %d", total);
    
}
