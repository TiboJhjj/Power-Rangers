Voici comment utiliser Git de manière plus complète :

Tout d'abord, il faut installer Git sur votre ordinateur. Vous pouvez télécharger l'installateur depuis le site officiel de Git : https://git-scm.com/downloads

Une fois Git installé, ouvrez votre terminal et naviguez jusqu'au répertoire où se trouvent les fichiers que vous voulez versionner.

### `git init`

`git init` est l'un des principaux commandes Git utilisé pour initialiser un nouveau dépôt Git dans un répertoire existant. Lorsque vous utilisez `git init`, Git crée un nouveau sous-répertoire appelé ".git" dans le répertoire courant, qui contient tous les fichiers nécessaires pour suivre les modifications apportées aux fichiers dans ce répertoire.mlqksmdlkqmskdlmqksd

Voici comment utiliser la commande `git init`:

Ouvrez une invite de commande ou un terminal dans le répertoire où vous souhaitez initialiser le dépôt.

Tapez `git init` et appuyez sur Entrée. Git créera le sous-répertoire ".git" et initialisera le dépôt.

Vous pouvez également utiliser l'option "-q" pour réduire la quantité de sortie générée par la commande:

`git init` -q
Une fois que le dépôt a été initialisé, vous pouvez commencer à ajouter et à commit des fichiers dans le dépôt en utilisant les commandes Git appropriées.

### Git clone

`git clone` est l'un des principaux commandes Git utilisé pour télécharger un dépôt Git existant sur votre ordinateur local. Lorsque vous utilisez `git clone`, Git crée une copie complète du dépôt, y compris tous les fichiers source, l'historique de commit et les marques de branche. Cela vous permet de travailler sur le dépôt localement et de synchroniser vos changements avec le dépôt en ligne lorsque vous êtes prêt à partager vos modifications.

Voici comment utiliser la commande `git clone`:

Ouvrez une invite de commande ou un terminal dans le répertoire où vous souhaitez cloner le dépôt.

Tapez `git clone` suivi de l'URL du dépôt que vous souhaitez cloner. Par exemple:

`git clone` https://github.com/username/myrepo.git
Appuyez sur Entrée. Git téléchargera le dépôt et créera un nouveau répertoire local avec le nom du dépôt.
Vous pouvez également spécifier un nom de répertoire différent en ajoutant un espace et le nom de répertoire souhaité après l'URL du dépôt. Par exemple:

`git clone` https://github.com/username/myrepo.git mon_dépôt
Cela créera un répertoire local appelé "mon_dépôt" au lieu du nom du dépôt par défaut.

### `git add`

`git add` est l'une des principales commandes Git utilisées pour ajouter des fichiers à l'index de votre dépôt Git. L'index est une zone de stockage temporaire qui contient une liste des fichiers qui seront inclus dans le prochain commit. En ajoutant des fichiers à l'index, vous les préparez pour le commit et les rendez visibles aux autres utilisateurs du dépôt.

Voici comment utiliser la commande `git add`:

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git.

Pour ajouter un fichier unique à l'index, tapez `git add` suivi du nom du fichier. Par exemple:

`git add` monfichier.txt
Pour ajouter tous les fichiers modifiés au dépôt, tapez "`git add` -u".

Pour ajouter tous les fichiers modifiés et tous les nouveaux fichiers au dépôt, tapez "`git add` -A".

Appuyez sur Entrée. Git ajoutera les fichiers à l'index et les préparera pour le commit.

Vous pouvez également utiliser l'option "-p" pour ajouter des parties spécifiques d'un fichier plutôt que l'ensemble du fichier. Par exemple:

`git add` -p monfichier.txt
Cela ouvrira un éditeur de texte qui vous permettra de choisir les parties du fichier que vous souhaitez ajouter à l'index.

### `git commit`

"`git commit`" est l'une des principales commandes Git utilisées pour enregistrer les changements dans l'historique du dépôt Git. Lorsque vous utilisez "`git commit`", vous enregistrez une "image" de tous les fichiers dans votre répertoire de travail et de l'index dans l'historique du dépôt. Cela vous permet de revenir à n'importe quel commit précédent et de voir comment les fichiers étaient à ce moment-là.

Voici comment utiliser la commande "`git commit`":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git.

Assurez-vous que les fichiers que vous souhaitez inclure dans le commit sont ajoutés à l'index en utilisant la commande `git add`.

Tapez "`git commit`" et appuyez sur Entrée. Git ouvrira un éditeur de texte dans lequel vous pouvez entrer un message de commit décrivant les changements apportés aux fichiers.

