'''
Si scriva una funzione Python, denominata sort_by_len, che riceva in input una lista di numeri (int o float) e la muti in modo che gli elementi siano ordinati per numero di cifre crescenti.

Ad esempio se
a = [3.14, 3133, 8, 123456, 1.2345]

dopo l'esecuzione di sort_by_len( a ),  a sarebbe
[8, 3.14, 3133, 1.2345, 123456]

'''

def sort_by_len(a):
   a.sort(key=lambda x : len(str(x)) if type(x) != type(0.1) else len(str(x))-1 )

a = [3.14, 3133, 8, 123456, 1.2345]
sort_by_len(a)
print(a)

