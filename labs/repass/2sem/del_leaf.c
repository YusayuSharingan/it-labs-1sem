struct node;
typedef node *link;
struct node{
  int data;
  link son;
  link brother;
};




void del_leaf(link &tree)
{ if(tree)
  { if(tree->son)
    { del_leaf(tree->son);
      del_leaf(tree->brother);
    }
    else 
    { tree=tree->brother;
      del_leaf(tree);
    }
  }
}