Entrez votre message de commit et enregistrez le fichier.

Fermez l'éditeur de texte. Git enregistrera le commit et affichera un message de confirmation.

Vous pouvez également utiliser l'option "-m" pour spécifier le message de commit en ligne de commande au lieu d'utiliser un éditeur de texte:

`git commit` -m "Mon message de commit"
Il est important de rédiger des messages de commit clairs et descriptifs afin de pouvoir comprendre facilement les changements apportés aux fichiers à différents moments de l'historique du dépôt.

### `git push`

"`git push`" est l'une des principales commandes Git utilisées pour envoyer vos commits vers un dépôt distant, comme GitHub. Lorsque vous utilisez "`git push`", vous envoiez les commits de votre dépôt local vers le dépôt distant, en mettant à jour le dépôt distant avec les dernières modifications que vous avez effectuées.

Voici comment utiliser la commande "`git push`":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git local.

Assurez-vous que vous êtes sur la branche que vous souhaitez pousser en utilisant la commande "git checkout".

Tapez "`git push`" suivi du nom de la branche distante et du nom du dépôt distant. Par exemple:

`git push` origin ma_branche
Cela enverra les commits de la branche "ma_branche" de votre dépôt local vers la branche "ma_branche" du dépôt distant nommé "origin".

Entrez votre nom d'utilisateur et votre mot de passe du dépôt distant si vous y êtes invité.

Appuyez sur Entrée. Git enverra les commits au dépôt distant et affichera un message de confirmation.

Vous pouvez également utiliser l'option "-u" pour définir la branche distante comme la branche par défaut pour la branche en cours. Par exemple:

`git push` -u origin ma_branche
Cela signifie que vous n'aurez pas à spécifier le nom de la branche distante chaque fois que vous utiliserez "`git push`" pour cette branche. Vous pourrez simplement utiliser "`git push`" sans arguments.

### `git pull`

"`git pull`" est l'une des principales commandes Git utilisées pour récupérer les derniers changements d'un dépôt distant et les fusionner dans votre dépôt local. Lorsque vous utilisez "`git pull`", Git récupère les commits du dépôt distant et les fusionne automatiquement dans votre branche en cours. Cela vous permet de synchroniser votre dépôt local avec le dépôt distant et de travailler avec les dernières versions des fichiers.

Voici comment utiliser la commande "`git pull`":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git local.

Assurez-vous que vous êtes sur la branche à jour que vous souhaitez fusionner en utilisant la commande "git checkout".

Tapez "`git pull`" suivi du nom de la branche distante et du nom du dépôt distant. Par exemple:

`git pull` origin ma_branche
Cela récupérera les derniers commits de la branche "ma_branche" du dépôt distant nommé "origin" et les fusionnera dans la branche en cours de votre dépôt local.

Appuyez sur Entrée. Git récupérera les commits du dépôt distant et les fusionnera dans votre dépôt local. Si des conflits de fusion surgissent, vous devrez les résoudre avant de pouvoir finaliser la fusion.
Vous pouvez également utiliser l'option "-r" pour forcer Git à effectuer une fusion à distance, ce qui signifie que Git tentera de fusionner les commits sans récupérer les fichiers du dépôt distant. Cela peut être utile lorsque vous travaillez avec un dépôt distant qui est principalement utilisé comme un emplacement de stockage central et non comme un lieu de travail collaboratif.

### `git branch`

"`git branch`" est l'une des principales commandes Git utilisées pour gérer les branches de votre dépôt Git. Lorsque vous utilisez "`git branch`", vous pouvez créer de nouvelles branches, supprimer des branches existantes, renommer des branches ou afficher la liste des branches du dépôt.

Voici comment utiliser la commande "`git branch`":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git.

Pour créer une nouvelle branche, tapez "`git branch`" suivi du nom de la branche. Par exemple:

`git branch` ma_branche
Pour supprimer une branche, tapez "`git branch` -d" suivi du nom de la branche. Par exemple:

`git branch` -d ma_branche
Pour renommer une branche, tapez "`git branch` -m" suivi du nom de la branche actuelle et du nouveau nom de la branche. Par exemple:

`git branch` -m ma_branche nouveau_nom
Pour afficher la liste des branches du dépôt, tapez "`git branch`" sans arguments.

Appuyez sur Entrée. Git exécutera la commande de gestion de branche sélectionnée.

Il est important de gérer correctement les branches dans votre dépôt Git afin de pouvoir travailler de manière organisée et de pouvoir facilement partager et fusionner vos modifications avec d'autres développeurs.

### `git merge`

