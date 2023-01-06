https://www.youtube.com/watch?v=dQw4w9WgXcQ

Voici comment utiliser Git de manière plus complète :

Tout d'abord, il faut installer Git sur votre ordinateur. Vous pouvez télécharger l'installateur depuis le site officiel de Git : https://git-scm.com/downloads

Une fois Git installé, ouvrez votre terminal et naviguez jusqu'au répertoire où se trouvent les fichiers que vous voulez versionner.

Initialisez votre dépôt Git en utilisant la commande git init. Cela créera un sous-répertoire nommé ".git" qui contiendra toutes les informations sur votre dépôt.

Avant de pouvoir enregistrer vos modifications dans Git, vous devez d'abord les ajouter à l'index en utilisant la commande git add. Par exemple, pour ajouter tous les fichiers du répertoire courant à l'index, vous pouvez utiliser git add .

Une fois que vous avez ajouté les fichiers à l'index, vous pouvez enregistrer vos modifications en créant un commit en utilisant la commande git commit -m "message de commit". Le message de commit doit décrire les modifications apportées et expliquer pourquoi elles ont été faites.

Si vous travaillez avec un dépôt distant, comme sur GitHub, vous pouvez envoyer vos commits en utilisant la commande git push. Si vous êtes en train de travailler sur une autre machine et que vous voulez récupérer les dernières modifications, vous pouvez utiliser la commande git pull.

Voici quelques autres commandes utiles :

git status : affiche l'état du dépôt, c'est-à-dire les fichiers qui ont été modifiés, ajoutés ou supprimés, et ceux qui sont suivis par Git.
git diff : affiche les différences entre les fichiers modifiés et les versions précédemment enregistrées.
git log : affiche l'historique des commits de votre dépôt.
git branch : permet de gérer les branches de votre dépôt. Une branche est une version alternative de votre code, sur laquelle vous pouvez travailler sans affecter la branche principale (appelée "master"). Vous pouvez créer une nouvelle branche avec git branch nom_de_la_branche, et changer de branche avec git checkout nom_de_la_branche.
git merge : permet de fusionner une branche dans une autre. Par exemple, si vous avez créé une nouvelle branche pour ajouter une fonctionnalité, vous pouvez utiliser la commande git merge pour fusionner cette branche dans la branche principale une fois que vous avez terminé de travailler dessus.

Il y a beaucoup d'autres commandes et fonctionnalités disponibles dans Git, mais celles-ci sont les plus couramment utilisées. Je vous recommande de consulter la documentation de Git pour en savoir plus : https://git-scm.com/doc

Voici quelques bonnes pratiques à suivre lorsque vous travaillez avec Git :

Faites des commits régulièrement et essayer de rendre chaque commit le plus petit et le plus cohérent possible. Cela rendra plus facile de comprendre et de suivre les modifications apportées au code.
Ecrivez des messages de commit clairs et précis, qui expliquent les modifications apportées et pourquoi elles ont été faites.
Travaillez dans une branche séparée pour chaque nouvelle fonctionnalité ou modification importante. Cela rendra plus facile de gérer les différentes parties de votre code et de travailler en collaboration avec d'autres personnes.
Faites des "reviews" de code avant de fusionner vos modifications dans la branche principale. Cela peut être fait en utilisant des outils de review de code en ligne, comme GitHub Pull Requests.
Je vous recommande également de vous familiariser avec les concepts de base de la gestion de version de code, tels que les "branches", "merges" et "rebases". Ces concepts vous permettront de mieux comprendre comment Git fonctionne et comment l'utiliser efficacement dans votre workflow de développement.

Voici quelques autres commandes utiles de Git :

