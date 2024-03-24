#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include "ex1.h"

int main()
{
    pNODE prim=NULL;
    pNODE tmp,aux;
    int N,i,j,nr_treceri,timp,len=0;
    scanf("%i",&N);
    add_node(&prim, prim);
    for(i=1;i<N;i++)
        add_node(&prim, prim);
    scanf("%i",&nr_treceri);
    int index = 0;

    for(j=0;j<nr_treceri;j++)
    {
        scanf("%i",&timp);
        tmp=prim;
        while(tmp!=NULL)
        {
            (tmp->t0)=(tmp->t0)+timp;
            tmp=tmp->pNext;
        }
        printf("\n");
        list_traversal(prim,&len);

        if((prim->t0)%30==0)
        {
            if((prim->idi)>index) index = prim->idi;
            del_node(&prim,NULL);

        }
    else
	{ aux = prim;
	for(i=0;i<len-1;i++)
        {
            if(((aux->pNext)->t0)%30==0)
            {
                if(((aux->pNext)->idi)>(index)) index=(aux->pNext)->idi;
                del_node(&prim,aux);
            }
            else aux = aux->pNext;
        }
    }
    }
 printf("\n%i",index);
    return 0;
}
