Algoritmo EncontrarMayor
    Definir contador, mayor, numero Como Entero
	
    contador <- 1;
    mayor <- 0;
	
    Mientras contador <= 10 Hacer
        Escribir "Introduzca un n�mero:";
        Leer numero;
		
        Si numero > mayor Entonces
            mayor <- numero;
        FinSi
		
        contador <- contador + 1;
    Fin Mientras
	
    Escribir "El n�mero m�s grande es:", mayor;
FinAlgoritmo