#include <stdio.h>
#include <fstream>

using namespace std;

Hashset::Hashset()
{
    hashtable = new hashnode*[10]();    
    int capcty = 10;
    int hashsize = 0;    
}

Hashset::~Hashset(){
    

}


void Hashset::add(int value)
{
    int hashc = hashcode(value); 
    Hashnode* newnode = new Hashnode(value);
    if(hashtable[hasc] == NULL){
        hashtable[hasc] = newnode;
    }    
    
    if(contains(value)){
        return 0,
    }
    else {
        newnnode->nextnode = hashtable[hasc];
        hashtable[hasc] = newnode;
    }
   


}

int Hashset::hashcode(int value)
{
    return abs(value) % capcty;

}

bool contains(int value){
    int hashc = hashcode(value);
    hashnode* curr = hashtable[hashc];
    while(curr != NULL){
       if( curr->data = value){
            return true;
       }
    }    
    curr = curr->nextnode;
}
void 

