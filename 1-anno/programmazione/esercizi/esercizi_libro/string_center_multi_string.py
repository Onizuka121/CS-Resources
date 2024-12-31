'''
Scrivere una funzione che chieda in input un numero variabile di stringhe 
e le stampi allineate al centro. 
Ad esempio se le stringhe fossero programmazione, Python e funzione 
il programma stamperebbe :

programmazione
    Python
   funzione

'''

def center_strings(*strings):
    longest = strings[0]
    for string in strings:
        if len(string) > len(longest):
            longest = string
    
    l = len(longest)
    for string in strings:
            print("\t"+"-"*((l-len(string))//2)+string)    

center_strings("funzione","java","c","hotel","linux","debian","windows blati","pollo","blati","tesla","batmanvssuperman","python","calamaro","programmazione")





