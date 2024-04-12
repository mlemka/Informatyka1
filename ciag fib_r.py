
def ciag(n):
    if n <= 1:
        return 1
    else:
        for i in range(n):
            return ciag(n-1) + ciag(n-2)

n = int(input("Ile wyrazow ciagu wypisac: "))

print(ciag(i))

