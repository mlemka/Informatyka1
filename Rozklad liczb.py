n = int(input("Podaj liczbe: "))
k = 2 # liczby pierwsze

while (n>1):
    while (n%k==0):
        print(k)
        n= n/k
    k= k+1
