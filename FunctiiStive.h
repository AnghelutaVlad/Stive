#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct date{
              int val;
              struct date* next;
           };
typedef struct date StivaLista;
struct Vstack{
                 int pos;
                 int capacity;
                 int* vector;
             };
typedef struct Vstack StackVector;
void pushLista(StivaLista**head,int n);
int popLista(StivaLista**head);
int emptyL(StivaLista*head);
StivaLista* crearelista(int k);
void afisarelista(StivaLista**head);
void stergelista(StivaLista**head);
StackVector* crearevector(int n);
int isFull(StackVector* v);
int isEmpty(StackVector* v);
void resize(StackVector* v);
void pushVector(StackVector*v,int n);
int popVector(StackVector*v);
StackVector* umplere(int n);
void afisarevector(StackVector**v);
