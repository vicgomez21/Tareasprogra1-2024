Algoritmo calcular_salario_semanal
	Escribir 'calculadora de salario semanal';
	Escribir 'ingresas las horas trabajadas en la semana';
	Leer horas;
	Escribir 'ingrese la tarifa que cobra por hora';
	Leer tarifa;
	Escribir 'ingrese sus bonificaciones si es que obtuvo';
	Leer bonificaciones;
	Escribir 'ingrese sus Deducciones si es que obtuvo';
	Leer deducciones;
	Escribir 'ingrese horas extras si es que realizo';
	Leer horas_extra;
	Escribir 'ingrese el factor de pago extra ';
	Leer FPextra;
	TariHextras <- tarifa*horas_extra*FPextra;
	Ssemanal <- (horas*tarifa)+bonificaciones+TariHextras-deducciones;
	Escribir 'su salario semanal es de : ';
	Escribir Ssemanal;
FinAlgoritmo
