'''
 scrivere un programma che date due stringe in input , in output
 stampa solo i caratteri che la prima stringa ha in comune cona la seconda stringa
'''

























stringa1 = input('insert string 1 : ')
stringa2 = input('insert string 2 : ')
out = ''

for c in stringa2:
	if c in stringa1:
		out += c


print(out)


