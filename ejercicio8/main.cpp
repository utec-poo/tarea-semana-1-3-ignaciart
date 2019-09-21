#include <iostream>
#include "tipos.h"
using namespace std;
int main() {
int número;
{
cout << "ingrese el numero:";
cin >> número;
} while ((número<10) or (número>30)); 
for (int i=1; i<= número ; i++)
 {
   {cout<< "*";} 
 }
return 0;
} 