git stash : permet de mettre de côté temporairement les modifications non enregistrées dans votre dépôt, sans avoir à créer un commit. Cela peut être utile si vous voulez changer de branche ou faire un pull de la dernière version du dépôt distant, mais que vous n'êtes pas prêt à enregistrer vos modifications actuelles. Vous pouvez appliquer les modifications mises de côté plus tard avec la commande git stash apply.
git tag : permet de créer des "tags" dans votre dépôt, qui sont des marqueurs qui peuvent être utilisés pour marquer des versions importantes de votre code. Les tags sont souvent utilisés pour marquer des versions de production ou pour marquer un point de référence dans l'historique de votre dépôt.
git reset : permet de annuler des commits et de revenir à une version précédente de votre code. Cela peut être utile si vous avez fait une erreur dans un commit et que vous voulez la corriger. Soyez cependant vigilant lorsque vous utilisez cette commande, car les commits annulés sont définitivement perdus.
En plus de ces commandes de base, il existe également de nombreux outils en ligne et des plugins pour différents éditeurs de code qui facilitent l'utilisation de Git. Ces outils peuvent vous aider à visualiser et à gérer vos dépôts de manière plus intuitive et interactive.

En résumé, Git est un outil puissant et très utile pour la gestion de version de code. En suivant les bonnes pratiques et en prenant le temps de comprendre comment fonctionne Git, vous serez en mesure de l'utiliser efficacement dans votre workflow de développement et de travailler en collaboration avec d'autres personnes sur des projets de code.

---

### Git clone

"git clone" est l'un des principaux commandes Git utilisé pour télécharger un dépôt Git existant sur votre ordinateur local. Lorsque vous utilisez "git clone", Git crée une copie complète du dépôt, y compris tous les fichiers source, l'historique de commit et les marques de branche. Cela vous permet de travailler sur le dépôt localement et de synchroniser vos changements avec le dépôt en ligne lorsque vous êtes prêt à partager vos modifications.

Voici comment utiliser la commande "git clone":

Ouvrez une invite de commande ou un terminal dans le répertoire où vous souhaitez cloner le dépôt.

Tapez "git clone" suivi de l'URL du dépôt que vous souhaitez cloner. Par exemple:

Copy code
git clone https://github.com/username/myrepo.git
Appuyez sur Entrée. Git téléchargera le dépôt et créera un nouveau répertoire local avec le nom du dépôt.
Vous pouvez également spécifier un nom de répertoire différent en ajoutant un espace et le nom de répertoire souhaité après l'URL du dépôt. Par exemple:

Copy code
git clone https://github.com/username/myrepo.git mon_dépôt
Cela créera un répertoire local appelé "mon_dépôt" au lieu du nom du dépôt par défaut.

### Git init

"git init" est l'un des principaux commandes Git utilisé pour initialiser un nouveau dépôt Git dans un répertoire existant. Lorsque vous utilisez "git init", Git crée un nouveau sous-répertoire appelé ".git" dans le répertoire courant, qui contient tous les fichiers nécessaires pour suivre les modifications apportées aux fichiers dans ce répertoire.

Voici comment utiliser la commande "git init":

Ouvrez une invite de commande ou un terminal dans le répertoire où vous souhaitez initialiser le dépôt.

Tapez "git init" et appuyez sur Entrée. Git créera le sous-répertoire ".git" et initialisera le dépôt.

Vous pouvez également utiliser l'option "-q" pour réduire la quantité de sortie générée par la commande:

Copy code
git init -q
Une fois que le dépôt a été initialisé, vous pouvez commencer à ajouter et à commit des fichiers dans le dépôt en utilisant les commandes Git appropriées.

### Git add

"git add" est l'une des principales commandes Git utilisées pour ajouter des fichiers à l'index de votre dépôt Git. L'index est une zone de stockage temporaire qui contient une liste des fichiers qui seront inclus dans le prochain commit. En ajoutant des fichiers à l'index, vous les préparez pour le commit et les rendez visibles aux autres utilisateurs du dépôt.

Voici comment utiliser la commande "git add":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git.

Pour ajouter un fichier unique à l'index, tapez "git add" suivi du nom du fichier. Par exemple:

Copy code
git add monfichier.txt
Pour ajouter tous les fichiers modifiés au dépôt, tapez "git add -u".

Pour ajouter tous les fichiers modifiés et tous les nouveaux fichiers au dépôt, tapez "git add -A".

Appuyez sur Entrée. Git ajoutera les fichiers à l'index et les préparera pour le commit.

Vous pouvez également utiliser l'option "-p" pour ajouter des parties spécifiques d'un fichier plutôt que l'ensemble du fichier. Par exemple:

