
# include  < iostream >
usando el  espacio de nombres  estándar ;
int bajo = 0 , alto = 7 ;
int mid = (bajo + alto) / 2 ;
int  funcion ( int x) {
    int arreglo [] = { 1 , 3 , 4 , 5 , 17 , 18 , 31 , 33 };
    if (x == arreglo [mid]) {
        volver (mediados);
    }
    if (x! = arreglo [mid] && (mid == low || mid == high)) {
        retorno (- 1 );
    }
    if (x <arreglo [mid]) {
        medio = 1 ;
        volver 	funcion (x);
    }
    más {
        mediados de ++;
        volver 	funcion (x);
    }
}
int  main ()
{
    int x;
    cout << " Ingresa un numero " ;
    cin >> x;
    cout << " El index: " << funcion (x);
}