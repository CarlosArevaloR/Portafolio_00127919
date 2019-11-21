# include  < iostream >
# include  < string >
usando el  espacio de nombres  estándar ;
struct  Nodo {
    cadena palabra;
    Nodo * sig;
};

// DECLARAR LISTA
Nodo * lista = NULL ;

// CREACION DE FUNCIONES

// FUNCION MOSTRAR
void  mostrar (Nodo * lista) {
    Nodo * nuevo;
    nuevo = lista;
    if (nuevo! = NULL ) {
        mostrar (nuevo-> sig );
        cout << nuevo-> palabra << endl;
    }
}
// INSERTAR FUNCIONAL
void  insertar (Nodo * & lista, string n) {
    Nodo * nuevo = nuevo  Nodo ();
    nuevo-> palabra = n;

    Nodo * auxiliar1 = lista, * auxiliar2;
    while ((auxiliar1! = NULL )) {
        auxiliar2 = auxiliar1;
        auxiliar1 = auxiliar1-> sig ;
    }
    if (lista == auxiliar1) {
        lista = nuevo;
    } más {
        auxiliar2-> sig = nuevo;
    }
    nuevo-> sig = auxiliar1;
}

// DECLARACION DEL PRINCIPAL
int  main () {
    int opcion;
    cadena palabra;
    bool continuar = verdadero ;
    hacer {
        cout << " 1) Ingresar palabra a la lista " << endl;
        cout << " 2) Mostrar lista al reves " << endl;
        cout << " 3) Salir " << endl;
        cin >> opcion;
        interruptor (opción) {
            caso  1 :
                cout << " Digite una palabra: " << endl;
                cin >> palabra;
                insertar (lista, palabra);
                romper ;
            caso  2 :
                cout << " Valores ingresados: " << endl;
                mostrar (lista);
                romper ;
            caso  3 :
                continuar = falso ;
                romper ;
        }
    } while (continuar);
    devuelve  0 ;
}