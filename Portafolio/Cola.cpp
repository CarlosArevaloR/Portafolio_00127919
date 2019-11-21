# include  < iostream >
usando el  espacio de nombres  estándar ;
int  main () {
    int tamanio = 7 , valor = 1 , n = 0 , inicio = 0 , posicion = 0 ;
    int colacircular [tamanio];
    while (valor! = 0 ) {
        cout << " ingresa un número diferente de 0 o 0 para salir " << endl;
        cin >> valor;
        posicion = (inicio + n)% tamanio;
        colacircular [posicion] = valor;
        cout << " Valor ingresado: " << colacircular [posición] << " en la posición " << posición << endl;
        n ++;
    }
    devuelve  0 ;
}