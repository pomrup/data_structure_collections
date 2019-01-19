#include <stdio.h>
#include <string>
#include"Arraylist.h"
#include<ostream>
#include<iostream>
#include<fstream>

using namespace std;

Arraylist::Arraylist(){   
   int* Arr = new int[10](); 
   int curr_size = 0;
   int Capacity = 10;

Arraylist::~Arraylist(){
    
}

void Arraylist::Add(int value){
    Arr[curr_size] = value;
    curr_size++ ;    

}

void Arraylist::Insert(int value , int index){
    for (int i = curr_size ; i > index ; i--){
        Arr[i] = Arr[i-1];
    }
    Arr[index] = value;
    curr_size++ ;
}

void Arraylist::Clear(){
    

}

void Arraylist::Remove(int value){
    

}

int Arraylist:: Getvalue(int index) const{
    return Arr[index];

}
void Arraylist::Setvalue(int value ,int index) {
    Arr[index] = value;
    
}
int Arraylist::size() const {
    return curr_size;
}

ostream& operator<< (ostream& out , Arraylist& List){
    out << '{';
         for( int i = 0 ; i < curr_size; i++){
            out << Arr[i] << endl;
         }
    out << '}';
    return out;
}
