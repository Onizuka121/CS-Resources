#! /bin/usr/python3



'''
	Liste
	* lista.append(item) questa operazione ha tempo costante , in media 1 --> O(1)
	

	esercizio
	input : una lista a e un valore v
	Return : una lista di interi contenente le posizioni di v in a
	
	
Quanto costa questo programma ?


'''

def func1(a,v):
	# n = len(a)
	i = 0
	out = []

	while i < len(a):
		if a[i] == v:
			out.append(i)
		i += 1

	return out


def func2(a,v):

	# si puo usare anche il for per iterare con indice 
	out = []
	for i in range(len(a)):
		print(a[i])


'''
	Calcoliamo la complessita computazionale temporale di questo programma
	che sottolinea le stringe a dipendere dei caratteri 

'''

#stampa a e sottoienare con * le vocali e con # le cifre decimali
'''
stringa = input('inserisci la stringa')
i = 0
stringa_out = ''
print(stringa)
while i < len(stringa):
	if stringa[i] in 'aeiouAEIOU':
		stringa_out+='*'
	elif stringa[i] >= '0' and stringa[i] <= '9':
		stringa_out+='#'
	else :
		stringa_out+=' '
	i+=1

'''







'''
	prende in input due valori , una lista e un valore
	ritornare null
	elimina da a tutte le occorenze del valore
	

	problema di list out index

	. a = [1,2,3,4,1,4,5]
	. devo cancellare 1
	i = 0
	 *
	[1,2,3,4,1,4,5]
	del(1)
	i = 1
	   *           ---> abbiamo saltato 2  quindi devo incrementare solo se ho non ho tolto niente
	[2,3,4,1,5]
	i = 1
	[2,3,4,1,5]
	 
	
'''

def deloccorenza(a,v):
	for i in range(len(a)):
		if a[i] == v:
			del(a[i])


a = [1,2,3,4,5,1]

deloccorenza(a,1)
print(a)





























 

