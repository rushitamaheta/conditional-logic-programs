//3. WAP to check if the given year is a leap year or not

#include<stdio.h>
int main(){
	//input from user
	int year;printf("enter the year ");
	scanf("%d",&year);
	
	//checking for leap year
	if(year%4==0)
    {
	printf("year is leap year");
	}
	else
	{
		printf("year is not leap year");
		}	
}