Copy code
git add -p monfichier.txt
Cela ouvrira un éditeur de texte qui vous permettra de choisir les parties du fichier que vous souhaitez ajouter à l'index.

### Git commit

"git commit" est l'une des principales commandes Git utilisées pour enregistrer les changements dans l'historique du dépôt Git. Lorsque vous utilisez "git commit", vous enregistrez une "image" de tous les fichiers dans votre répertoire de travail et de l'index dans l'historique du dépôt. Cela vous permet de revenir à n'importe quel commit précédent et de voir comment les fichiers étaient à ce moment-là.

Voici comment utiliser la commande "git commit":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git.

Assurez-vous que les fichiers que vous souhaitez inclure dans le commit sont ajoutés à l'index en utilisant la commande "git add".

Tapez "git commit" et appuyez sur Entrée. Git ouvrira un éditeur de texte dans lequel vous pouvez entrer un message de commit décrivant les changements apportés aux fichiers.

Entrez votre message de commit et enregistrez le fichier.

Fermez l'éditeur de texte. Git enregistrera le commit et affichera un message de confirmation.

Vous pouvez également utiliser l'option "-m" pour spécifier le message de commit en ligne de commande au lieu d'utiliser un éditeur de texte:

Copy code
git commit -m "Mon message de commit"
Il est important de rédiger des messages de commit clairs et descriptifs afin de pouvoir comprendre facilement les changements apportés aux fichiers à différents moments de l'historique du dépôt.

### Git push

Oui, c'est exact! "git push" est l'une des principales commandes Git utilisées pour envoyer vos commits vers un dépôt distant, comme GitHub. Lorsque vous utilisez "git push", vous envoiez les commits de votre dépôt local vers le dépôt distant, en mettant à jour le dépôt distant avec les dernières modifications que vous avez effectuées.

Voici comment utiliser la commande "git push":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git local.

Assurez-vous que vous êtes sur la branche que vous souhaitez pousser en utilisant la commande "git checkout".

Tapez "git push" suivi du nom de la branche distante et du nom du dépôt distant. Par exemple:

Copy code
git push origin ma_branche
Cela enverra les commits de la branche "ma_branche" de votre dépôt local vers la branche "ma_branche" du dépôt distant nommé "origin".

Entrez votre nom d'utilisateur et votre mot de passe du dépôt distant si vous y êtes invité.

Appuyez sur Entrée. Git enverra les commits au dépôt distant et affichera un message de confirmation.

Vous pouvez également utiliser l'option "-u" pour définir la branche distante comme la branche par défaut pour la branche en cours. Par exemple:

Copy code
git push -u origin ma_branche
Cela signifie que vous n'aurez pas à spécifier le nom de la branche distante chaque fois que vous utiliserez "git push" pour cette branche. Vous pourrez simplement utiliser "git push" sans arguments.

### Git pull

"git pull" est l'une des principales commandes Git utilisées pour récupérer les derniers changements d'un dépôt distant et les fusionner dans votre dépôt local. Lorsque vous utilisez "git pull", Git récupère les commits du dépôt distant et les fusionne automatiquement dans votre branche en cours. Cela vous permet de synchroniser votre dépôt local avec le dépôt distant et de travailler avec les dernières versions des fichiers.

Voici comment utiliser la commande "git pull":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git local.

Assurez-vous que vous êtes sur la branche à jour que vous souhaitez fusionner en utilisant la commande "git checkout".

Tapez "git pull" suivi du nom de la branche distante et du nom du dépôt distant. Par exemple:

Copy code
git pull origin ma_branche
Cela récupérera les derniers commits de la branche "ma_branche" du dépôt distant nommé "origin" et les fusionnera dans la branche en cours de votre dépôt local.

Appuyez sur Entrée. Git récupérera les commits du dépôt distant et les fusionnera dans votre dépôt local. Si des conflits de fusion surgissent, vous devrez les résoudre avant de pouvoir finaliser la fusion.
Vous pouvez également utiliser l'option "-r" pour forcer Git à effectuer une fusion à distance, ce qui signifie que Git tentera de fusionner les commits sans récupérer les fichiers du dépôt distant. Cela peut être utile lorsque vous travaillez avec un dépôt distant qui est principalement utilisé comme un emplacement de stockage central et non comme un lieu de travail collaboratif.

