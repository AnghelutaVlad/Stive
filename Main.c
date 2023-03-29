#include"FunctiiStive.h"
int main()
{
    int k=5;
    StackVector* s;
    scanf("%d",&k);
    s=umplere(k);
    pushVector(s,6);
    afisarevector(&s);
}