"`git merge`" est l'une des principales commandes Git utilisées pour fusionner les branches de votre dépôt Git. Lorsque vous utilisez "`git merge`", vous pouvez fusionner les modifications apportées à une branche dans une autre branche. Cela vous permet de combiner les travaux de différentes branches dans une seule branche de travail.

Voici comment utiliser la commande "`git merge`":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git.

Assurez-vous que vous êtes sur la branche dans laquelle vous souhaitez fusionner les modifications en utilisant la commande "git checkout".

Tapez "`git merge`" suivi du nom de la branche à fusionner. Par exemple:

`git merge` ma_branche
Appuyez sur Entrée. Git fusionnera les modifications de la branche "ma_branche" dans la branche en cours et affichera un message de confirmation.
Si des conflits de fusion surgissent, vous devrez les résoudre avant de pouvoir finaliser la fusion. Git affichera des instructions sur la façon de résoudre ces conflits dans la sortie de la commande.

Vous pouvez également utiliser l'option "-squash" pour fusionner les commits de la branche de manière à ce qu'ils apparaissent comme un seul commit dans l'historique de la branche en cours. Cela peut être utile lorsque vous voulez simplifier l'historique du dépôt.

`git merge` --squash ma_branche

### `git status`

"`git status`" est l'une des principales commandes Git utilisées pour afficher l'état actuel de votre dépôt Git. Lorsque vous utilisez "`git status`", Git affiche une liste des fichiers modifiés ou ajoutés qui ne font pas encore partie de l'historique du dépôt. Cela vous permet de voir quels fichiers ont été modifiés et sont prêts à être commités, ainsi que les fichiers qui ont été ajoutés à l'index mais qui n'ont pas encore été commités.

Voici comment utiliser la commande "`git status`":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git.

Tapez "`git status`" et appuyez sur Entrée.

Git affichera l'état actuel de votre dépôt, y compris les fichiers modifiés et ajoutés à l'index, ainsi que la branche en cours.

Voici un exemple de sortie de "`git status`":

En cours de fusion : 36d4245... Mon message de commit
Allons dans 'mon_projet'

Vous êtes sur la branche 'ma_branche'
Les commits suivants ne sont pas encore fusionnés

### `git log`

"`git log`" est l'une des principales commandes Git utilisées pour afficher l'historique des commits de votre dépôt Git. Lorsque vous utilisez "`git log`", Git affiche une liste de tous les commits de votre dépôt, avec leur identifiant de commit, l'auteur du commit et le message de commit. Cela vous permet de voir les modifications qui ont été apportées au dépôt au fil du temps et de comprendre comment l'historique du dépôt s'est développé.

Voici comment utiliser la commande "`git log`":

Ouvrez une invite de commande ou un terminal dans le répertoire de votre dépôt Git.

Tapez "`git log`" et appuyez sur Entrée.

Git affichera l'historique des commits de votre dépôt, avec leur identifiant de commit, l'auteur du commit et le message de commit.

---

## 3.2.2. Les commandes de base de Git

Voici une liste de commandes GitHub couramment utilisées :

`git remote` : gère les dépôts distants de votre dépôt local
`git fetch` : récupère les derniers changements d'un dépôt distant, mais ne les fusionne pas avec votre dépôt local
`git pull` request : envoie une demande de fusion (pull request) sur GitHub pour demander à un autre utilisateur de fusionner ses changements avec votre dépôt
`git merge` : fusionne les changements d'un autre utilisateur dans votre dépôt
`git clone` : utilisé pour cloner un dépôt GitHub sur votre ordinateur local
`git fork` : crée une copie d'un dépôt GitHub sur votre propre compte

Oui, la commande `git remote` peut être utilisée pour gérer les dépôts distants de votre dépôt local. Elle peut être utilisée pour ajouter, supprimer ou renommer un dépôt distant, ainsi que pour afficher une liste des dépôts distants associés à votre dépôt local.
Voici quelques exemples de l'utilisation de la commande `git remote` :
• `git remote` add <nom> <url> : ajoute un dépôt distant avec le nom spécifié et l'URL spécifiée
• `git remote` remove <nom> : supprime le dépôt distant avec le nom spécifié
• `git remote` rename <ancien nom> <nouveau nom> : renomme le dépôt distant avec l'ancien nom spécifié en utilisant le nouveau nom spécifié
• `git remote` -v : affiche une liste des dépôts distants associés à votre dépôt local, ainsi que leurs URLs
Vous pouvez également utiliser la commande `git remote` show <nom> pour afficher plus d'informations sur un dépôt distant spécifique.
