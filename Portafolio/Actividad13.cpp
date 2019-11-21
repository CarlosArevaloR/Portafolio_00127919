# include  < iostream >
# include  < string >
usando el  espacio de nombres  estándar ;

enum generos {ciencia_ficcion, aventura, policial, romance, misterio};

struct  TLibro {
    int isbn;
    titulo de cuerda;
    autor de cadena;
    generos genero;
    bool espanol;
};
typedef  struct  TLibro Libro;

Libro solicitarLibro () {
    Libro p;

    // --- Solicitar ISBN, Titulo y Autor ---
    cout << " ISBN: " ; cin >> p. isbn ;
    cin. ignorar (); // Limpiando el buffer
    cout << " Titulo: " ; getline (cin, p. titulo );
    cout << " Autor: " ; getline (cin, p. autor );

    // --- Solicitar genero del libro ---
    bool continuar = verdadero ;
    hacer {
        opcion de char = 0 ;
        cout << " Genero (c-ciencia | a-aventura | p-policial | r-romance | m-misterio): " ;
        cin >> opcion;
        interruptor (opción) {
            caso  ' c ' : p. genero = ciencia_ficcion; continuar = falso ;
                romper ;
            caso  ' un ' : p. genero = aventura; continuar = falso ;
                romper ;
            caso  ' p ' : p. genero = policial; continuar = falso ;
                romper ;
            caso  ' r ' : p. genero = romance; continuar = falso ;
                romper ;
            caso  ' m ' : p. genero = misterio; continuar = falso ;
                romper ;
            predeterminado : cout << " Opcion erronea! " << endl;
                romper ;
        }
    } while (continuar);

    // --- Solicitar idioma del libro ---
    continuar = verdadero ;
    hacer {
        char letra = 0 ;
        cout << " Español (s / n): " ;
        cin >> letra;
        interruptor (letra) {
            caso  ' s ' :
            caso  ' S ' : p. español = verdadero ; continuar = falso ;
                romper ;
            caso  ' n ' :
            caso  ' N ' : p. español = false ; continuar = falso ;
                romper ;
            predeterminado : cout << " Opcion erronea! " << endl;
                romper ;
        }
    } while (continuar);

    // --- Devolver libro ya poblado ---
    volver p;
}

vacío  mostrarLibro (Libro p) {
    cout << " ISBN: " << p. isbn << endl;
    cout << " Titulo: " << p. titulo << endl;
    cout << " Autor: " << p. autor << endl;

    cout << " Genero: " ;
    interruptor (p. genero ) {
        caso ciencia_ficcion: cout << " Ciencia ficción " << endl;
            romper ;
        caso aventura: cout << " Aventura " << endl;
            romper ;
        caso policial: cout << " Policial " << endl;
            romper ;
        caso romance: cout << " Romance " << endl;
            romper ;
        caso misterio: tribunal << " Misterio " << endl;
            romper ;
    }

    cout << " Idioma: " << (p. español ? " Español " : " Otro " ) << endl;
    cout << endl;
}

struct  TNodo {
    Libro dato;
    struct  TNodo * sig;
};
typedef  struct  TNodo Nodo;
Nodo * pInicio;

vacío  insertarInicio (Libro p) {
    Nodo * nuevo = nuevo Nodo;
    nuevo-> dato = p;
    nuevo-> sig = pInicio;

    pInicio = nuevo;
}

