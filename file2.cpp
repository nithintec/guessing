

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