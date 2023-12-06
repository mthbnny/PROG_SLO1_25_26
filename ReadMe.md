# PROG - Cours de programmation année 2023 - 2024 
## Infos Pratique - Bonne pratique git

1. Créer un compte sur un serveur GIT => pour l'ES nous utiliserons <span sytle="color: #FF0000">Github</span>
	
=> **deux approches possible** <= 
* => vous créez et gérez votre **propre dépôt** (local -> serveur)
	
	A. => sur votre machine (local) -> créez un **répertoire vide** où vous voulez
	```
	// exemple sous windows 
	c:\mesDossierGit\monDepot 
	```
	B. => sur votre serveur Git, créer un dépôt (new repository) 
	
	C. => lié les deux *en ligne de commande* 
		* => ouvrir un **shell** 
		* => placez-vous dans votre répertoire vide créé précédemment :  
	
	D. => tapez les ligne de commande suivante : 	
	```
	git init
	git branch -M votreBranche
	git remote add origin https://github.com/nomUserGit/votreNomDepotGit.git
	```
	
	E. => pour mettre à jour votre dépôt distant -> placez-vous dans votre répertoire de travail local 
	```
	// exemple sous windows - répertoire de travail  
	c:\mesDossierGit\monDepot 
	```
	* => 3 commandes à connaitre 
	
	```
	git add -A 
	git commit -m "votre commentaire" 
	git push 
	```
* => vous voulez utiliser un dépôt distant (serveur) de quelqu'un 
	
	A. => depuis le serveur -> forker le dépôt qui vous intéresse sur votre serveur 
	```
	FORK -> creat fork
	```
	
	B.  => sur votre machine (local) -> créez un **répertoire vide** où vous voulez 
	```
	// exemple sous windows 
	c:\mesDossierGit\monDepot 
	```
	
	C. => associez votre dépot (serveur) -> à votre dépôt local (machine) 
	```
	git clone <adresse serveur> 
	``` 

*=> avec un outil graphqiue* -> sourceTree pour l'ES - GitDescktop - TortoiseGit - etc. 

## Suivi des exercices 
---

| Exercice \ Initial Etudiant | **[ABR](https://github.com/AlanBadertscher)** | **[NBS](https://github.com/NicolasBessson)** | **[ACL](https://github.com/Sweedy3960)** | **[TCT](https://github.com/Tass1l0)** | **[EDO](https://github.com/etideoliveira)** | **[VCO](https://github.com/kediven)** | **[KGR](https://github.com/Kazanaris)** | **[JJE](https://github.com/SwissMaverick)** | **[TMK](https://github.com/ThomasMlynek)** | **[LPI](https://github.com/luisalexanderP)** | **[MSI](https://github.com/MatteoStefanelli)** | **[KSA](https://github.com/Isand159)** | **[JBN](https://github.com/blitshteynjacobES)** |
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
| Ex1 | OK | OK| OK | OK | OK | OK | OK | OK | OK | OK | OK | OK | OK | 
| Ex2 | NOK | NOK | push -> non validé | NOK | push -> non validé | NOK | NOK | NOK | push -> non validé | NOK | NOK | push -> non validé | NOK | 
| Ex3 | NOK |  issue [#6](https://github.com/PBYetml/PROG_SLO1_23_24/issues/6) / no fixed | DONE / Uncontrolled | NOK | NOK | DONE / Uncontrolled | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex4 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  
| Ex5 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex6 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex7 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex8 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex9 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex10 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex11 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex12 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex13 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex14 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex15 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex16 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex17 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex18 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex19 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex20 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex21 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex22 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex23 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex24 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 
| Ex25 | NOK |  NOK | NOK | NOK | NOK | NOK | NOK |  NOK | NOK | NOK | NOK | NOK | NOK | 

## Exercice 2
### Groupe
* Vitor | Tassilo | Luis 
* Thomas | Etienne | Karol | Aymeric => code "pushé" mais solution non validée sur le git 
* Alan | Nicolas | Kirian  
* Matteo | Jaccob | Jérémie   

### Suivi projet
=> Partie A => réaliser un flow chart / pseudo code / structogramme : jackson ou NSI => Etat fini !!!

=> Partie B => réaliser code selon diagramme reçu => voir état d'avancement : voir [#3](https://github.com/PBYetml/PROG_SLO1_23_24/issues/3)

## Exercice 3
### Suivi projet
=> codage "individuel" 

=> etat d'avancement => voir [#4](https://github.com/PBYetml/PROG_SLO1_23_24/issues/4)

## Exercice 4
### Suivi projet
=> codage "individuel" 

=> état d'avancement => [#7](https://github.com/PBYetml/PROG_SLO1_23_24/issues/7)

## TESTS & PROJET => SLO1 
### Test1 Novembre 2023
=> voir sources étudiants concernant certaines questions : [Réponses Etudiants SLO Test1](https://github.com/PBYetml/PROG_SLO1_TEST1_23_24)

=> voir [discussion](https://github.com/PBYetml/PROG_SLO1_23_24/discussions/11) - taille d'un caractère : 
![Resultat Code Demo ](/CodeDemo/CodeDemoEtudiants/ResultatSolution.PNG)

