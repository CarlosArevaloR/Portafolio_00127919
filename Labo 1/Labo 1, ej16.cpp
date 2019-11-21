// 8,16,22,26
# include < iostream >
usando el  espacio de nombres  estándar ;
int tamanio = 0 ;
int iteracion = 0 , suma = 0 ;
doble promedio = 0 ;

int  main () {

    cout << " Ingrese tamanio del arreglo: " << endl;
    cin >> tamanio;
    int arreglo [tamanio];

    para ( int i = 0 ; i <tamanio; i ++) {
        cout << " Valor de Digite [ " << iteracion << " ] " << endl;
        iteracion ++;
        cin >> arreglo [i];
    }
    para ( int i = 0 ; i <tamanio; i ++) {
        suma + = arreglo [i];
        promedio = (suma / tamanio);

    }

    cout << " La suma es: " << suma << endl;
    cout << " El promedio es: " << promedio;


}