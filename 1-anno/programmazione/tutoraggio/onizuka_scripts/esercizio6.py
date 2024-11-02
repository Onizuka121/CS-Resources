#! /usr/bin/python3
'''
scrivere una funzione in python che data una lista di numeri restitusci il secondo numero 
piu grande allinterno della lista

'''

def get_second_max(list):
    if len(list) == 0:
        return 'non ci sono numeri in questa lista'
    first_max = 0
    second_max = 0
    i = 0
    list.append(-1)
    while i < len(list):
        if i+1 < len(list):
            if list[i] > list[i+1]:
                if list[i] > first_max:
                    first_max = list[i]
                if list[i+1] > second_max:
                    second_max = list[i+1]
                elif list[i] > second_max and list[i] != first_max:
                    second_max = list[i]
            else:
                if list[i+1] > first_max:
                    second_max = first_max
                    first_max = list[i+1] 
                              
        i += 1 
        
    return [first_max,second_max]


print(get_second_max([20,90,100,20,20,30,40,50,60,70,70,200,210,220,500,400,90,100,300,20,10,0,9,20,100]))




