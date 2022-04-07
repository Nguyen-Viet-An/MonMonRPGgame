#include "Monster.h"
#include "Species.h"
#include "Boss.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    //Initalize
    Monster *boss1, *boss2, *boss3;
    boss1 = new Boss(1);
    boss1->mon_info();
    boss2 = new Boss(2);
    boss2->mon_info();
    boss3 = new Boss(3);
    boss3->mon_info();
    return 0;
}