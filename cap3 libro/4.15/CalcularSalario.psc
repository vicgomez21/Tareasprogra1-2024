
	Algoritmo CalcularSalario
		Definir ventas_brutas, pago_semanal Como Real;
		Definir porcentaje_comision, total Como Real;
		
		ventas_brutas <- 0;
		pago_semanal <- 200;
		porcentaje_comision <- 0.09;
		
		Escribir "Introduzca las ventas en dólares (-1 para salir): ";
		Leer ventas_brutas;
		
		Mientras ventas_brutas <> -1 Hacer
			total <- pago_semanal + (ventas_brutas * porcentaje_comision);
			Escribir "El salario es: ", total;
			Escribir "Introduzca las ventas en dólares (-1 para salir): ";
			Leer ventas_brutas;
		Fin Mientras
		
FinAlgoritmo