vacío  insertar Final (Libro p) {
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

vacío  insertarDespuesDe (Libro p) {
    int unISBN = 0 ;
    cout << " ISBN de libro de referencia: " ;
    cin >> unISBN;

    Nodo * s = pInicio;

    while (s! = NULL && (s-> dato ). isbn ! = unISBN)
        s = s-> sig ;
    if (s == NULL ) {
        cout << " Libro de referencia NO existe " << endl;
        volver ;
    }

    Nodo * nuevo = nuevo Nodo;
    nuevo-> dato = p;
    nuevo-> sig = s-> sig ;

    s-> sig = nuevo;
    cout << " Libro insertado con exito " << endl;
}

vacío  insertarAntesDe (Libro p) {
    int unISBN = 0 ;
    cout << " ISBN de libro de referencia: " ;
    cin >> unISBN;

    Nodo * s = pInicio, * q = NULL ;

    while (s! = NULL && (s-> dato ). isbn ! = unISBN) {
        q = s;
        s = s-> sig ;
    }
    if (s == NULL ) {
        cout << " Libro de referencia NO existe " << endl;
        volver ;
    }

    Nodo * nuevo = nuevo Nodo;
    nuevo-> dato = p;
    nuevo-> sig = s;

    si (q == NULL )
        pInicio = nuevo;
    más
        q-> sig = nuevo;
    cout << " Libro insertado con exito " << endl;
}

void  agregarLibro () {
    Libro p = solicitarLibro ();
    bool continuar = verdadero ;
    hacer {
        int opcion = 0 ;
        cout << " \ t 1) Al principio \ n \ t 2) Al final "
             << " \ n \ t 3) Despues de \ n \ t 4) Antes de "
             << " \ n \ t Opción elegida: " ;
        cin >> opcion;
        interruptor (opción) {
            caso  1 : insertarInicio (p); continuar = falso ;
                romper ;
            caso  2 : insertarFinal (p); continuar = falso ;
                romper ;
            caso  3 : insertarDespuesDe (p); continuar = falso ;
                romper ;
            caso  4 : insertarAntesDe (p); continuar = falso ;
                romper ;
            predeterminado : cout << " Opcion erronea! " << endl;
                romper ;
        }
    } while (continuar);
}

vacío  mostrarLista () {
    Nodo * s = pInicio;

    while (s! = NULL ) {
        mostrarLibro (s-> dato );
        s = s-> sig ;
    }
}

void  eliminarLibro () {
    Nodo * p = pInicio, * q = NULL ;
    while (p! = NULL && (p-> dato ). genero ! = 4 ) {
        q = p;
        p = p-> sig ;
    }
    if (p == NULL ) {
        cout << " No hay más libros que borrar " << endl;
        volver ;
    }
    si (q == NULL )
        pInicio = p-> sig ;
    más
        q-> sig = p-> sig ;
    eliminar (p);
    cout << " Libro borrado! " << endl;
    if (pInicio! = NULL ) {
        eliminarLibro ();
    }
}

bool  buscarLibro ( int valor) {
    Nodo * s = pInicio;
    interruptor (valor) {
        caso  1 :
            while (s! = NULL &&! (s-> dato ). espanol )
                s = s-> sig ;
            romper ;
        caso  2 :
            while (s! = NULL && (s-> dato ). genero ! = 0 )
                s = s-> sig ;
            romper ;
    }

    // Si s! = NULL entonces el libro SI se encuentra
    // Si s == NULL entonces el libro NO se encuentra
    return (s! = NULL );
}

int  main () {
    cout << " Inicializando ... " << endl;
    pInicio = NULL ;

    bool continuar = verdadero ;
    hacer {
        int opcion = 0 ;
        cout << " Menú: \ n \ t 1) Agregar Libro \ n \ t 2) Ver Libros "
             << " \ n \ t 3) Eliminar libro de misterio \ n \ t 4) Buscar Libro en español \ n \ t 5) Buscar Libros ciencia ficcion "
             << " \ n \ t 6) Salir \ n \ t Opción elegida: " ;
        cin >> opcion;
        interruptor (opción) {
            caso  1 : cout << " Agregando ... " << endl;
                agregarLibro ();
                romper ;
            caso  2 : cout << " Listando ... " << endl;
                mostrarLista ();
                romper ;
            caso  3 : cout << " Eliminando ... " << endl;
                eliminarLibro ();
                romper ;
            caso  4 : cout << " Buscando ... " << endl;
                if ( buscarLibro ( 1 ))
                    cout << " Si existen libros en español " << endl;
                más
                    cout << " No existen libros en español " << endl;
                romper ;
            caso  5 : cout << " Buscando ... " << endl;
                if ( buscarLibro ( 2 ))
                    cout << " Si existen libros de ciencia ficción " << endl;
                más
                    cout << " No existen libros de ciencia ficción " << endl;
                romper ;
            caso  6 : continuar = falso ;
                romper ;
            predeterminado : cout << " Opcion erronea! " << endl;
                romper ;
        }
    } while (continuar);

    devuelve  0 ;
}