'''
Scrivere un programma che chieda all'utente di inserire una sequenza di numeri e,
per ogni numero inserito a partire dal terzo,
stampi la media troncata ovvero la media dei valori inseriti scartando il valore minimo e massimo.
'''

n = int(input("inserisci numero : "))
min = n
max = n
sum = n
i = 2
while i <= 9:
    n = int(input("inserisci numero : "))
    sum += n
    if n < min:
        min = n
    elif n > max:
        max = n
    if i >= 3:
        print(f"media fino ad ora {i} : {(sum-min-max)/(i-2)}")
    i+=1
