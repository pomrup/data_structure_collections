#ifndef _Arraylist_h
#define _Arraylist_h

#include <stdio.h>
#include <string>
#include <ostream>
#include<iostream>
#include<fstream>
using namespace std;

class Arraylist{
    public:
        Arraylist();
        ~Arraylist();
        void Add(int value);
        void Insert(int value , int index);
        void Remove(int Value);
        void Setvalue();
        int Getvalue(int index) const;
        void Isempty() const;;
        void size() const;
        void Clear();
        
        friend ostream& operator<< (ostream& out , Arraylist& listt);
    private:
        int* Arr ; 
        int curr_size = 0;
        int Capacity = 10; 
};
#endif
