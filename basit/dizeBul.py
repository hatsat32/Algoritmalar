#!/usr/bin/python

"""
Bu program bir string içinde başka bir string in kaç defa geçtiğini bulur.
"ABCDCDC" stringinde "CDC" stringi 2 defa geçer.
"""

__autor__ = "Süleyman ERGEN"
__copyright__ = "Copyright 2018, Süleyman ERGEN"
__license__ = "GPLv3"


def dize_sayisi_bul(s, sub):
    sayi = 0
    for i in range(len(s)-len(sub)+1): # out of index hatası vermemesi için
        for j in range(len(sub)):  # dizenin uzunluğu kadar kontrol yap
            if(s[i+j] != sub[j]):
                break # herhangi eşleşmeyen eleman bulunmazsa else bloguna girecek
        else:
            sayi = sayi+1
    return sayi


if __name__ == '__main__':
    string = input().strip()  # dize oku
    sub_string = input().strip()  # sub dize oku
    
    count = dize_sayisi_bul(string, sub_string) 
    print(count)
