#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "ex1.h"

void add_node(ppNODE ppPrim, pNODE p)
{
    pNODE q=NULL;
    q=(pNODE)malloc(sizeof(NODE));
    assert(q!=NULL);
    scanf("%i", &q->idi);
    scanf("%i", &q->t0);
    if(p==NULL)
    {
        q->pNext=*ppPrim;
        *ppPrim=q;
    }
    else
    {
        q->pNext=p->pNext;
        p->pNext=q;
    }
    return;
}
void del_node(ppNODE ppPrim, pNODE p)
{
    pNODE q;
    if(p==NULL)
    {
        q=*ppPrim;
        *ppPrim=(*ppPrim)->pNext;
}
else
{
    q=p->pNext;
    if(q) p->pNext=q->pNext;
}
    free(q);
    return;
}
void list_traversal(pNODE prim, unsigned int*pLen)
{
    *pLen=0;
    pNODE tmp=prim;
    while(tmp!=NULL)
    {
        (*pLen)++;
        tmp=tmp->pNext;
    }
    return;
}


