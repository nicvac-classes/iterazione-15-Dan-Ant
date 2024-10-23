#include <iostream>
using namespace std;

int main() {
string nome;
int i, N;
cout << "Quanti atleti ci sono in gara?" << endl;
cin >> N;
for (i=1; i<N; i=1+i)
{
    cout << "Inserisci il nome dell'atleta" << endl;
    cin >> nome;
    cout << "Ciao" << nome;
}


cout << "esercizio due" << endl;


int N, M, i;
cout << "Elenco i numri da N a M" << endl;
cout<< "Inserisci N" << endl;
cin >> N;
cout << "Inserisci M" << endl;
cin >> M;
for (i=N; i<=M; i=i+2)
{
    cout << i;
}


cout << "esercizio tre" << endl;


int i, N, contpari, contdispari, restodue, x;
do 
{
    cout <<"Quanti numeri generare?"<< endl;
    cin >> N;
}
while (N<0);
contpari = 0;
contdispari = 0;
for (i=0; i<N; i+1)
{
    x = random(1001);
    restodue = x%2;
    if (restodue == 0)
    {
        contpari = contpari +1;
    }
    else 
    {
        contdispari = contdispari+1;
    }
    cout << i+1 << "° numero generato: " << x << endl;
}
cout << "Sono stati generati " << contpari << " numeri pari e " << contdispari << " numeri dispari" << endl;

}


