Algoritmo determinar_numero_mayor
	Escribir 'ingresa un numero ';
	Leer a;
	Escribir 'ingresa un segundo numero';
	Leer b;
	Si a>b Entonces
		Escribir 'el numero mayor es ', a;
	SiNo
		Si a<b Entonces
			Escribir 'el numero mayor es ', b;
		SiNo
			Escribir 'los numeros ', a, ' y ', b, ' son iguales';
		FinSi
	FinSi
FinAlgoritmo
