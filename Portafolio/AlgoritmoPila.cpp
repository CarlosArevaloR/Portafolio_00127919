// PRIMER ALGORITMO

" Algoritmo: validación de paréntesis en una expresión usando una pila "
    int  sacar2doelto (stack s) {
    	if ( vacío (s))
    		volver - 1
    	i = pop (s)
    	if ( vacío (s))
    		volver - 1
    	i = pop (s)
    	regreso yo
    }
    
// SEGUNDO ALGORITMO    
    
    " Algoritmo: validación de paréntesis en una expresión usando una pila "
    int  sacar2doelto (stack s) {
    	if ( vacío (s))
    		volver - 1
    	arr = pop (s)
    	if ( vacío (s))
    		volver - 1
    	seg = pop (s)
    	empujar (s, seg)
    	empujar (s, arr)
    	volver seg
    }