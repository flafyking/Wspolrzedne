#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

ifstream plik;

vector <string> tablica;


int main() {
    string line;
    int licznik = 0;
    int pos[6];
    plik.open("C:\\wspolrzedne.txt");

    if (plik.is_open())
    {
        while (getline(plik, line))
        {
            if (line[0] != 'p')
            {
                for (int i = 0; i < 6; i++) {
                    pos[i] = stoi(line.substr(0, line.find('\t')));
                    line.erase(0, line.find('\t')+1);
                }
                if (pos[0] > 0 && pos[1] > 0 && pos[2] > 0 && pos[3] > 0 && pos[4] > 0 && pos[5] > 0) {
                    licznik++;
                }                              
            }
        }
        plik.close();

        
        cout << licznik << endl;

    }
}