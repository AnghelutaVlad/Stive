#include"FunctiiStive.h"
void pushLista(StivaLista**head,int n)
{
    StivaLista* p=(StivaLista*)malloc(sizeof(StivaLista));
    p->val=n;
    p->next=(*head);
    (*head)=p;
    return;
}
int popLista(StivaLista**head)
{
    if((*head)==NULL)
        return INT_MIN;
    StivaLista* q=(*head);
    int n=q->val;
    (*head)=(*head)->next;
    free(q);
    return n;
}
int emptyL(StivaLista*head)
{
    return head==NULL;
}
StivaLista* crearelista(int k)
{
    StivaLista* head=NULL;
    int n;
    for(int i=0;i<k;i++)
    {
        scanf("%d",&n);
        pushLista(&head,n);
    }
    return head;
}
void afisarelista(StivaLista**head)
{
    int n;
    if(emptyL(*head))
    {
        printf("Stiva e goala");
        return;
    }
    while(!emptyL(*head))
    {
        n=popLista(head);
        printf("%d ",n);
    }
    return;
}
void stergelista(StivaLista**head)
{
    StivaLista* q;
    while(!emptyL(*head))
    {
        q=(*head);
        (*head)=(*head)->next;
        free(q);
    }
}
StackVector* crearevector(int n)
{
    StackVector* v=(StackVector*)malloc(sizeof(StackVector));
    v->pos=-1;
    v->capacity=n;
    v->vector=(int*)malloc(v->capacity*sizeof(int));
    return v;
}
int isFull(StackVector* v)
{
    return (v->pos)==(v->capacity)-1;
}
int isEmpty(StackVector* v)
{
    return (v->pos)==-1;
}
void resize(StackVector*v)
{
    v->capacity*=2;
    v->vector=(int*)realloc(v->vector,v->capacity*sizeof(int));
}
void pushVector(StackVector*v,int n)
{
     if(isFull(v))
        resize(v);
     v->vector[++v->pos]=n;
     return;
}
int popVector(StackVector*v)
{
    int n=v->vector[v->pos--];
    return n;
}
StackVector* umplere(int n)
{
    int k;
    StackVector*v=crearevector(n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&k);
        pushVector(v,k);
    }
    return v;
}
void afisarevector(StackVector**v)
{
    if((*v)==NULL)
    {
        printf("stack gol\n");
        return;
    }
    while(!isEmpty(*v))
    {
        printf("%d ",popVector(*v));
    }
    free((*v)->vector);
    free(*v);
    (*v)=NULL;
    return;
}
