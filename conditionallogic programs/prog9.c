//9. C Program to Check Uppercase or Lowercase or Digit or Special
//Character

#include<stdio.h>
int main(){
	char ch;
	printf("enter character\n");
	scanf("%c",&ch);
	
	if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')){
		if(ch >= 'A' && ch <= 'Z'){
			
			printf("upper case");
		}
		else{
			printf("lower case");
		}
	
	}
	else if(ch >= '0' && ch <= '9')
	{
		printf("its number");
	}
	else {
		printf("it is speacial char");
	}
}
