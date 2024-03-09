/*ii. Vowel or Consonant using switch case*/

#include<stdio.h>

int main(){
	 char ch;
	 printf("enter character : ");
	 scanf("%c",&ch);
	 
	 switch(ch){
	 	case 'a':
	 	case 'e':
		case 'i':
		case 'o':
		case 'u':
		
		printf("%c is vowel.\n",ch);
		break;
	  default:
            printf("%c is a consonant.\n", ch);
            break;	 	
	 }
	
}
