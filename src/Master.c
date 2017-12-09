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
int Switches();
int Pointers();

int main(){
	Pointers();
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

int Switches(){
	int a;
	for (a = 0; a<10; a++){
		switch(a){
					case 1:
						printf("a is 1");
						break;
					case 2:
						printf("a is 2");
						break;
					default:
						printf("a is %d", a);
						break;
	return 0;
		}
	}
}

int Pointers(){
	int x = 15;
	int *p;
	p = &x;

	//printf(p);
	printf("%d", *p);
	return 0;
}
