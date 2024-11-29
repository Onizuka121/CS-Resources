'''
Scrivere una funzione in python che, date due stringhe in input, restituisce True se le due stringhe sono tra loro anagrammi, False altrimenti.

Vi ricordo che, date due parole p1 e p2, la parola p1 è un anagramma della parola p2 se spostando i caratteri di p1 è possibile ottenere la parola p2 e viceversa.

esempio : riso e orsi sono anagrammi = True

'''

def is_anagrammi(p1,p2):

    result = False
    chain = p1+p2
    len_p1 = len(p1)
    len_p2 = len(p2)
    i = 0

    while i < len(chain):
        if i < len_p1 and chain[i] in p2:
            result = True
        elif i >= len_p1 and chain[i] in p1:
            result = True
        else:
            return False
        i += 1

    return result

print(is_anagrammi('cattive','civetta'))
         
