'''
Si scriva una funzione, denominata longest, 
che riceva in input una lista di stringhe e restituisca la stringa più lunga.
Nel caso di più stringhe di lunghezza massima, 
la funzione ritorni quella che segue le altre nell'ordinamento alfabetico.

'''

def longest(strings):
    ms = strings[0]
    for s in strings:
        if len(ms) < len(s):
            ms = s
        elif len(ms) == len(s):
            if ms < s:
                ms = s

    return ms

print(longest(['b','o','l','a','c']))


