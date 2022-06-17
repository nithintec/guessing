

#include <iostream>
#include<stdio.h>
#include<ctime>
using namespace std;

int main()
{
    string basket1, basket2, basket3, basket4 = "", basket5 = "", basket6 = "";

    int a, num = 0, basketNumber, set = 0;


    cout << "WELCOME TO THE GAME" << endl;

    cout << "Press 1 to start game" << endl;

    cin >> a;

    if (a == 1) {
        srand(time(0));
        num = (rand() % 6) + 1;

    }



    if (num == 1) {
        set = 1;
        basket1 = "apple";
        basket2 = "";
        basket3 = "";
        basket4 = "";
        basket5 = "";
        basket6 = "";


    }

    if (num == 2) {
        set = 2;
        basket2 = "apple";
        basket1 = "";
        basket3 = "";
        basket4 = "";
        basket5 = "";
        basket6 = "";

    }
    if (num == 3) {
        set = 3;
        basket3 = "apple";
        basket1 = "";
        basket2 = "";
        basket4 = "";
        basket5 = "";
        basket6 = "";

    }
    if (num == 4) {
        set = 4;
        basket4 = "apple";
        basket1 = "";
        basket2 = "";
        basket3 = "";
        basket5 = "";
        basket6 = "";
    }
    if (num == 5) {
        set = 5;
        basket5 = "apple";
        basket1 = "";
        basket2 = "";
        basket3 = "";
        basket4 = "";
        basket6 = "";
    }
    if (num == 6) {
        set = 6;
        basket6 = "apple";
        basket1 = "";
        basket2 = "";
        basket3 = "";
        basket4 = "";
        basket5 = "";
    }

}