### Git branch

"git branch" est l'une des principales commandes Git utilisées pour gérer les branches de votre dépôt Git. Lorsque vous utilisez "git branch", vous pouvez créer de nouvelles branches, supprimer des branches existantes, renommer des branches ou afficher la liste des branches du dépôt.

Voici comment utiliser la commande "git branch":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git.

Pour créer une nouvelle branche, tapez "git branch" suivi du nom de la branche. Par exemple:

Copy code
git branch ma_branche
Pour supprimer une branche, tapez "git branch -d" suivi du nom de la branche. Par exemple:
Copy code
git branch -d ma_branche
Pour renommer une branche, tapez "git branch -m" suivi du nom de la branche actuelle et du nouveau nom de la branche. Par exemple:
Copy code
git branch -m ma_branche nouveau_nom
Pour afficher la liste des branches du dépôt, tapez "git branch" sans arguments.

Appuyez sur Entrée. Git exécutera la commande de gestion de branche sélectionnée.

Il est important de gérer correctement les branches dans votre dépôt Git afin de pouvoir travailler de manière organisée et de pouvoir facilement partager et fusionner vos modifications avec d'autres développeurs.

### Git merge

"git merge" est l'une des principales commandes Git utilisées pour fusionner les branches de votre dépôt Git. Lorsque vous utilisez "git merge", vous pouvez fusionner les modifications apportées à une branche dans une autre branche. Cela vous permet de combiner les travaux de différentes branches dans une seule branche de travail.

Voici comment utiliser la commande "git merge":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git.

Assurez-vous que vous êtes sur la branche dans laquelle vous souhaitez fusionner les modifications en utilisant la commande "git checkout".

Tapez "git merge" suivi du nom de la branche à fusionner. Par exemple:

Copy code
git merge ma_branche
Appuyez sur Entrée. Git fusionnera les modifications de la branche "ma_branche" dans la branche en cours et affichera un message de confirmation.
Si des conflits de fusion surgissent, vous devrez les résoudre avant de pouvoir finaliser la fusion. Git affichera des instructions sur la façon de résoudre ces conflits dans la sortie de la commande.

Vous pouvez également utiliser l'option "-squash" pour fusionner les commits de la branche de manière à ce qu'ils apparaissent comme un seul commit dans l'historique de la branche en cours. Cela peut être utile lorsque vous voulez simplifier l'historique du dépôt.

Copy code
git merge --squash ma_branche

### Git status

Oui, c'est exact! "git status" est l'une des principales commandes Git utilisées pour afficher l'état actuel de votre dépôt Git. Lorsque vous utilisez "git status", Git affiche une liste des fichiers modifiés ou ajoutés qui ne font pas encore partie de l'historique du dépôt. Cela vous permet de voir quels fichiers ont été modifiés et sont prêts à être commités, ainsi que les fichiers qui ont été ajoutés à l'index mais qui n'ont pas encore été commités.

Voici comment utiliser la commande "git status":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git.

Tapez "git status" et appuyez sur Entrée.

Git affichera l'état actuel de votre dépôt, y compris les fichiers modifiés et ajoutés à l'index, ainsi que la branche en cours.

Voici un exemple de sortie de "git status":

Copy code
En cours de fusion : 36d4245... Mon message de commit
Allons dans 'mon_projet'

Vous êtes sur la branche 'ma_branche'
Les commits suivants ne sont pas encore fusionnés

### Git Log

"git log" est l'une des principales commandes Git utilisées pour afficher l'historique des commits de votre dépôt Git. Lorsque vous utilisez "git log", Git affiche une liste de tous les commits de votre dépôt, avec leur identifiant de commit, l'auteur du commit et le message de commit. Cela vous permet de voir les modifications qui ont été apportées au dépôt au fil du temps et de comprendre comment l'historique du dépôt s'est développé.

Voici comment utiliser la commande "git log":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git.

Tapez "git log" et appuyez sur Entrée.

Git affichera l'historique des commits de votre dépôt, avec leur identifiant de commit, l'auteur du commit et le message de commit.
