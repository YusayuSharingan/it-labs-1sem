struct node;
typedef node* link;
struct node{
  int data;
  link son;
  link brother;
};


int deep_of_tree(link tree)
{if(tree)
  { int s=deep_of_tree(tree->son)+1,
    b=deep_of_tree(tree->brother);
    if(b>=s) return b;
    else return s;
  }
return 0;
}

