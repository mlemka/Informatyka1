n=int(input('Podaj nr wyrazu ciagu, ktorego wartosc chcesz policzyc:'))

def zbior(n):   #tworzymy funkcję
    if(n==1):   #jeżeli n jest rowne jeden to zwroc 1 bo 
        return 1
    elif(n==2): #jeżeli n jest rowne jeden to zwroc 0.5
        return 0.5
    return -zbior(n-1)*zbior(n-2)

print(n,'wyraz ciagu ma wartosc:', zbior(n))