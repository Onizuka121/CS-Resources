
'''
 esercizio di contare le parole di una stringa
ciao 
'''
parola = input('insert word :')
parola += ' '
count = 0
isparola = False
alfa = 'abcdefgkjlmnopqrstiuvwzxy'
for c in parola:
	if c in alfa:
		print('true')
		isparola = True	
	else:
		if isparola :
			isparola = False
			count += 1


print(count)
