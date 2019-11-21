
# include  < iostream >
usando el  espacio de nombres  estándar ;

// ------ Creacion de nodo y de arbol ------
estructura  nodo {
    int info;
    struct  nodo * izq;
    struct  nodo * der;
};
typedef  struct  nodo Nodo;
typedef  struct  nodo * Arbol;

// CREANDO ARBOL
Arbol crearArbol ( int x) {
    Arbol p = nuevo Nodo;
    p-> info = x;
    p-> izq = NULL ;
    p-> der = NULL ;
    volver p;
}

// ------ Agregar nodos a un árbol ------
void  asignarIzq (Arbol a, int unDato) {
    if (a == NULL )
        cout << " Error: arbol vacio " << endl;
    otra cosa  si (a-> izq ! = NULL )
        cout << " Error: subarbol IZQ ya existe " << endl;
    más
        a-> izq = crearArbol (unDato);
}

// AGREGAR SUB ARBOL DERECHO
void  asignarDer (Arbol a, int unDato) {
    if (a == NULL )
        cout << " Error: arbol vacio " << endl;
    otra cosa  si (a-> der ! = NULL )
        cout << " Error: subarbol DER ya existe " << endl;
    más
        a-> der = crearArbol (unDato);
}

nulo  agregarNodo (Arbol a) {
    // solicitar información (numero a agregar)
    int numero = 0 ;
    cout << " Numero a agregar: " ;
    cin >> numero;

    Arbol p = a;

    // desplazarse hasta el lugar adecuado
    while ( verdadero ) {
        if (numero == p-> info ) {
            cout << " Error: " << numero << " ya existe " << endl;
            volver ;
        }
        else  if (numero <p-> info ) { // ir a la izquierda
            if (p-> izq == NULL )
                romper ;
            más
                p = p-> izq ;
        }
        de lo contrario { // ir a la derecha
            if (p-> der == NULL )
                romper ;
            más
                p = p-> der ;
        }
    }

    // agregar el nuevo nodo
    if (numero <p-> info )
        asignarIzq (p, numero);
    más
        asignarDer (p, numero);
}

// ------ Recorrer un arbol (en, pre y post orden) ------
vacío  preordenado (Arbol a) {
    if (a! = NULL ) {
        cout << "  " << a-> info ;
        preordenado (a-> izq );
        preordenado (a-> der );
    }
}
vacío  inorden (Arbol a) {
    if (a! = NULL ) {
        inorden (a-> izq );
        cout << "  " << a-> info ;
        inorden (a-> der );
    }
}
nulo  postorden (Arbol a) {
    if (a! = NULL ) {
        postorden (a-> izq );
        postorden (a-> der );
        cout << "  " << a-> info ;
    }
}

anular  recorrer Arbol (Arbol a) {
    cout << " Recorrido PRE orden: " ; preordenado (a); cout << endl;
    cout << " Recorrido IN orden: " ; inorden (a); cout << endl;
    cout << " Recorrido POST orden: " ; postorden (a); cout << endl;
}
int izq = 0 , der = 0 ;
anular  recorrerIzq (Arbol a) {
	si (! a)
	volver ;
	más {
		izq ++;
		recorrerIzq (a-> izq );
	}
}
anular  recorrerDer (Arbol a) {
	si (! a)
	volver ;
	más {
		der ++;
		recorrerDer (a-> der );
	}
}
int  main () {
    int variable = 0 ;
    cout << " Inicializando arbol ... \ n Valor contenido en la raiz: " ;
    cin >> variable;

    Arbol arbol = crearArbol (variable);

    bool continuar = verdadero ;
    hacer {
        int opcion = 0 ;
        cout << " Menú: \ n \ t 1) Agregar \ n \ t 2) Grabador \ n \ t 3) Ver Profundidad "
            << " \ n \ t 4) Salir \ n \ t Opción elegida: " ;
        cin >> opcion;
        interruptor (opción) {
            caso  1 : agregarNodo (arbol);
            romper ;
            caso  2 : recorrerArbol (arbol);
            romper ;
            caso  3 :
			izq = 0 , der = 0 ;
			recorrerIzq (arbol-> izq );
			recorrerDer (arbol-> der );
			if (der> = izq) {
				cout << " La profundidad del árbol es: " << der << endl << izq << endl;
			} más {
				cout << " La profundidad del árbol es: " << izq << endl << der << endl;
			}
            romper ;
			caso  4 : continuar = falso ;
            romper ;
            predeterminado : cout << " Opcion erronea! " << endl;
            romper ;
        }
    } while (continuar);

    devuelve  0 ;
}