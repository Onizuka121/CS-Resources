'''
Scrivere un programma che chieda all'utente di inserire un intero e stampi due interi, root e pwr,
tali che 1 < pwr < 6 e root**pwr (potenza root alla pwr) sia uguale all'intero inserito dall'utente. 
Se non esiste una coppia con queste caratteristiche, deve stampare un messaggio che lo segnali.
'''

n = 81
root = 1
pwr = 2
findit = False

while (root**pwr) <= n and not findit:
    while pwr < 6:
        if(root**pwr) == n:
            print(f"{root}**{pwr} = {n}")
            findit = True
            break

        pwr += 1
    pwr = 2
    root += 1

if not findit:
    print(f"no root and pwr for {n}")

