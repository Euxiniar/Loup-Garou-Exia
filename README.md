# Loup-Garou Exia.Cesi Orléans
Création d'un jeu du loup-garou en année A1 à Exia Cesi

## Prerequis

Il vous faudra installer 
- [CMake](https://cmake.org/download/ "link to download CMake") (Ne pas oublier la variable d'environnement à l'installation)
- [Git](https://git-scm.com/downloads "link to download Git")
- Un IDE

## Participer au projet

- Tout d'abord, créez votre propre fork. Votre nom de projet doit être
```
[USER]/Loup-Garou-Exia
```

- Ensuite vous devez cloner votre branche à l'endroit choisi.
Ouvrez la console et tapez
```
git clone --recursive https://github.com/Euxiniar/Loup-Garou-Exia.git
```

- Pour pouvoir tenir à jour votre répertoire, tapez cette commande
```
git remote add upstream https://github.com/Euxiniar/Loup-Garou-Exia.git
```

- Pour mettre à jour votre répertoire, vous devrez donc ouvrir la console et taper
```
git pull upstream master
```

- Pour finir, créez un dossier build. Une fois dedans, ouvrez la console et tapez la commande
```
cmake -G "Visual Studio 15 Win64"..
```
Si vous êtes sur Visual Studio 2017,
```
cmake -G "Visual Studio 14 Win64"..
```
Si vous êtes sur Visual Studio 2015, ou
```
cmake -G "CodeBlocks - MinGW Makefiles"..
```
Si vous êtes sur CodeBlocks avec le compilateur MinGW.  
**VOUS DEVREZ RETAPER CETTE COMMANDE A CHAQUE AJOUT DE FICHIER**

### En cas d'erreur
- Avec Visual Studio
Ouvrez Visual Studio installer. Cliquez sur "modifier". Installez le windows 10 SDK (10.0.15063.0) for desktop C++.

- Avec Code::Blocks
Allez dans le dossier [répertoire codeblock]\MinGW\bin, et copier tous les .dll. Collez les dans [répertoire codeblock]\Mingw32\bin

## Pour mettre à jour votre répertoire
**Si vous êtes sous code::blocks**
- Pour ajouter des fichiers vous devrez taper 
```
git add src/*.NomDeLExtension
```

- Pour sauvegarder vos modifications tapez d'abord
```
git add src/*
```
puis
```
git commit -m "Titre qui explique ce qui a changé"
```

- Finalement, pour envoyer vos modifications sur internet, tapez
```
git push
```

**Si vous utilisez Visual Studio**
- Demandez de l'aide à Euxiniar. C'est beaucoup plus simple que sur Code::Blocks rassurez vous ^^

##Pour partager vos modification
-Allez sur votre répertoire gitHub, et cliquer sur le bouton 
```
pull request

```
- Donnez un titre approprié à votre répertoire, et une description si necessaire, puis validez.

- Vous n'avez plus qu'à attendre qu'Euxiniar valide ! Si vos modifications ne sont pas *fusionnables*, des informations vous seront données pour améliorer votre répertoire.

## Contributeurs
* **Euxiniar**

* **Snargol**

* **Ragnay**

* **Trapadore**

* **Anthime-Didi**

* **Hidehal**
