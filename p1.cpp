//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include "p1.h"

using std::cin;
using std::cout;
using std::endl;

void pregunta_1_1() {
#ifdef ENABLE_TEST
    auto value = get_pi<int, double>(600000000, 1280);
    if (value > 3.1415 && value < 3.1417)
        cout << "Valor aproximado a PI" << endl;
    else
        cout << static_cast<int>(value * 10000) / 10000.0 << endl;
#endif
}

void pregunta_1_2() {
#ifdef ENABLE_TEST
    auto value = get_pi<int, float>(600000000, 640);
    if (value > 3.1415 && value < 3.1417)
        cout << "Valor aproximado a PI" << endl;
    else
        cout << static_cast<int>(value * 10000) / 10000.0 << endl;
#endif
}

void pregunta_1_3() {
#ifdef ENABLE_TEST
    auto value = get_pi<int, long double>(600000000, 320);
    if (value > 3.1415 && value < 3.1417)
        cout << "Valor aproximado a PI" << endl;
    else
        cout << static_cast<int>(value * 10000) / 10000.0 << endl;
#endif
}

void pregunta_1_4() {
#ifdef ENABLE_TEST
    auto value = get_pi<int, double>(600000000, 160);
    if (value > 3.1415 && value < 3.1417)
        cout << "Valor aproximado a PI" << endl;
    else
        cout << static_cast<int>(value * 10000) / 10000.0 << endl;
#endif
}
