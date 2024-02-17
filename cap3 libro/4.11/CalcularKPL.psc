Algoritmo CalcularKPL
    Definir kilometros, litros, total_kilometros, total_litros, kpl Como Real;
	
    total_kilometros <- 0;
    total_litros <- 0;
	
    Escribir "Escriba los kilometros usados (-1 para salir):";
    Leer kilometros;
	
    Mientras kilometros <> -1 Hacer
        Escribir "Escriba los litros:";
        Leer litros;
		
        kpl <- kilometros / litros;
        total_kilometros <- total_kilometros + kilometros;
        total_litros <- total_litros + litros;
		
        Escribir "KPL en este reabastecimiento:", kpl;
        Escribir "Total KPL:", total_kilometros / total_litros;
		
        Escribir "Escriba los kilometros usados (-1 para salir):";
        Leer kilometros;
    Fin Mientras
FinAlgoritmo
