#include <iostream>
#include <string>
using namespace std;
string SonLetrasRepetidas(string f);
int main()
{
    string frase;
    cout << "Ingresa la frase: ";
    getline(cin, frase);
    frase = SonLetrasRepetidas(frase);
    cout << "La frase con el número de letras repetidas es: " << frase << endl;
    return 0;
}

string SonLetrasRepetidas(string f)
{
    string frase;
	int n = 1;
	for (int i = 0; i < f.size(); i++)
	{
	    if (i + 1 < f.size() && f[i] == f[i + 1])
	    {
	       n++;
	    }
	    else
	    {
	        frase += f[i];
	        if (n > 1)
	        {
	            frase += "{" + to_string(n) + "}";
	        }
	    }
	}
	return frase;
}