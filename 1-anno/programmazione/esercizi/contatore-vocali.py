'''
Modificare il codice precedente facendo in modo che il programma conti il 
numero di vocali minuscole all'interno della stringa. 
Risolvere il problema usando l'operatore /in/.
'''



a = input('inserisci stringa utonto per contare le vocali @> ')
vocali = 'aeiou'
count_voc , index = 0,0
while index < len(a):
	if a[index] in vocali:
		count_voc += 1
	index += 1

print(f'numero di vocali : {count_voc}')
