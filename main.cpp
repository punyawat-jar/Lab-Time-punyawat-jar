#include <iostream>
#include <iomanip>
using namespace std;
#include "Time.h"

int main(){
    Time t1,t2,t3;
    cout << "What time was it?" << endl;
    t1.getTime();
    cout << "What time is it now?" << endl;
    t2.getTime();
    t3=t2-t1;
    t3.display();
   return 0;
}


