#include <iostream>
#include <cstdlib>

void convertChoice(int &scelta, int &row, int &col);
void print(char array[3][3]);
void azzera(char array[3][3], int row, int col);
void oturn(char array[3][3], int row, int col);
void xturn(char array[3][3], int row, int col);
bool checkForVictory(char array[3][3], std::string &winner);
bool checkPareggio(char array[3][3]);
void endGame(std::string winner);
void replay();
bool isGameEnded = false;
int oPunteggio, xPunteggio;

int main()
{
  char array[3][3];
  int scelta, row, col;
  std::cout << "\n**************************";
  std::cout << "\n*******TIC-TAC-TOE********";
  std::cout << "\n**************************";
  std::cout << "\n\n1|2|3\n4|5|6\n7|8|9\n";
  azzera(array, row, col);
  for (int i = 1; i <= 9; i++)
  {
    while (isGameEnded == false)
    {
      oturn(array, row, col);
    }
  }
  return 0;
}

void convertChoice(int &scelta, int &row, int &col)
{
  switch (scelta)
  {
  case 1:
    row = 0;
    col = 0;
    break;
  case 2:
    row = 0;
    col = 1;
    break;
  case 3:
    row = 0;
    col = 2;
    break;
  case 4:
    row = 1;
    col = 0;
    break;
  case 5:
    row = 1;
    col = 1;
    break;
  case 6:
    row = 1;
    col = 2;
    break;
  case 7:
    row = 2;
    col = 0;
    break;
  case 8:
    row = 2;
    col = 1;
    break;
  case 9:
    row = 2;
    col = 2;
    break;
  default:
    std::cout << "numero sbagliato";
    break;
  }
}

void print(char array[3][3])
{
  std::cout << array[0][0] << '|' << array[0][1] << '|' << array[0][2] << '\n';
  std::cout << array[1][0] << '|' << array[1][1] << '|' << array[1][2] << '\n';
  std::cout << array[2][0] << '|' << array[2][1] << '|' << array[2][2] << '\n';
}

void azzera(char array[3][3], int row, int col)
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      array[i][j] = '-';
    }
  }
}

void oturn(char array[3][3], int row, int col)
{
  int scelta;
  std::string winner;
  std::cout << "\nturno di 'o'";
  std::cout << "\ninserisci un numero da 1 a 9: ";
  std::cin >> scelta;
  convertChoice(scelta, row, col);
  if (array[row][col] == 'o' || array[row][col] == 'x')
  {

    std::cout << "casella gia occupata, riprova\n";
    print(array);
    oturn(array, row, col);
  }
  else
  {
    array[row][col] = 'o';
    print(array);
    isGameEnded = checkForVictory(array, winner);
    if (isGameEnded == true)
    {
    if (checkPareggio(array))
      {
        winner = "-";
        endGame(winner);
      }
      else
      {
        winner = "o";
        endGame(winner);
      }
    }
  }
  xturn(array, row, col);
}
void xturn(char array[3][3], int row, int col)
{
  int scelta;
  std::string winner;
  std::cout << "\nturno di 'x'";
  std::cout << "\ninserisci un numero da 1 a 9: ";
  std::cin >> scelta;
  convertChoice(scelta, row, col);
  if (array[row][col] == 'o' || array[row][col] == 'x')
  {
    std::cout << "casella gia occupata, riprova\n";
    print(array);
    xturn(array, row, col);
  }
  else
  {
    array[row][col] = 'x';
    print(array);
    isGameEnded = checkForVictory(array, winner);
    if (isGameEnded == true)
    {
      if (checkPareggio(array))
      {
        winner = "-";
        endGame(winner);
      }
      else
      { 
        winner = "x";
        endGame(winner);
      }
    }
  }
}
bool checkForVictory(char array[3][3], std::string &winner)
{
  bool ispareggio = false;
  // Check rows
  for (int i = 0; i < 3; ++i)
  {
    if (array[i][0] == array[i][1] && array[i][1] == array[i][2] && array[i][0] != '-')
    {
      winner = array[i][0];
      return true;
    }
  }
  // Check columns
  for (int j = 0; j < 3; ++j)
  {
    if (array[0][j] == array[1][j] && array[1][j] == array[2][j] && array[0][j] != '-')
    {
      winner = array[0][j];
      return true;
    }
  }

  // Check diagonals
  if (array[0][0] == array[1][1] && array[1][1] == array[2][2] && array[0][0] != '-')
  {
    winner = array[0][0];
    return true;
  }
  if (array[0][2] == array[1][1] && array[1][1] == array[2][0] && array[0][2] != '-')
  {
    winner = array[0][2];
    return true;
  }
  //check pareggio
  ispareggio = checkPareggio(array);
  if (ispareggio)
  {
    winner = "-";
    return true;
  }

  return false;
}

bool checkPareggio(char array[3][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (array[i][j] == '-')
      {
        return false;
      }
    }
  }
  return true;
}

void endGame(std::string winner)
{
  if (winner == "o")
  {
    oPunteggio += 1;
    std::cout << "'" << winner << "'" << " vince! Game over.\n";
  }
  else if (winner == "x")
  {
    xPunteggio += 1;
    std::cout << "'" << winner << "'" << " vince! Game over.\n";
  }
  else if (winner == "-")
  {
    std::cout << "PAREGGIO!" << '\n';
  }
  
  replay();
  exit(0);
}

void replay()
{
  char input;
  std::cout << "Il punteggio: " << "O = " << oPunteggio << ", X = " << xPunteggio << '\n';
  std::cout << "Vuoi Rigiocare? (y)es, (n)o: ";
  std::cin >> input;
  if (input == 'y')
  {
    std::cout << "ok";
    isGameEnded = false;
    main();
  }
  else if (input == 'n')
  {
    std::cout << "ok";
    exit(0);
  }
  else
  {
    std::cout << "riprova.\n";
    replay();
  }
}