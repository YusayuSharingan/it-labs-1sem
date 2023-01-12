struct bnode;
typedef bnode* blink;
struct bnode{
 int data;
 blink left;
 blibk right;
} *btree;

int cnt=0;


void insert_btree(blink &btree, int key){
 if(btree)
  { if(btree->data<key)
      insert_btree(btree->left, key);
    else if(btree->data>key) 
      insert_btree(btree->right, key);
    else cnt++;
  }
  else
  {
   btree=(blink)malloc(sizeof(bnode));
   btree->data=key; btree->left=0;
   btree->right=0;
  }

}


void searching_values(link tree){
  if(tree)
    { insert_btree(btree, tree->data);
      searching_values(tree->son);
      searching_values(tree->brother);
    }
}





//=========================================================
//ВСПОМОГАТЕЛЬНАЯ ФУНКЦИЯ
//ищет вершины совпадающие с заданным значением (как в котятках)

int eq(link tree, int key)
{ if(tree)
  { int rez=0;
    { if(tree->data==key) rez++;
      rez+=eq(tree->son, key);
      rez+=eq(tree->brother, key);
      return rez;
    }
  }
return 0;
}

//ОСНОВНАЯ ФУНКЦИЯ
/*подставляет значения каждой вершины во вспомогательную функцию,
но увеличивает счетчик, когда вспомогательная функция 
находит больше чем одно совпадение*/
int trav(link tree, link t)  
{ if(t)
  { int rez=0, cnt=eq(tree, t->data);
    if(cnt>1) rez++;
    rez+=trav(tree, t->son);  
    rez+=trav(tree, t->brother);
    return rez;
  }
return 0;
}
//в мейне вызывать int s=trav(tree, tree);
//сложность О(n^2), где n-количество вершин
//============================================================


void searching_values(link tree){
  if(tree)
    { 
    }
}

