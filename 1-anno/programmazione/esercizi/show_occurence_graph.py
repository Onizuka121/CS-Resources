import matplotlib.pyplot as plt
import matplotlib
matplotlib.use('TkAgg')  

def show_graph(file_path):
    f = open(file_path)
    d = {}
    for line in f:
        for c in line:
            if c in 'àaAÀ':
                c = 'a'
            elif c in 'òÒOo':
                c = 'o'
            elif c in 'ùÙUu':
                c = 'u'
            elif c in 'ìÌIi':
                c = 'i'
            elif c in 'èÈEe':
                c = 'e'
            elif c >= 'A' and c <= 'Z':
                c = chr(ord(c)+32)
            if c >= 'a' and c <= 'z':
                d[c] = d.get(c,0) + 1 

    f.close() 
    d_sorted = {}
    keys = sorted(d)
    for k in keys:
        d_sorted[k] = d[k]

    plt.bar(keys,list(d_sorted.values()))
    plt.show()


show_graph('I-promessi-sposi.txt')
#complessità temporale : O(n) dove n è il numero di caratteri presenti nel file 
#attenzione che non è nlogn perche il dizionario avrà dimensione massima di 26 lettere (alfabeto)
#e quindi è considerato costante O(klogk) dove  k <= 26
#complessità spaziale : O(1) la complessità è costante perche il dizionario usato avrà massimo 26 chiavi 


