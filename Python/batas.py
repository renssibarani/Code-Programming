batas_bawah = 0
batas_atas = 10

for angka in range(batas_bawah, batas_atas):
    if angka % 2 != 0:
        print("{} adalah bilangan ganjil".format(angka))
    else:
        print("{} adalah bilangan genap".format(angka))