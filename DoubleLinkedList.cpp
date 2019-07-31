#include <iostream>

struct Node{
    int data;
    Node *first;
    Node *Last;

};
class DoubleLinkedList{
public:
    DoubleLinkedList(){Head = NULL;};
    Node *Head;
    Node *Temp;
    Node *_TEMPF; /// Temp First
    void AddToNode(int _data);
    void LoopThrough();

};
void DoubleLinkedList::LoopThrough(){
Node *Curr = Head;
while(Curr != NULL){
    std::cout << Curr->data << std::endl;
    std::cout << std::endl;
    Curr = Curr->Last;
    std::cout << Curr->first->data << std::endl;
}

}
void DoubleLinkedList::AddToNode(int _data){
  Node *Curr = new Node();
  Curr->data = _data;
  if (Head == NULL){
    Head = Curr;
    Temp = Head;
    _TEMPF = Head;
  }
  else{
        _TEMPF = Curr;
    Temp->Last = Curr;
     _TEMPF->first = Temp;
    Temp = Temp->Last;
  }
}
int main()
{
   DoubleLinkedList dd;
   dd.AddToNode(23);
   dd.AddToNode(40);
   dd.AddToNode(90);
   dd.AddToNode(100);
   dd.AddToNode(901);
   dd.LoopThrough();
    return 0;
}
