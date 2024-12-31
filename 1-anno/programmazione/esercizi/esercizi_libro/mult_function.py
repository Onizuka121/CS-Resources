'''
Si scriva una funzione denominata mult che accetti uno o due int. 
Se chiamata con due argomenti, la funzione stampa il prodotto. 
Se chiamata con un argomento, stampa quello.

'''

def mult(a,b=0):
    if b != 0:
        print(a*b)
    else:
        print(a)

mult(1)
mult(1976,2)
