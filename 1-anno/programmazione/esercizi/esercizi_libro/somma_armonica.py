'''
La somma armonica di un intero, n > 0, si può calcolare con la formula

1 + 1/2 + 1/3 + ... + 1/n

Scrivete una funzione ricorsiva che la calcoli.

'''

def somma_armonica(n):
    out = 0
    for i in range(1,n+1):
        out += 1/i

    return out


