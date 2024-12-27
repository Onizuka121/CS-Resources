'''
Scrivere un programma che chieda all'utente 
due stringhe a e b, 
se queste hanno almeno una lettera in comune il programma 
stampi a in orizzontale e b in verticale in modo tale che 
si intersechino nella prima lettera che compare 
sia in a che in b.
'''

a = input("inserisci a: ")
b = input("inserisci b: ")
i = j = 0
while i < len(a):
    j = 0
    while j < len(b) and a[i] != b[j]:
        j += 1 
    if j != len(b):
        break

    i += 1

if i == len(a) and j == len(b):
    exit()

for row in range(len(b)):
    if row == j:
        print(a)
        row += 1
    else:
        for col in range(i):
            print(" ",end="")
        print(f"{b[row]}")







