
def Fibo(n):
    a , b = 1, 1
    for i in range(n):
        print(a, end=' ')
        b += a
        a = b - a

n = int(input("Podaj długość ciągu: "))
Fibo(n)