/*
 * HelloWorld.c
 *
 *  Created on: Dec 7, 2017
 *      Author: turnerwb
 */
#include <stdio.h>

int main()
{
    int this_is_a_number;
    printf( "Please enter a number: \n" );
    fflush(stdout);
    scanf( "%d", &this_is_a_number );
    printf( "You entered %d \n", this_is_a_number );
    return 0;
}

