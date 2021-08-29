#include<stdio.h>

struct node
{
    int a;
    struct node *af,*bf;
};
int main()
{
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->af=NULL;
    head->a=10;
    int loop1=1;
    
    
}
