# include  < iostream >

usando el  espacio de nombres  estándar ;

int  main ()
{
    int numero;
    int x;
    int y;


    cout << " Ingrese un numero: " << endl;
    cin >> numero;


    if (numero == 1 ) {

        cout << " Numero: " << numero << " Caso Base " << endl;

    } más {

        x = numero- 1 ;
        cout << " numero recursivo1: " << x << endl;

    }


    int  recc ( int n);
    if (numero <= 1 ) {


        cout << " Numero: " << numero << " Caso Base " << endl;

    } más {

        y = numero- 2 ;
        cout << " numero recursivo2: " << y << endl;

        cout << y << endl;
        cout << x << endl;
        cout << numero << endl;

        cout << x << endl;
        cout << y << endl;

        devuelve  0 ;
    }
}