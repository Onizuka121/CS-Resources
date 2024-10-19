'''
un numero perfetto e' un numero naturale ugale alla somma dei sui divisori
positivi ,escluso se stesso. scrivere una funziona che verifichi se un numero se e 
perfetto oppure no 
'''

n = int(input('insert numero : '))
somma = 0
i = 1
while i < n:
	if (n%i) == 0:
		somma = somma + i
	i = i + 1
	print(somma)

if somma == n:
  	print('e perfetto')
else:
	print('non perfetto')
