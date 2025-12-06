# H5
H5 – Osoittimet, Referenssit ja Olioargumentit C++

Tämä projekti on harjoitustehtävä, jossa tutkitaan C++-ohjelmoinnin keskeisiä käsitteitä:
osoittimia, referenssejä, olion kopiointia ja olion välittämistä referenssinä.

Projekti koostuu useista luokista (ClassA1, ClassA2, ClassB) sekä main.cpp-tiedostosta, jossa testataan niiden toimintaa.

1. Osoittimet

Projektissa luodaan kokonaislukumuuttuja ja sen osoitin:

Tulostetaan muuttujan arvo ja osoite

Tallennetaan osoite pointteriin

Tulostetaan pointterin osoittama osoite ja arvo

Vaihdetaan pointterin osoittamaan toiseen muuttujaan

Pointterin avulla voidaan vaihtaa myöhemmin, mihin muistipaikkaan se osoittaa.

2. Referenssit

Projektissa luodaan referenssi olemassa olevaan muuttujaan:

Referenssin osoittama arvo ja osoite tulostetaan

Yritetään vaihtaa referenssin kohdetta (ei onnistu)

Havaitaan, että referenssi toimii aliaksena alkuperäiselle muuttujalle

Referenssin osoitetta ei voi vaihtaa alustuksen jälkeen.

3. Olio argumenttina (ClassA1)

ClassA1 ottaa konstruktorissaan vastaan ClassB-olion kopiona:

ClassA1 muokkaa omaa kopiotaan

Alkuperäinen ClassB-olio (objB) ei muutu

Tämä havainnollistaa C++:n copy semantics -periaatetta.

4. Referenssi argumenttina (ClassA2)

ClassA2 saa konstruktorissa viittauksen ClassB-olioon:

Muutokset ClassA2:n kautta vaikuttavat suoraan alkuperäiseen ClassB-olioon

Tämä demonstroi reference semantics -käyttäytymistä

Kun olio välitetään referenssinä, muokkaus vaikuttaa alkuperäiseen olioon.
