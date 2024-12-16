//Multiples of 3 or 5

#include <stdio.h>
#include "pe_fonctions.h"

int main(){
    int sum = 0;
	
    for(int i = 3; i < 1000; i++){
	if(i % 3 == 0) sum += i;
	else if(i % 5 == 0) sum += i;		
    } 
	
    printf("%d\n", sum);	

    return 0;
}
