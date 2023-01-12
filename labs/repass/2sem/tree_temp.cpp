#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct node;
typedef node *link;
struct node
{ int data;
  link brother;
  link son;
};

void randomize()
{
  long t; srand(time(&t)); 
}


void insert_node(link &tree, int c)
{ if(!tree){
            tree=new node; tree->data=c;
            tree->son=0;tree->brother=0;
           }
      else
           {
            int r=rand()%2;
            if(r) 
                insert_node(tree->son, c);
            else
            insert_node(tree->brother, c);
           }
}


void print_tree(link tree)
{ static int I=0;
  if(tree)
   {
    print_tree(tree->brother);
    for(int i=0; i<I; i++) printf("    ");
    printf("\\_%d\n", tree->data);
    I++; print_tree(tree->son); I--;
   }
}

/*
int main(){
  randomize();
  link tree=0;
  int c;
  scanf("%d", &c);
  insert_node(tree, c);
  while(c)
    { scanf("%d", &c);
      insert_node(tree->son, c);  
    }
  print_tree(tree);
  printf("======================\n");
return 0;}
*/
//==============================================

struct bnode;
typedef bnode *blink;
struct bnode
{ int data;
  blink left;
  blink right;
};


void insert_bin_node(blink &tree, int c)
{ if(!tree){
            tree=(blink)malloc(sizeof(bnode)); tree->data=c;
            tree->left=0;tree->right=0;
           }
      else
           {
            int r=rand()%2;
            if(r) 
                insert_bin_node(tree->left, c);
            else
            insert_bin_node(tree->right, c);
           }
}


void print_bin_tree(blink tree)
{ static int I=0; 
  I++;
  if(tree)
  { print_bin_tree(tree->right);
    for(int i=0; i<I; i++) printf("    ");
    printf("\\__%d\n", tree->data);
    print_bin_tree(tree->left);
  }
  I--;
}


int main()
{ randomize();
  blink tree=0;
  int c=1;
  while(c)
    { scanf("%d", &c);
      insert_bin_node(tree, c);  
    }
  print_bin_tree(tree);
printf("\n");
return 0;
}
