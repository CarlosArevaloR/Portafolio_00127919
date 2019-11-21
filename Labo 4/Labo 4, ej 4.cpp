# include  < iostream >
usando el  espacio de nombres  estándar ;

// DECLARACION DE ESTRUCTAS
struct  num {
    int n;
    num * sig;
};
struct  sumas {
    int pares, impares;
};

// GENERANDO FUNCIONES
Sumas Funcionsuma (num * lista, int Pares, int impares);

// DECLARACION DEL PRINCIPAL
int  main () {
    sumas
    int n = 0 , opc = 0 , pares = 0 , impares = 0 ;

    num * pInicio = NULL ;
    hacer {
        cout << " MENÚ PRINCIPAL " << endl;
        cout << " 1. Agregegar numero " << endl;
        cout << " 2. Mostrar suma de pares e impares " << endl;
        cout << " 0. víctimas   " << endl;
        cout << " Opción: " << endl;

        cin >> opc;
        num * nuevo = nuevo num;
        interruptor (opc) {
            caso  1 :
                cout << " Ingrese un numero: " << endl;
                cin >> n;
                nuevo-> sig = NULL ;
                nuevo-> n = n;
                if (! pInicio) {
                    pInicio = nuevo;
                }
                más {
                    nuevo-> sig = pInicio;
                    pInicio = nuevo;
                }
                romper ;
            caso  2 :
                cout << " SUMA DE LOS PARES E IMPARA " << endl;
                s = Funcionsuma (pInicio, Pares, impares);
                cout << " PARES: " << s. pares << endl;
                cout << " IMPARA: " << s. impares << endl;
                romper ;

            valor predeterminado : if (opc! = 0 && opc! = 1 && opc! = 2 ) {
                    cout << " Opcion erronea! " << endl;

                } Romper ;

        }
    } while (opc! = 0 );
     cout << " Saliendo ... " << endl;


    devuelve  0 ;
}
Sumas Funcionsuma (num * lista, int Pares, int impares) {
    si (! lista) {
        sumas
        s. impares = impares;
        s. pares = pares;
        volver s;
    }
    más {
        if (lista-> n % 2 == 0 ) {
            pares + = lista-> n ;
            Funcionsuma (lista-> sig , Pares, impares);
        }
        más {
            impares + = lista-> n ;
            Funcionsuma (lista-> sig , Pares, impares);
        }
    }
}