# include <stdio.h>

# define DECLARE_LINKED_LIST(Type) struct LinkedList { \
  Type item; \
  LinkedList* next; \
};

DECLARE_LINKED_LIST(int)

void main()
{
    LinkedList h;
    LinkedList t;
    h.item = 1;
    h.next = NULL;
    t=h;
    for (int i=1 ; i< 5 ; i++)
    {
      LinkedList x;
      x.item = i+1;
      x.next = NULL;
      t.next = x;
      t = t.next;
    }

    for (t=h ;t!=NULL; t=t.next)
      printf("%d \t",t.item);
}
