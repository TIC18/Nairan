#include "listaNomes.cpp"
#include <iostream>
#include <algorithm>

void entradaDeDados()
{
  cout << "Quantos nomes na lista: ";
  int n;
  cin >> n;
  cin.ignore();

  for (int i = 0; i < n; i++)
  {
    string nome;
    cout << "Digite o nome " << i + 1 << ": ";
    getline(cin, nome);
    lista.push_back(nome);
  }
}

void mostraMediana()
{
  if (lista.empty())
  {
    cout << "A lista de nomes está vazia." << endl;
  }
  else
  {
    sort(lista.begin(), lista.end());
    int meio = lista.size() / 2;
    cout << "Mediana da lista de nomes: " << lista[meio] << endl;
  }
}

void mostraMenor()
{
  if (lista.empty())
  {
    cout << "A lista de nomes está vazia." << endl;
  }
  else
  {
    sort(lista.begin(), lista.end());
    cout << "Primeiro nome alfabeticamente: " << lista[0] << endl;
  }
}

void mostraMaior()
{
  if (lista.empty())
  {
    cout << "A lista de nomes está vazia." << endl;
  }
  else
  {
    sort(lista.begin(), lista.end());
    cout << "Último nome alfabeticamente: " << lista[lista.size() - 1] << endl;
  }
}
