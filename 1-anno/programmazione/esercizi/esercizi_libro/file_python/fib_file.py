'''
Scrivere un programma che conservi i primi dieci numeri 
della successione di Fibonacci in un file con il nome fib_file. 
Ogni numero deve essere su una riga distinta del file. 
Il programma poi deve leggere i numeri dal file e stamparli
'''

def write_fib_file(n):
    f = open('fib_file','w')

    def fib(n):
        if n == 0 or n == 1:
            return n

        return fib(n-1)+fib(n-2)
    
    for i in range(1,n+1):
        f.write(f"{fib(i)}\n")
    
    f.close

write_fib_file(10)

