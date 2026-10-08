harga_a = 400000
harga_b = 350000
diskon1 = 13 
diskon2 = 21 

harga_a_diskon = harga_a - (harga_a * diskon1 / 100)
harga_b_diskon = harga_b - (harga_b * diskon2 / 100)

print(f"Harga sepatu A adalah {harga_a}")
print(f"Harga sepatu B adalah {harga_b}")
print(f"Sepatu A mendapat diskon {diskon1}% sehingga harganya menjadi {harga_a_diskon:.0f}")
print(f"Sepatu B mendapat diskon {diskon2}% sehingga harganya menjadi {harga_b_diskon:.0f}")