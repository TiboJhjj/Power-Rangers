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
