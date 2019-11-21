# include < iostream >
usando el  espacio de nombres  estándar ;

/ * MACHOTE EN EL PRINCIPAL
 int main () {
    int mcd = 0;
    int menor = 0, mayor = 0;
    cout << "Digite el numero menor:" << endl; cin >> menor;
    cout << "Digite el numero mayor:" << endl; cin >> mayor;
    
    if (menor> mayor) {
        cout << "Tas pendejo we" << endl;
       
    }más{
        if (mayor% menor == 0) {
            mcd = menor;
            cout << "MCD:" << mcd;
        }más{
            mayor = menor;
            menor = mcd;
            cout << "El residuo es:" << menor;
        }
    }
}
 
 * /


// CODIGO EN FUNCIONES:
# include < iostream >
usando el  espacio de nombres  estándar ;

int  residuo ( int , int );

int  main () {
    int mcd = 0 ;
    int menor = 0 , mayor = 0 ;
    cout << " Digite el numero menor: " << endl; cin >> menor;
    cout << " Digite el numero mayor: " << endl; cin >> mayor;
    if (menor> mayor) {
        cout << " Tas pendejo we " << endl;
       
    } más {
        cout << " El mcd es: " << residuo (mayor, menor);
    }
}

int  residuo ( int mayor, int menor) {
if (mayor% menor == 0 ) {
            regreso menor;
        } más {
   
   retorno  residual (menor, mayor% menor);
        }
}