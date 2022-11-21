# ProjetAvocat

Les données de stokages seront stokées dans deux fichiers:
Collaborateurs.txt et Dossiers.txt

Pour acceder ces informations on utilisera rspectivement les structures Dossier et Collaborateur.

TODO:
-void chargeFile(char* fileName);
-void ReadFile(char* fileName);
-void AddFolder(char* folderName);
-void AddCollaborator(char* folderName)
-void EraseCollaborator(char* CollaboratorName)
- Annuler un dossier : C’est-à-dire modifier son statut et mettre le fichier texte à jour
- Clôturer un dossier : C’est-à-dire définir la date de fin, et mettre à jour son statut.
- Modifier un dossier : Tous les champs doivent être modifiables
- Modifier un collaborateur : Tous les champs doivent être modifiables
- Afficher la liste des dossiers suivi pour un collaborateur donné (avocat ou clerc).
- Générer et afficher des statistiques du cabinet : Nombre de dossiers en cours, nombre
de collaborateurs, nombre moyen de dossiers suivis par un collaborateur, nombre
maximum de dossiers suivis par un collaborateur, noms des 3 plus vieux dossiers.
- Créer un fichier de sauvegarde (nom du fichier à créer est saisi par l’utilisateur)
