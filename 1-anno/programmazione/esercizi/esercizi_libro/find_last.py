'''
Usate il metodo find per le stringhe per implementare una funzione che soddisfi la specifica

def find_last(s, sub):
    """
    s e sub sono stringhe non vuote
    Restituisce l'indice dell'ultima occorrenza di sub in s,
        None se sub non è presente in s
    """
'''

def find_last(s,sub):
    s = s[::-1]#inverso della stringa
    sub = sub[::-1]
    if s.find(sub) != -1:
        return len(s)-s.find(sub)-len(sub)

s = "rinoceronteno"
print(find_last(s,"no"))
