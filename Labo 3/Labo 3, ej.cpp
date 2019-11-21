# include  < iostream >
# include  < string >
usando el  espacio de nombres  estándar ;

// DECLARO LA ESTRUCTURA
struct  libros {
    titulo de cuerda;
    int npaginas;
    libros * sig;
};
typedef  struct  libros libro;

// FUNCION PARA BUSCAR LIBRO
void  Buscar_libro (libro * datos, string titulo) {
    if (datos) {
        if (datos-> titulo == titulo) {
            cout << " Numero de paginas: " << datos-> npaginas << endl;
        } más {
            Buscar_libro (datos-> sig , titulo);
        }
    } más {
        volver ;
    }
}

// DECLARACION DEL PRINCIPAL
int  main () {
    int opcion, npag = 0 ;
    titulo de cuerda;
    libro * direccion = NULL ;
    hacer {
        libro * nuevo = nuevo  libro ();
        cout << " Selecciona una opción: " << endl;
        cout << " 1) Agregar " << endl;
        cout << " 2) Buscar libro " << endl;
        cout << " 3) salir " << endl;
        cin >> opcion;

        // OPCION COMPARAR
        interruptor (opción) {
            caso  1 :
                cout << " Digite el titulo del libro: " << endl;
                cin >> titulo;
                cout << " Digite la cantidad de páginas: " << endl;
                cin >> npag;

                // PASO DE VALORES AL STRUCT
                nuevo-> sig = NULL ;
                nuevo-> titulo = titulo;
                nuevo-> npaginas = npag;
                if (! direccion) {
                    direccion = nuevo;
                }
                más {
                    nuevo-> sig = direccion;
                    direccion = nuevo;
                }
                romper ;
            caso  2 :
                cout << " Digite titulo del libro a buscar: " << endl;
                cin >> titulo;
                Buscar_libro (direccion, titulo);
                romper ;
        }
    }
    while (opcion! = 3 );
    devuelve  0 ;
}