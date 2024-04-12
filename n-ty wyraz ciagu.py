n=int(input('Podaj nr wyrazu ciagu, ktorego wartosc chcesz policzyc:')) #Użytkownik podaje numer ciągu, czyli n

def zbior(n):   #tworzymy funkcję
    if(n==1):   #jeżeli n jest rowne jeden to zwroc 1 bo to pierwsza liczba ciągu
        return 1
    if(n==2): #jeżeli n jest rowne jeden to zwroc 0.5 bo to druga liczba ciągu
        return 0.5
    return -zbior(n-1)*zbior(n-2) #wzór na n-ty wyraz ciągu

print(n,'wyraz ciagu ma wartosc:', zbior(n))