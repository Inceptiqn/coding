#include <iostream>
#include <string>

int main ()
{
  // Definizione di una stringa iniziale
  std::string str="We think in generalities, but we live in details.";
  // (quoting Alfred N. Whitehead)

  // Utilizzo di substr per estrarre una sottostringa da str
  std::string str2 = str.substr(3, 5); // Estrae una sottostringa di lunghezza 5 a partire dalla posizione 3
  // Il risultato è "think"

  // Trovare la posizione della parola "live" nella stringa
  std::size_t pos = str.find("live"); // Restituisce la posizione della prima occorrenza di "live" in str

  // Utilizzo di substr per estrarre una sottostringa dalla posizione trovata fino alla fine di str
  std::string str3 = str.substr(pos); // Estrae una sottostringa a partire dalla posizione trovata fino alla fine
  // Il risultato è "live in details."

  // Stampare le sottostringhe ottenute
  std::cout << str2 << ' ' << str3 << '\n';

  return 0;
}
