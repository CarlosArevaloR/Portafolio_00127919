# include < iostream >
# include < stack >
usando el  espacio de nombres  estándar ;

int mediana = 0 , tamanio = 5 , mitad = 2 ;
pila < int > pila;

int  funmediana () {
		mediana = (tamanio / mitad);
		para ( int i = 0 ; i <mediana; i ++) {
			pila. pop ();
		}
		volver pila. arriba ();
	}
	
int  main () {
	pila. empujar ( 1 );
	pila. empujar ( 2 );
	pila. empujar ( 3 );
	pila. empujar ( 4 );
	pila. empujar ( 5 );
	cout << " La mediana es: " << funmediana ();
	devuelve  0 ;
}