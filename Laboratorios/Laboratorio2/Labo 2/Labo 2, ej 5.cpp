# include  < iostream >
usando el  espacio de nombres  estándar ;

 torres nulas ( int valor, int original, int aux, int destino) {
    if (valor == 1 ) {
        cout << " Se movio el disco: " << valor << " de la torre " << original << " a la torre " << destino << endl;
    }
    más {
        torres (valor- 1 , original, destino, aux);
        cout << " se movio el disco: " << valor << " de la torre " << original << " a la torre " << destino << endl;
        torres (valor- 1 , aux, original, destino);
    }
}
int  main () {
    int cantidad, origen1 = 1 , aux = 2 , destino = 3 ;
    cout << " Ingresa la cantidad de discos: " ;
    cin >> cantidad;
    torres (cantidad, origen1, aux, destino);
    devuelve  0 ;
}