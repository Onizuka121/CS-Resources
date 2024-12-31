'''
Scrivere un programma che chieda in input due stringhe a e b. 
Se b è sottostringa di a il programma stampi la posizione di a 
a partire dalla quale compare b. 
Altrimenti il programma stampi -1.

VERSIONE CON FUNZIONE E TESTING

Ad esempio se a fosse la stringa 'rinoceronte' e 
b la stringa 'noce', 
il programma stamperebbe 2.

rinoceronte
noce

'''

def is_in(a,b):
    i,j = 0,0
    while i < len(a) and j < len(b):
        if(len(a[i:]) >= len(b) and a[i:i+len(b)] == b):
            return i
        i += 1

    return -1

def test_is_in(main, *args):
    print("main : ", main)
    for arg in args:
        print(f"testing {arg} => {is_in(main,arg)}")

test_is_in("rinoceronte","noce","","rix","rinoceronte")








