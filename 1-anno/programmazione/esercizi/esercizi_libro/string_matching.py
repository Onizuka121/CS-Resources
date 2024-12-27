'''
Scrivere un programma che chieda in input due stringhe a e b. 
Se b è sottostringa di a il programma stampi la posizione di a 
a partire dalla quale compare b. 
Altrimenti il programma stampi -1. 

Ad esempio se a fosse la stringa 'rinoceronte' e 
b la stringa 'noce', 
il programma stamperebbe 2.

rinoceronte
noce

'''

a = input("inserisci a : ")
b = input("inserisci b : ")
i = 0
j = 0
while i < len(a) and j < len(b):
    if(len(a[i:]) >= len(b) and a[i:i+len(b)] == b):
        print(i)
        break
    i += 1

if i >= len(a):
    print(-1)








