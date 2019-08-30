#ifndef _Linkedlist_h
#define _Linkedlist_h

struct Linkednode{
    int data;
    Linkednode* nextnode;
    Linkednode(int d , Linkednode* n){
        data = d;
        nextnode = n;
        cout << "constructor called .... " << endl;
    }
     ~Linkednode(){
        
     }
}

class Linkedlist {
    public:
        Linkedlist();
        ~Linkedlist();
        void Add();
        void Remove();
        void Insert();
        void GetValue();
        void SetValue();
        void Clear();
    
        ostream& operator <<(ostream& out , Linkedlist& lists);
    private:
        Linkednode* startptr;
}

 ostream& operator <<(ostream& out , Linkedlist& lists);

#endif

