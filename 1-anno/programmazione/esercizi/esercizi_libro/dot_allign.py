'''
Si scriva una funzione, denominata dot_allign, che riceva in input una lista di numeri e li stampi uno per riga rispettando i seguenti vincoli:

i numeri devono essere ordinati, in modo crescente, in base alla quantità di cifre decimali dopo la virgola;
i numeri devono essere allineati rispetto al punto decimale;

Ad esempio, dot_allign([3.14, 0.0001, 52.612, 2.718, 5.0, 123, 1000.0000001]) deve produrre il seguente output

 123
   5.0
   3.14
  52.612
   2.718
   0.0001
1000.0000001

'''



'''
vado a creare un dizionario del genere: 
    3.14 : [1,2] dove 1 sta per la lunghezza di "3" e 2 la lunghezza di "4"
...
intoltre mi tengo conto di chi ha il numero intero piu grosso
come tra 3.22222222 e 1000.01 vince 1000 pero sarà in ordine dopo 3.22222222 ma almeno so che il 
massimo della parte intera ha 4 spazi (da tenere in considerazione per la stampa in ordine)
'''

def dot_allign(a):
    d = {}
    max_space = 0
    for e in a:
        s = str(e).split(".")
        d[e] = [len(s[0]),0]
        if len(s) > 1:
            d[e][1] = len(s[1])
        if d[e][0] > max_space:
            max_space = d[e][0]
    
    a.sort(key=lambda x: d[x][1])
    for e in a:
        print((" "*(max_space - d[e][0]))+f"{e}")
    
dot_allign([3.14, 0.0001, 52.612, 2.718, 5.0, 123, 1000.0000001])
        

