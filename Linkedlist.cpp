#include <Linkedlist.h>
#include <ostream>
#include <iostream>

Linkedlist::Linkedlist(){
    startptr = NULL;   


}

Linkedlist::~LinkedList(){
    Clear();

}

void Linkedlist::Add(int index, int value){
   if (index == 0){
        startptr  = new Linkdenode(value);
        Linkednode* pre_startptr = startptr;
        startptr->nextnode = pre_startptr;
    }
    else {           
        
        Linkednode* current = startptr; 
        for(int i = 0; i < index-1; i++){
            current = current->nextnode;
        
    }
    Linkednode* newnode = new Linkednode(value);
    newnode->nextnode =  current->nextnode;
    current->nextndoe = newnode; 
}

void Linkedlist::Remove(int index){
    Linkednode* garbage;
    if ( index == 0){
        garbage = startptr;
        startptr = startptr->nextnode;
        
    }
    else {
        for( int i = 0 ; i < index-1 ; i++){
            current = current->nextnode;
            
        }    
        garbage = current->nextnode;
        current->nextnode = current->nextnode->nextnode;
    }    
    delete garbage;
}

void Linkedlist::Insert(int index , int value){
      
}

int LinkedList::GetValue(int index){
    linkednode* current  = startptr;
    for (int i = 0 ; i < index ; i++){
        current = current->nextnode;
    
    }
    return current->data;
    
}

void Linkedlist::SetValue(int index, int value){
    
    Linkednode* current  = startptr
    for (int i = 0 ; i < index ; i++){
        current = current->nextnode;
    
    }
    current->data = value ;

}
void Linkedlist::Clear(){
    //clearing the whole List ...
    while(startptr != NULL){
        Remove(0);
    }
}
ostream& operator <<(ostream& out , Linkedlist List){
    out << List.
}
