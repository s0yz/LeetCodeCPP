// LeetCode.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include "ReapeatedNTimes.h"

using namespace std;
using namespace algorithm;

int main()
{
    vector<int> v = { 2, 3, 3, 3, 3, 2, 2, 1 };
    std::cout << repeatedNTimesV1(v) << endl;
    std::cout << repeatedNTimesV2(v) << endl;
    std::cout << repeatedNTimesV3(v) << endl;
    std::cout << repeatedNTimesV4(v) << endl;
}
