Algoritmo Promedio_de_N
	Escribir "cuantos numeros desea ingresar";
	leer N;
	//iniciamos iteracion con saltos de uno en uno hasta llegar al valor de N
	Para i=1 Hasta N Con Paso 1 Hacer
		Escribir "ingrese un numero numero";
		leer num;
		//total sera un acumulador del numero ingresado
		total=total+num;	
	Fin Para
	promedio=total/N;
	Escribir "el promedio de los numeros ingresados es ",promedio;
FinAlgoritmo
