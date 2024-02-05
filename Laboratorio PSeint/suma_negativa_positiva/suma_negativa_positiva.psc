Algoritmo suma_negativa_positiva
	Escribir "ingrese primer numero";
	leer a;
	Escribir "ingrese segundo numero";
	leer b;
	total=(a)+(b);
	Si total > 0 Entonces
		Escribir total;
		escribir" la suma de los valores es POSITIVA";
	SiNo
		Si total< 0 Entonces
			Escribir total;
			escribir" la suma de los valores es NEGATIVA";
		SiNo
			Escribir total;
			escribir" la suma de los valores es CERO";
		Fin Si
	Fin Si
FinAlgoritmo
