# include  < iostream >
# include  < string >

usando el  espacio de nombres  estándar ;

struct  TOrden {
    int Revuelta;
    int FrijolConQueso;
    int Queso;
    bool arroz = falso ;
};

typedef  struct  TOrden Orden;

Orden solicitarOrden () {
    Orden p;
    int masa;

    cout << " Revuelta: " ; cin >> p. Revuelta ;
    cout << " Frijol con queso: " ; cin >> p. FrijolConQueso ;
    cout << " Queso: " ; cin >> p. Queso ;
    cout << " Masa: \ n \ t 1) Arroz \ n \ t 2) Maiz \ n La Opción es: " ; cin >> masa;

    if (masa == 1 ) {
        pags. arroz = verdadero ;
    }


    volver p;
}

nulo  mostrarOrden (Orden p) {
    if (p. arroz == verdadero ) {
        cout << " Revuelta: " << p. Revuelta << endl;
        cout << " Frijol con queso: " << p. FrijolConQueso << endl;
        cout << " Queso: " << p. Queso << endl;
        cout << " Pupusas de Arroz " << endl;
    } más {
        cout << " Revuelta: " << p. Revuelta << endl;
        cout << " Frijol con queso: " << p. FrijolConQueso << endl;
        cout << " Queso: " << p. Queso << endl;
        cout << " Pupusas de Maiz " << endl;
    }
}

struct  TNodo {
    Orden dato;
    struct  TNodo * sig;
};
typedef  struct  TNodo Nodo;
Nodo * pInicio;

nulo  insertarInicio (Orden p) {
    Nodo * nuevo = nuevo Nodo;
    nuevo-> dato = p;
    nuevo-> sig = pInicio;

    pInicio = nuevo;
}

vacío  insertar Final (Orden p) {
    Nodo * nuevo = nuevo Nodo;
    nuevo-> dato = p;
    nuevo-> sig = NULL ;

    if (pInicio == NULL ) {
        pInicio = nuevo;
    } más {
        Nodo * p = pInicio;
        Nodo * q = NULL ;
        while (p! = NULL ) {
            q = p;
            p = p-> sig ;
        }
        q-> sig = nuevo;
    }
}

void  agregarOrden () {
    Orden p = solicitarOrden ();
    bool continuar = verdadero ;
    hacer {
        int opcion = 0 ;
        cout << " \ t 1) Al principio \ n \ t 2) Al final "
             << " \ n \ t Opción elegida: " ;
        cin >> opcion;
        interruptor (opción) {
            caso  1 : insertarInicio (p);
                continuar = falso ;
                romper ;
            caso  2 : insertarFinal (p);
                continuar = falso ;
                romper ;
            predeterminado : cout << " Opcion erronea! " << endl;
                romper ;
        }
    } while (continuar);
}

vacío  mostrarLista () {
    Nodo * s = pInicio;

    while (s! = NULL ) {
        mostrarOrden (s-> dato );
        s = s-> sig ;
    }
}

int  main () {
    cout << " Inicializando ... " << endl;
    pInicio = NULL ;

    bool continuar = verdadero ;
    hacer {
        int opcion = 0 ;
        cout << " Menú: \ n \ t 1) Agregar Orden \ n \ t 2) Ver Orden "
             << " \ n \ t 3) Salir \ n \ t Opción elegida: " ;
        cin >> opcion;
        interruptor (opción) {
            caso  1 : cout << " Agregando ... " << endl;
                agregarOrden ();
                romper ;
            caso  2 : cout << " Listando ... " << endl;
                mostrarLista ();
                romper ;
            caso  3 : continuar = falso ;
                romper ;
            predeterminado : cout << " Opcion erronea! " << endl;
                romper ;
        }
    } while (continuar);

    devuelve  0 ;
}