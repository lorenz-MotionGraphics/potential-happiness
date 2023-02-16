#include <iostream>
#include <cmath>
#include <cstring>
#include <stdio.h>
#include <conio.h>
#include <vector>

using namespace std;

int lorenz, gracia;
void func() {
     static int gracia = 16;
     int lorenz = 16;
     lorenz++;
     gracia++;
     cout<<"i= "<<lorenz<<"j= "<<gracia<<endl;
}
int main () {
     func();
     func();
     func();

     system("PAUSE");
     return EXIT_SUCCESS;
}