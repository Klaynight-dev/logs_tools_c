# logs_tools_c

Ici vous retrouverai une outils de logs utile pour vos applications en C.

## Installation

Pour installer les outils de logs, clonez ce dépôt et compilez les sources :

```sh
git clone https://github.com/Klaynight-dev/logs_tools_c.git
cd logs_tools_c
make
```

## Utilisation

Voici un exemple de comment utiliser les outils de logs dans votre code C :

```c
#include "log_tools.h"

int main() {
    log_info("Démarrage de l'application");
    // Votre code ici
    log_error("Une erreur est survenue");
    return 0;
}
```

## Contribuer

Les contributions sont les bienvenues ! Veuillez créer une pull request ou ouvrir une issue pour discuter des modifications que vous souhaitez apporter.

## Licence

Ce projet est sous licence MIT. Voir le fichier [LICENSE](LICENSE) pour plus de détails.

