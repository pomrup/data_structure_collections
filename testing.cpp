#include<stdio.h>
#include<ostream>
#include<iostream>
#include "Arraylist.h"
#include<fstream>
using namespace std;

        
int main()
{
    Arraylist List;
    List.Add(32);
    List.Add(34);
    List.Add(50);
    List.Insert(5,2);
    cout << List << endl;
    
    return 0;
}


