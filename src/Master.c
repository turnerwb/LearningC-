/*
 * Master.c
 *
 *  Created on: Dec 8, 2017
 *      Author: turnerwb
 */
#include<stdio.h>

int HelloWorld();
int EnterNum();
int IfStatements();
int loops();
int mult(int x, int y);

int main(){
	HelloWorld();
	loops();
}

int HelloWorld(){
	printf("Hello World!");
	return 0;
}

int EnterNum(){
    int this_is_a_number;
    printf( "Please enter a number: \n" );
    fflush(stdout);
    scanf( "%d", &this_is_a_number );
    printf( "You entered %d \n", this_is_a_number );
    return 0;
}

int IfStatements(){
	if(5 < 10){
		printf("5 is less than 10!");
	}
	return 0;
}

int loops(){
	for (int x = 0; x < 10; x++){
		printf("%d \n", x);
	}
	return 0;
}

int mult(int x, int y){
	int answer = x*y;
	return answer;
}
