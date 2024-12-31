'''
Si scriva una funzione che riceve in input una sequenza
di interi positivi e restituisca True se e solo se questi
rappresentano una permutazione degli interi 1,2,...,n
dove n è il numero di interi nella sequenza.

'''

def is_perm(*numbers):
    total = (len(numbers)*(len(numbers)+1))/2
    for p in numbers:
        total -= p

    return total == 0


print(is_perm(1, 2, 3, 0))
