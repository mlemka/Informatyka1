n=int(input('Podaj nr wyrazu ciagu, ktorego wartosc chcesz policzyc:'))

def zbior(n):
    if(n==1):
        return 1
    elif(n==2):
        return 0.5
    return zbior(n-1)*zbior(n-2)

print(n,'wyraz ciagu ma wartosc:', zbior(n))