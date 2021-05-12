from scanf import scanf

n=input("n= ")
r= int(n)*8
print(r)

r=int(n)/4
print(r)

r=n*10
print(r)

b= input("Introduceti b:")
if int(b) & 2 == 0:
    print("Numar par")
else:
    print("Numar impar")

bit= bool(n)
print("bitul de pe pozitia: " and n and "este:" and bit)


x: str = input("nr pentru x: ")
y: str = input("nr pentru y: ")


x = x + y
y = x + y
x = x + y

print("sunt: " and x and "si " and y)


x = x ^ y
y = x ^ y
x = x ^ y

print("sunt: " + x + "si " + y)