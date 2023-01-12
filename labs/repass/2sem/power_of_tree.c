struct node;
typedef node *link;
struct node
{ int data;
  link brother;
  link son;
};


int son_cnt(link tree)
{ if(tree)
  if(tree->son)
  { int rez=0;
    link t=tree->son;
    while(t) 
    { rez++; t=t->brother; }
    return rez;
  }
return 0;
}



int max_pow_tree(link tree)
{if(tree)
  { int t, t_son, t_brother;
    t=son_cnt(tree);
    t_son=max_pow_tree(tree->son);
    t_brother=max_pow_tree(tree->brother);
    if(t>t_son&&t>t_brother) return t;
    else if(t_son>t&&t_son>t_brother) return t_son;
    else if(t_brother>t&&t_brother>t_son) return t_brother;
    else return t;
  }
return 0;
}


