# include  < iostream >
usando el  espacio de nombres  estándar ;

int ncifras = 0 ;
// DECLARO QUE LA FUNCION VA A eECIBIR UN VALOR ENTERO
int  cantcifras ( int );

// DECLARO EL MAIN
int  main () {
    int cifra;
    cout << " Digite una cantidad entera: " << endl; cin >> cifra;
    cout << " La cantidad de cifras es: " << cantcifras (cifra);
    devuelve  0 ;
}
// DECLARO LA VARIABLE ENTERA DE LA FUNCION
int  cantcifras ( int cantidad) {
    if (cantidad == 0 ) {
        devolver ncifras;
    }
    más {
        cantcifras ((cantidad / 10 ));
        ncifras ++;
    }
}