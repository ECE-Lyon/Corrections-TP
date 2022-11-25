# Cours 6 
## Exemple 1 - Trace mémoire

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

## Exemple 2 - Trace mémoire

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

## Explication alternative

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

## Déclarations multiples

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
