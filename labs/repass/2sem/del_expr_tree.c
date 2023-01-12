#include<stdio.h>
#include<stdlib.h>
#include<time.h>


struct node;
typedef node* link;
struct node
{ char data;
  link left;
  link right;
};

//===========================================================
void randomize()
{
  long t; srand(time(&t)); 
}

void print_bin_tree(link tree)
{ static int I=0; 
  I++;
  if(tree)
  { print_bin_tree(tree->right);
    for(int i=0; i<I; i++) printf("    ");
    printf("\\__%c\n", tree->data);
    print_bin_tree(tree->left);
  }
  I--;
}
//=========================================================

void del_expr(link &tree)
{ if(tree)
  if(tree->left||tree->right)
  { if(tree->data=='*')
    { if(tree->left->data=='1') 
        { tree->left=0;
          tree=tree->right;
          return;
        }
      if(tree->right->data=='1') 
        { tree->right=0;
          tree=tree->left;
          return;
        }
    }
    if(tree->data=='+')
    { if(tree->left->data=='0') 
        { tree->left=0;
          tree=tree->right;
          return;
        }
      if(tree->right->data=='0') 
        { tree->right=0;
          tree=tree->left;
          return;
        }
    } 
    del_expr(tree->left);
    del_expr(tree->right);
  }
}


int main()
{ randomize();
  link tree=0;
  tree=(link)malloc(sizeof(node)); 
  tree->data='+';
  tree->left=(link)malloc(sizeof(node)); 
  tree->left->data='*';
  tree->right=(link)malloc(sizeof(node));
  tree->right->data='0';
  tree->left->left=(link)malloc(sizeof(node)); 
  tree->left->left->data='1';
  tree->left->left->left=0;
  tree->left->left->right=0;
  tree->left->right=(link)malloc(sizeof(node)); 
  tree->left->right->data='9';
  tree->left->right->left=0;
  tree->left->right->right=0;
  tree->right->right=0;
  tree->right->left=0;
  print_bin_tree(tree);
  printf("==========================\n");
  del_expr(tree);
  print_bin_tree(tree);
  printf("==========================\n");
  del_expr(tree);
  print_bin_tree(tree);
return 0;
}
