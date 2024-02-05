Algoritmo calculadora_case
	cont <- 1;
	Mientras cont<>0 Hacer
		Escribir '1. sumar';
		Escribir '2. restar';
		Escribir '3. multiplicar';
		Escribir '4. dividir';
		Escribir 'Elige una opcion';
		Leer opcion;
		Según opcion Hacer
			1:
				Escribir 'ingrese un numero';
				Leer a;
				Escribir 'ingrese un segundo numero';
				Leer b;
				result <- (a+b);
				Escribir 'el resultado de la suma de: ', a, ' + ', b, ' = ', result;
			2:
				Escribir 'ingrese un numero';
				Leer a;
				Escribir 'ingrese un segundo numero';
				Leer b;
				result <- (a-b);
				Escribir 'el resultado de la resta de: ', a, ' - ', b, ' = ', result;
			3:
				Escribir 'ingrese un numero';
				Leer a;
				Escribir 'ingrese un segundo numero';
				Leer b;
				result <- (a*b);
				Escribir 'el resultado de la multiplicacion de: ', a, '  ', b, ' = ', result;
			4:
				Escribir 'ingrese un numero';
				Leer a;
				Escribir 'ingrese un segundo numero';
				Leer b;
				Mientras b=0 Hacer
					Escribir 'Error escribir un numero distinto a 0';
					Leer b;
				FinMientras
				result <- (a/b);
				Escribir 'el resultado de la division de: ', a, ' / ', b, ' = ', result;
			De Otro Modo:
				Escribir 'opcion no valida';
		FinSegún
		Escribir 'desea realizar otra operacion?(si)1/(0)';
		Leer cont;
		Si cont=0 Entonces
			Escribir 'Vuelva pronto';
		FinSi
	FinMientras
FinAlgoritmo
