#include <iostream>
#include <cstdlib>

using namespace std;

double MetrSeckInKmSchas(int sp) {
    double kmSchas = (double)sp / 1000 * 60 * 60;
    return kmSchas;
}

int main()
{
    system("chcp 1251 > nul");
    double speed;
    cout << "Введите скорость в метрах в секунду: ";
    cin >> speed;
    cout << "Скорость " << MetrSeckInKmSchas(speed) << " километров в час." << endl;
    system("pause > nul");
    return 0;
}
