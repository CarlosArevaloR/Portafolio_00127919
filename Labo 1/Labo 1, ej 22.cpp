# include  < iostream >
usando el  espacio de nombres  estándar ;

char partereal [ 10 ], parteimaginaria [ 10 ];

int   main () {
    cout << " Indicación: Digite un complejo parte por parte " << endl;
    cout << endl;
    cout << " Digite Parte Real: " << endl;
    cin >> partereal;
    cout << " Digite Parte Imaginaria: " << endl;
    cin >> parteimaginaria;
    para ( int i = 0 ; i < 5 ; i ++) {
        if (parteimaginaria [i] == ' - ' ) {
            cout << " El numero complejo ingresado es: " << partereal << parteimaginaria << endl;
            parteimaginaria [i] = ' + ' ;
            cout << " La conjugada del complejo ingresado es: " << partereal << parteimaginaria << endl; romper ;

        } else  if (parteimaginaria [i] == ' + ' ) {
            cout << " El numero complejo ingresado es: " << partereal << parteimaginaria << endl;
            parteimaginaria [i] = ' - ' ;
            cout << " La conjugada del complejo ingresado es: " << partereal << parteimaginaria << endl; romper ;
        } más {
            cout << " El numero complejo ingresado es: " << partereal << " + " << parteimaginaria << endl;
            cout << " La conjugada del complejo ingresado es: " << partereal << " - " << parteimaginaria << endl; romper ;
        }
    }
}