'''
Scrivere un programma che chieda in input una stringa,
se questa rappresenta un numero intero allora stampi 
lo stesso numero con i separatori delle migliaia. 
Ad esempio, se la stringa fosse 1234567
il programma stamperebbe 1.234.567

1.000.000
10.000
1.000

L'esercizio deve essere svolto senza utilizzare le f-stringhe.
'''
n = input("inserisci numero :")
for c in n:
    if c > '9' or c < '0':
        print("roba inserita non valida !")
        exit()

i = len(n)-1
tmp = ""
while i >= 0:
    if (len(n)-i)%3 == 0 and i != 0:
        tmp = "." + n[i] + tmp
    else:
        tmp = n[i] + tmp
    i -= 1

print(tmp)



    
    





