/*
 * File: 3-print_alphabets.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - print the alphabet in lowercase and in uppercase
 * Return: Always 0
 */
int main(void)
{
    char letter;

    for(letter = 'a', letter <= 'z', letter++)
	    putchar(letter);

    for(letter = 'A', letter <= 'Z', letter++)
	    putchar(letter);

    printchar("\n");

    return (0);

}	
