#include <stdio.h>
#include <stdlib.h>
#define Maxsize 100
typedef struct{
	int *arr;
	int length;
}SP;
void Insitlist(SP*);
void output(SP*);
void crelist(SP*,int);
void get(SP*,int);
void search(SP*,int);
void put(SP*,int,int);
void del(SP*,int);

