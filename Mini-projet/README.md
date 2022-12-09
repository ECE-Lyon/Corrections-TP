# Mini projet

Implémentez en C un programme complet permettant de gérer des immeubles. Découpez votre programme en plusieurs fichiers/sous-programmes. Votre programme permettra de stocker jusqu’à 100 immeubles.
Chaque immeuble est caractérisé par : une hauteur, une largeur, une profondeur, un nombre d’appartements, le nombre d’étages ainsi que le nombre de sous-sol. Nous supposerons que chaque immeuble porte également une lettre (exemple : bâtiment « A »). Pour chaque donnée, vous choisirez le type le plus réaliste.
En lançant le programme, l’utilisateur pourra choisir combien d’immeuble il souhaite créer (sans dépasser 100), saisir les données de chacun des immeubles au clavier, puis le détail de chaque immeuble sera affiché dans la console.

## Méthodologie

1. Effectuer la **DTI**
    - **Données**
        1. Identifier les données à stocker en mémoire centrale (`int`, `float`, `double`, `char`, *etc.*)
        1. Identifier les regroupements de données (structures, tableaux)
    - **Traitements**
        1. Identifier toutes les fonctionnalités demandées (saisir, afficher, calculer, *etc.*)
        1. Affectuer l'**Analyse Chronologique Descendante** (**ACD**)
            - Pour chaque traitement, le décomposer si possible en plusieurs sous-traitements
    - **Interfaces**
        1. Identifier les différents affichages à produire
2. Implémentation
    - Créer une bibliothèque (`.c`/`.h`) par structure identifiée
    - Créer les structures (`typedef struct`) dans le `.h`
    - Créer les prototypes de chaque (sous-)programme identifié lors de la DTI et l'ACD dans les `.h` en réfléchissant aux éventuelles entrées (paramètres/arguments) et à l'éventuelle sortie (ou passages par adresse)
    - Créer les macros (`#define`) dans les `.h`
    - Vous pouvez en parallèle commencer à implémenter le fichier `main.c`, même sans avoir le code de chaque fonction (supposez qu'elles fonctionnent)
    - Terminer par l'implémentation des fonctions et procédures (dont les prototypes sont dans les `.h`) dans les `.c` correspondants
    
---

## Améliorations

### Fonction `saisirImmeuble` -> Passage par adresse

*Le passage par adresse permet de copier uniquement l'adresse de l'immeuble (de quelques octets), au lieu de copier la structure entière (25 octets)
Or, il permet la modification de l'immeuble, pour éviter cela, nous rajoutons const qui interdira tout modification de l'immeuble*

```C
void saisirImmeuble(Immeuble* immeuble) {
    immeuble->nbEtages = saisirEntier("Combien d'etages ?");
    immeuble->nbSousSol = saisirEntier("Combien de sous-sols ?");
    immeuble->nbAppartements = saisirEntier("Combien d'appartements ?");
    immeuble->largeur = saisirFloat("Largeur ?");
    immeuble->hauteur = saisirFloat("Hauteur ?");
    immeuble->profondeur = saisirFloat("Profondeur ?");
    printf("Lettre de batiment ?\n");
    scanf("%c", &immeuble->lettre);
}
```

**Appel :**

```C
saisirImmeuble(&immeubles[i]);
```

### Fonction `afficherImmeuble` -> Passage par adresse avec const

*Le passage par adresse permet de copier uniquement l'adresse de l'immeuble (de quelques octets), au lieu de copier la structure entière (25 octets)
Or, il permet la modification de l'immeuble, pour éviter cela, nous rajoutons const qui interdira tout modification de l'immeuble*

```C
void afficherImmeuble(const Immeuble* immeuble) {
    printf("Etages : %d\n", immeuble->nbEtages);
    printf("Sous-sols : %d\n", immeuble->nbSousSol);
    printf("Appartements : %d\n", immeuble->nbAppartements);
    printf("Largeur : %.2fm\n", immeuble->largeur);
    printf("Hauteur : %.2fm\n", immeuble->hauteur);
    printf("Profondeur : %.2fm\n", immeuble->profondeur);
    printf("Lettre : %c\n", immeuble->lettre);
}
```

**Appel :**

```C
afficherImmeuble(&immeubles[i]);
```