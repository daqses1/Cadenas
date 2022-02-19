#include <iostream>
#define tam 2
using namespace std;

void concatenar(char A[], char B[])
{

    // concatenando
    cout << "La cadena es " << endl;
    for (int u = 0; u < tam; u++)
    {
        for (int v = 0; v < tam; v++)
        {
            cout << A[u] << "*" << B[v] << endl;
        }
    }
}
void potencia(char A[])
{
    A[tam];
    char B[tam];
    int potencia;

    cout << "Introduce la potencia" << endl;
    cin >> potencia;

    // potencia

    cout << "La potencia es " << endl;
    for (int a = 0; a < potencia; a++)
    {
        cout << A[a] << A[a] << endl;
    }
}

int main()
{

    char A[tam];
    char B[tam];
    int o;

    cout << "Opcion" << endl;
    cin >> o;

    switch (o)
    {
    case 1:
        cout << "<*<*<* Potencia *>*>*>" << endl;

        cout << "Introduce una cadena" << endl;
        for (int i = 0; i < tam; i++)
        {
            cin >> A[i];
        }
        potencia(A);
        break;
    case 2:
        cout << "<*<*<* Concatenar *>*>*>" << endl;

        // pidiendo cadenas
        cout << "Introduce los caracteres de la cadena A" << endl;
        for (int i = 0; i < tam; i++)
        {
            cin >> A[i];
        }
        cout << "Introduce los caracteres de la cadena B" << endl;
        for (int j = 0; j < tam; j++)
        {
            cin >> B[j];
        }

        concatenar(A, B);

        break;
    case 3:
        cout << "<*<*<* Union *>*>*>" << endl;
        break;
    case 4:
        cout << "<*<*<* Interseccion *>*>*>" << endl;
        break;

    default:
        break;
    }
    return 0;
}
