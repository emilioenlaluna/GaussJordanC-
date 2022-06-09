
#include <iostream>
#include <iomanip>
#define N 3

using namespace std;

int main()
{
    float a[N][N+1],t;
    int i,j,k;
    cout << "Ingrese los elemtos de la matriz, incluya los terminos independientes" << endl;
    for (i=0; i<N; i++)
        for (j=0; j<N+1; j++)
            cin >> a[i][j];

    cout << fixed;
    for (j=0; j<N; j++)
        for (i=0; i<N; i++)
            if (i!=j)
            {
                t = a[i][j]/a[j][j];
                for (k=0; k<N+1; k++)
                    a[i][k] -= a[j][k]*t;
            }


    cout << "La matriz diagonal es:-" << endl;
    for (i=0; i<N; i++)
    {
        for (j=0; j<N+1; j++)
            cout << setw(9) << setprecision(4) << a[i][j];
        cout << endl;
    }


    cout << "La solucion es" << endl;
    for (i=0; i<N; i++)
        cout << "x[" << setw(3) << i+1 << "] =" << setw(7) << setprecision(4)
             << a[i][N]/a[i][i] << endl;
    return 0;
}
