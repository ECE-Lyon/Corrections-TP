# Cours 6 
## Trace mémoire de l'exemple 1 du cours

| Adresse    | Valeur    | Variable   | Bloc / fonction | Type    | Libération     |
|------------|-----------|------------|-----------------|---------|----------------|
| 0xabcd     | ~1~ 2     | a          | main            | int     | 2ème           |
| 0xbcde     | ~1~ 7     | b          | main            | int     | 2ème           |
| 0xcdef     | 1         | inc        | main            | int     | 2ème           |
| 0xdef0     | 0xabcd    | pA         | increment2Val   | int*    | 1ère           |
| 0xef01     | 0xbcde    | pB         | increment2Val   | int*    | 1ère           |
| 0xf012     | ~1~ 6     | increment  | increment2Val   | int     | 1ère           |

#### Affichage :

> [main] a = 2, b = 7, inc = 1

---

## Trace mémoire de l'exemple 2 du cours

| Adresse    | Valeur    | Variable   | Bloc / fonction        | Type    | Libération        |
|------------|-----------|------------|------------------------|---------|-------------------|
| 0xabcd     | ~5~ ~7~ 9 | n          | main                   | int     | 4ème              |
| 0xbcde     | 5         | n          | incrementParValeur     | int     | 1ère (retourne 7) |
| 0xcdef     | 2         | i          | incrementParValeur     | int     | 1ère              |
| 0xdef0     | 5         | n          | incrementParValeur     | int     | 2ème (retourne 7) |
| 0xf012     | 2         | i          | incrementParValeur     | int     | 2ème              |
| 0x0123     | 0xabcd    | pN         | incrementParAdresse    | int*    | 3ème              |
| 0x1234     | 2         | i          | incrementParAdresse    | int     | 3ème              |

#### Affichage :

> [main] Adresse : 0xabcd, valeur : 5
> [incrementParValeur] Adresse : 0xbcde, valeur : 5 (on travaille sur une copie)<br>
> [main] Valeur après incrementParValeur (1/2) : 5 (la valeur n'a pas été modifiée)<br>
> [incrementParValeur] Adresse : 0xdef0, valeur : 5 (on travaille sur une copie)<br>
> [main] Valeur après incrementParValeur (2/2) : 7 (la valeur retournée a été affectée à n)<br>
> [incrementParAdresse] Adresse : 0xabcd, valeur : 7 (on travaille sur le même espace mémoire)<br>
> [main] Valeur après incrementParAdresse : 9 (la valeur est directement modifiée en mémoire)

---

## Explication des opérateurs `*` et `&`

Soient `a` et `p` :
```C
int a;
int* p = &a;
```

Nous avons vu que les symboles `*` et `&` s'annulent, puisqu'ils ont l'effet inverse.
Donc `*&a` est équivalent à `a` et à `*&*&*&*&*&*&a`.

Donc si et seulement si `p == &a` alors
```C
 p  ==  &a
*p  == *&a
*p  ==   a
```

---

## Déclaration multiple de pointeurs

On peut déclarer plusieurs entiers ainsi :

```C
int a, b, c, d;
```

Pour déclarer plusieurs pointeurs de la même façon, attention à répéter l'`*` :
```C
int* p1, *p2, *p3, *p4;
```

En effet, dans :
```C
int *p1, a, *p2, b, c;
```
`a`, `b` et `c` sont des entiers et `p1` et `p2` sont des pointeurs sur entier.  

---

## Multiplier avec des pointeurs

`*` est l'opérateur de la multiplication, sauf s'il est devant un pointeur !

```C
int a = 3;
int* p = &a;
printf("%d", 2 * *p); // 6
printf("%d", 2**p);   // 6
printf("%d", *p*a);   // 9
printf("%d", *p*5);   // 15
```

---

## Les pointeurs et `const`

- `int*` : pointeur sur un entier
- `int const *` : pointeur sur un entier constant (pointeur sur un `int const`) \*
- `const int *` : pointeur sur un entier constant (pointeur sur un `const int`) \*
- `int * const` : pointeur constant sur un entier
- `int const * const` : pointeur constant sur un entier constant

**NB :** Le premier `const` peut être écrit indifféremment des deux côtés du type :
- `const int *` == `int const *`
- `const int * const` == `int const * const`

##### Pour aller plus loin :

- `int **` : pointeur sur un pointeur sur un entier
- `int ** const` : pointeur constant sur un pointeur sur un entier
- `int * const *` : pointeur sur un pointeur constant sur un entier
- `int const **` : pointeur sur un pointeur sur un entier constant
- `int * const * const` : pointeur constant sur un pointeur constant sur un entier

<sup>*Source : https://stackoverflow.com/questions/1143262/what-is-the-difference-between-const-int-const-int-const-and-int-const*</sup>

##### A quoi ça sert d'utiliser `const` avec des pointeurs ?

Parfois, nous manipulons de lourdes structures. Par exemple, si nous avons une structure `Jeu` qui contient toutes les données d'un jeu (plusieurs centaines d'octets), la passer en paramètres par valeur est lourd car cela revient à copier/coller tous ces octets pour la fonction appelée :
```C
void afficherJeu(Jeu j); // La structure (= beaucoup d'octets) va être copiée lors de l'appel
```

Nous préférons dans ce cas passer par adresse pour ne copier qu'une adresse :
```C
void afficherJeu(Jeu* j); // L'adresse de la structure va être copiée lors de l'appel (beaucoup moins lourd)
```

Cependant, cela revient à transmettre à la fonction l'original, qu'elle pourra modifier à sa guide sans que l'on ne puisse faire quoi que ce soit... C'est là qu'intervient `const` :
```C
void afficherJeu(const Jeu* j); // Nous ne copions que l'adresse (léger), il s'agit donc d'un passage par adresse, mais la fonction ne pourra pas modifier notre structure Jeu !
```
--- 

## Exercice d'entraînement

Donnez les affichages produits par chaque `printf` :

```C
int a = 5; // valeur : 5️⃣, adresse de a : 0x1234
int b = 6; // valeur : 6️⃣, adresse de b : 0x5678
int* pA = &a; // valeur : 0x1234, adresse de pA : 0xabcd
printf("%d", a);
printf("%p", &a);
printf("%p", pA);
printf("%p", &pA);
printf("%d", *pA);
*pA = 7;
printf("%d", a);
printf("%d", *pA);
pA = &b;
printf("%p", pA);
printf("%p", &pA);
printf("%d", *pA);
int* pB = pA; // adresse de pB : 0x6420
printf("%p", pB);
printf("%p", &pB);
printf("%d", *pB);
*pB = 20;
printf("%d", *pA);
printf("%d", b);
int** pp = &pB; // adresse de pp : 0xfabe
printf("%p", &pp);
printf("%p", pp);
printf("%p", *pp);
printf("%d", **pp);
printf("%d", 2***pp);
*pp = &a;
**pp = 10;
printf("%d", a);
```
