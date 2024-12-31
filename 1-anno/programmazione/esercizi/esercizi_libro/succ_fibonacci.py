'''
La successione di Fibonacci è composta dagli interi 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,...
In particolare i primi due valori sono 0 e 1, 
ogni altro valore è dato dalla somma dei due precedenti.
Scrivere un programma che chieda in input un numero n e stampi il valore in posizione n della successione. 

Si tenga contro che il primo elemento della successione è in posizione 0.

0 1 2 3 4 5 6 
0 1 1 2 3 5 8

'''
#da input
n = 4
if n < 0: 
    print("nse po fa")
elif n == 0:
    print(0)
else:
    prec = 0
    fib = 1
    for i in range(n-1):
        tmp = fib
        fib += prec
        prec = tmp
    print(fib)



