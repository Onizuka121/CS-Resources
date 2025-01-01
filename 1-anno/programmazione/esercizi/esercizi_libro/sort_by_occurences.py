'''
Si scriva una funzione Python, chiamata sort_by_occurrences, 
che prenda una stringa in input e restituisca una nuova stringa in cui 
i caratteri della stringa originale sono ordinati dal più frequente al meno frequente.

Ad esempio, se
a = ')-:))-'
sort_by_occurrences( a ) ritornerebbe

':-)'

'''

def sort_by_occurrences(s):
    oc = {}
    for c in s:
        if oc.get(c,None) == None:
            oc[c] = 1
        else:
            oc[c] += 1
    oc = sorted(oc,key=lambda x : oc[x])
    print(''.join(oc))

sort_by_occurrences(')-:))-')
