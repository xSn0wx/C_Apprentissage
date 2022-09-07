# C_Apprentissage

Install MinGW -> https://www.youtube.com/watch?v=y-i96kqT53A  |  https://winlibs.com/

---
                 
### Erreur :
undefined reference to `WinMain' collect2.exe: error: ld returned 1 exit status
-> Attention ne pas changer la fonction et sauvegarder

---

⚠ Attention au type **char**, dont son usage ne garantit pas une occupation mémoire de 1 octet !

### Signés

|Syntaxe|Occupation mémoire|Fourchette de valeurs|
|:--:|:--:|:--:|
|char|?|?|
|signed char|1 octet|-128 à 127|
|short|2 octets|-32 768 à 32 767|
|int|2 octets / 4 octets|-32 768 / -2 147 483 648 à 32 767 / 2 147 483 647|
|long|4 octets|-2 147 483 648 à 2 147 483 647|
|long long|8 octets|-9 223 372 036 854 775 808 à 9 223 372 036 854 775 807|
|float|4 octets|-3,4.10<sup>38</sup> à 3,4.10<sup>38</sup>|
|double|8 octets|-1,7.10<sup>308</sup> à 1,7.10<sup>308</sup>|
|long double|10 octets|-1,1.10<sup>4932</sup> à 1,1.10<sup>4932</sup>|

### Non signés

|Syntaxe|Occupation mémoire|Fourchette de valeurs|
|:--:|:--:|:--:|
|unsigned char|1 octet|0 à 255|
|unsigned short|2 octets|0 à 65 535|
|unsigned int|2 octets / 4 octets|0 à 65 635 / 4 294 967 295|
|unsigned long|4 octets|0 à 4 294 967 295|
|unsigned long long|8 octets|0 à 18 446 744 073 709 551 615|
