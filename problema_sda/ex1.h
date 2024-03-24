#ifndef _____ex1_____
#define _____ex1_____
typedef struct parcare
{
    int idi;
    int t0;
    struct parcare* pNext;
}NODE, *pNODE,**ppNODE;
void add_node(ppNODE, pNODE);
void del_node(ppNODE,pNODE);
void list_traversal(pNODE, unsigned int *);
#endif

