'''
data una lista di date scritte nel formato 'dd-mm-yyyy'
ordinare

'''


def helper_date(element):
    return element.split('-')[::-1]
    #return (element[0:2],element[3:5], element[6:]) #al contrario pero

a = ['09-12-2024','10-12-2022','18-10-2023']
print(sorted(a,key=helper_date))
    

