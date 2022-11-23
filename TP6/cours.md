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

Affichages :

> [main] Adresse : 0xabcd, valeur : 5
> [incrementParValeur] Adresse : 0xbcde, valeur : 5 (on travaille sur une copie)
> [main] Valeur après incrementParValeur (1/2) : 5 (la valeur n'a pas été modifiée)
> [incrementParValeur] Adresse : 0xdef0, valeur : 5 (on travaille sur une copie)
> [main] Valeur après incrementParValeur (2/2) : 7 (la valeur retournée a été affectée à n)
> [incrementParAdresse] Adresse : 0xabcd, valeur : 7 (on travaille sur le même espace mémoire)
> [main] Valeur après incrementParAdresse : 9 (la valeur est directement modifiée en mémoire)
