#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    int perulanganwhile = 0;
    int perulanganDo = 0;

    // perulangan dengan for

    cout << "perulangan for pencacah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "Nilai n = " << n << " Selamat Datang " << endl;
    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;

    cout << "perulangan for pencacah turun" << endl;
    // perulangan dengan for
    for (n = 5; n > 0; n--)
    {
        cout << "Nilai n = " << n << " Selamat Datang " << endl;
    }
    cout << " Nilai n terakhir = " << n;
    cout << endl;

    cout << "perulangan while" << endl;

    srand(time(0));

    n = rand() % 10;

    cout << "Nilai awal n = " << n << endl;

    while (n < 7)
    {
        cout << "Nilai n = " << n << endl;
        n = rand() % 10;
        perulanganwhile++;
    }
    cout << "Jumlah perulangan = " << perulanganwhile << endl;
    cout << "Nilai n terakhir = " << n << endl;
}
