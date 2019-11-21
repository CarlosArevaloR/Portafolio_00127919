# include  < iostream >
usando el  espacio de nombres  estándar ;

struct  Tpila {
    elementos flotantes [ 5 ];
    int top;
};
typedef  struct  Tpila Pila;

 inicialización nula (Pila * s) {
    s-> top = - 1 ;
}

bool  vacío (Pila * s) {
    return s-> top < 0 ;
}

 empuje vacío (Pila * s, flotador e) {
    if (s-> top < 4 ) {
        (s-> arriba ) ++;
        s-> elementos [s-> top ] = e;
    }
}

vacío  pop (Pila * s, float * e) {
    if (s-> top > = 0 ) {
        * e = s-> elementos [s-> arriba ];
        (s-> arriba ) -;
    }
}

flotador  ultimoElto (Pila * s) {
	flotador y = 0 ;
	while (! empty (s)) {
    	pop (s, & y);
	}
	volver y;
}

int  main () {
    Pila unaPila;
    inicializar (& unaPila);

    if ( vacío (& unaPila))
        cout << " Esta vacia " << endl;

    // Agregar un valor
    flotador x = 5.6 ;
    empujar (& unaPila, x);
    flotador z = 2.3 ;
    empujar (& unaPila, z);
    flotador w = 7.6 ;
    empujar (& unaPila, w);
    flotador h = 8.6 ;
    empujar (& unaPila, h);
    flotador g = 9.2 ;
    empujar (& unaPila, g);
   
    
    	if (! empty (& unaPila))
        	cout << " Valor último : " << ultimoElto (& unaPila) << endl;
    
}