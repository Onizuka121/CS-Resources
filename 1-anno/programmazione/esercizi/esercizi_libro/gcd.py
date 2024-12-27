'''
Scrivere un programma che chieda in input un intero n maggiore di 2 e 
stampi il più grande divisore di n oppure, 
nel caso questo non esista, la stringa 'n è un numero primo'. 
Suggerimento se y*z = n e y è il più piccolo divisore di n, allora ...

'''

#n = int(input("inserisci numero maggiore di 2: "))
n = 145
if(n > 2):
    i = n-1
    while i >= 1:
        if(n%i == 0):
            print("gcd of", n, " : ", i)
            break
        i -= 1 

    if(i == 1):
        print("number is prime")


print("-----------------------")
'''
soluzione libro  :
'''
p = 1
primo = True
for d in range(2, int(n**0.5)+1):
    if n%d == 0:
        p = d
        primo = False
        break

if primo:
    print(f'{n} è un numero primo')
else:
    print(f'{int(n/p)} è il più grande divisore di {n}')


