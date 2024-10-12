'''
Si scriva un programma che conti e stampi quante volte compare il carattere ' ' (spazio) 
all'interno di una stringa legata alla variabile a. 
Il programma deve far uso soltanto dei costrutti Python fin qua studiati. 
Suggerimento: potrebbe essere utile un ciclo while che conta il numero di spazi consecutivi a 
partire da una posizione e che sia 'annidato' nel ciclo principale 
che scorre i caratteri della stringa.
'''

a = input('inserisci stringa utonto @> ')
space = ' '
count_spaces , index = 0,0
while index < len(a):
	if a[index] == space:
		count_spaces += 1
	index += 1

print(f'numero di spazi : {count_spaces}')
