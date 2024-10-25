#! /usr/bin/python3
'''
esercitazione giorno 2

scrivere una funzione rimario a cui vengono passati come parametri una lista
di parole e una parola inserita dall utente tramite funzione input

la funzione rimario dovra confrontare la parola inserita dall'utente con 
quelle presenti nell elenco , alla ricerca di rime intese come parole
le cui ultime 3 caratteri siano uguali alla parola inserita dall'utente

le rime dovranno essere messe in output con join

esempio

dare,fare,andare,mangiare,dormire,piacere,salutare

'''

parola = input('\tinserisci una parola : ')

def insertListaParole():
	lista_parole_input = []
	for i in range(5):
		lista_parole_input.append(input(f'\tinserisci la parola numero {i}  :'))

	return lista_parole_input

lista_parole = insertListaParole()		

def isRime(lista,parola):
	out = []
	last_parola = parola[len(parola)-3:] # volare -> are
	i = 0
	while i < len(lista):
		p = lista[i]
		if p[len(p)-3:] == last_parola:
			out.append(p)
		i += 1 
	return out

print(isRime(lista_parole,parola))




	  








