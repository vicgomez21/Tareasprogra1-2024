Algoritmo Cociente_y_residuo
	Escribir 'ingrese un numero';
	Leer a;
	Escribir 'ingrese un segundo numero';
	Leer b;
	Mientras b=0 Hacer
		Escribir 'Error escribir un numero distinto a 0';
		Leer b;
	FinMientras
	coci <- (a/b);
	residu <- (a MOD b);
	Escribir 'el resultado de la division: ', a, ' / ', b, ' es: ';
	Escribir ' cociente  = ', coci, ' residuo = ', residu;
FinAlgoritmo
