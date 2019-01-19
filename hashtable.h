#ifndef _hashtable.h_
#define _hashtable_h


struct Hashnode{
    
    int data ; 
    Hashnode* nextnode;
    
    Hashnode(int data , Hashnode* nextnode){
        this->data = data;
        this->nextnode = nextndoe;

    }

}

class Hashset {
    public:
        void add();
        void contains();
        void Remove();
        void 
    private:
        Hashnode** hashtable;
        int capcty;
        int size;
        int hashcode();
        void Rehash();    
}
