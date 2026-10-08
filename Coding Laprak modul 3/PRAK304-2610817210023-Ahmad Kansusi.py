n = int(input())

if n == 0:
    print("Nol")
elif n < 10:
    print("Satuan")
elif n >= 11 and n <= 19:
    print("Belasan")
elif n == 10 or n >= 20 and n <= 99:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")