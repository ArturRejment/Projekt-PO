﻿#include <iostream>
#include "classList.h"
using namespace std;

int main()
{
    Map map1(1000,40,50,30,5,2); //Map parameters: size, strongCells, mediumCells, weakCells, bonus, space
    Simulation* sim1 = Simulation::getInstance(map1, 100);
    (*sim1).runSimulation();
    return 0;
}