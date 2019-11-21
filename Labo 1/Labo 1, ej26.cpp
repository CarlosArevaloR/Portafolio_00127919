# include  < iostream >
usando el  espacio de nombres  estándar ;
int contador = 3 , contador2 = 0 , matriz [ 5 ] [ 5 ];
int valor;
int  main () {

    para ( int i = 0 ; i < 5 ; i ++) {
        para ( int j = 0 ; j < 5 ; j ++) {
            matriz [i] [j] = 0 ;
        }
    }
    para ( int x = 0 ; x < 5 ; x ++) {
        interruptor (x) {
            caso  1 :
                contador--; romper ;
            caso  2 :
                contador = 1 ;
                contador2 ++; romper ;
            caso  3 :
                contador = 0 ;
                contador2 ++; romper ;
            caso  4 :
                contador2 ++; romper ;

        }
        para ( int y = contador2; y < 5 - (contador); y ++) {
            cout << " Valor digital a introducir en la matriz: " ;
            cin >> valor;
            matriz [x] [y] = valor;
        }
    }
    para ( int i = 0 ; i < 5 ; i ++) {
        para ( int n = 0 ; n < 5 ; n ++) {
            cout << matriz [i] [n];
        }
        cout << endl;
    }
    return  0 ;
}


}