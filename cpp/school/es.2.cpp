#include <iostream>
using namespace std;


int cicloinput(string &nome_max_copie, int &max_copie)
{
    int numerocopie, numeroInput; 
    string nomeInput;
    cout << "inserisci il numero di copie\n";
    cin >> numerocopie;
    for(int i = 1; i <= numerocopie; i++)
    {
        cout << "inserisci il nome del quotidiano\n";
        cin >> nomeInput;
        cout << "inserisci il numero di copie vendute\n";
        cin >> numeroInput;
        if (numeroInput >= max_copie)
        {
            max_copie = numeroInput;
            nome_max_copie = nomeInput;
        }
    }
}

int CalcoloGuadagno(int &max_copie, string &nome_max_copie, float &incasso)
{
if (max_copie <= 200) 
{
    incasso = max_copie * 0.10;
} 
else if (max_copie > 300) 
{
    incasso = max_copie * 0.30;
} 
else 
{
    incasso = max_copie * 0.20;
}
}


int main()
{
    string nome_max_copie;
    int max_copie;
    float incasso;

    cicloinput(nome_max_copie, max_copie);
    CalcoloGuadagno(max_copie, nome_max_copie, incasso);

    cout << "Il giornale che ha venduto piu copie e: " << nome_max_copie << " con " << max_copie << " copie" << endl;
    cout << "L'incasso totale e: " << incasso << " euro." << endl;
    return 0;
}