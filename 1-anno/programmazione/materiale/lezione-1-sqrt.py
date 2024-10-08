import time
#primo programma in python calcolo radice q di x
#variabile x e g
#numeri razionali finito dopo la virgola 
#tipo di dato
#tipi di dati numerici (interi) 
#i numeri razionali si chiamano numeri con virgola mobile (float or double)
x = int(input('insert x :')) #intero
print(x)
#assegno il numero 5 alla variabile g con l'operatore '=' 
g = 5 
print(type(g))
start_time = time.perf_counter()

#controllo se x sia minore di 0
if x > 0 :
#indentazione importante nel linguaggio python siccome non fa utilizzo di simboli che fa capire
#ciclo while di controllo se g e abbastanza vicino a x
#fin tanto che la condizione e vera continuo il ciclo o meglio le operazioni che sono nel blocco
#quindi controllo se il quadrato di g meno x sia maggiore  (minore per finire) di 0.00001
#0.0001 sara la mia tolleranza di 'close'
#abs() e una funzione gia incorporata nel linguaggio python 
#che prende in input un numero
#la condizione ritorna True o False
#se la condizione ritorna True continua con il ciclo oppure esci dal blocco while
# qui possiamo anche controllare  g - x/g  ovvero il segmentino che piano diminuira
	while abs(g*g - x) > 0.00001 :
		#calcolo di g nuovo dove cambia tipo da int a float
		#l'operatore diviso '/'  ritorna sempre un float
		g = (g + x/g)/2
		print(type(g))
	print(g)
else :
	print('errore di x non puo essere minore di 0')

end_time = time.perf_counter()

print('tempo passato', end_time - start_time)
