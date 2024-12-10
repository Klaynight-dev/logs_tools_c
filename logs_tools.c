#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

// Fonction pour obtenir le timestamp actuel
char* get_timestamp() {
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    static char timestamp[20];
    strftime(timestamp, sizeof(timestamp)-1, "%Y-%m-%d %H:%M:%S", t);
    return timestamp;
}

// Fonction pour obtenir la date actuelle
char* get_date() {
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    static char date[11];
    strftime(date, sizeof(date)-1, "%Y-%m-%d", t);
    return date;
}

// Fonction pour créer un répertoire s'il n'existe pas
void create_directory_if_not_exists(const char *path) {
    struct stat st = {0};
    if (stat(path, &st) == -1) {
        mkdir(path, 0700);
    }
}

// Fonction pour écrire un message dans un fichier de log
void write_log(const char *directory, const char *message) {
    create_directory_if_not_exists(directory);

    char filepath[256];
    snprintf(filepath, sizeof(filepath), "%s/log_%s.log", directory, get_date());

    FILE *file = fopen(filepath, "a");
    if (file == NULL) {
        perror("Erreur lors de l'ouverture du fichier de log");
        return;
    }

    fprintf(file, "[%s] %s\n", get_timestamp(), message);
    fclose(file);
}

int main() {
    write_log("logs", "Ceci est un message de log.");
    return 0;
}