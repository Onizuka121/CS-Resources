#stampa a e sottoienare con * le vocali e con # le cifre decimali
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

print(stringa_out)

 

