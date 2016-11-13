/*
 * Sarah LOUKHMI & Thomas de la Red
 * SI4 Groupe 1
 * 1O/10/2016
 * Etape1
 */

#ifndef ETAPE1_TERRAIN_H
#define ETAPE1_TERRAIN_H

#include <iostream>

using namespace std;

typedef struct {
    int _x;
    int _y;
    bool sorti = false;
} Personne;

typedef struct {
    vector<Personne> *personnes;
    bool ***terrain;
    pthread_barrier_t* barriere_thread;
    pthread_barrier_t* barriere_all;
} Thread_Param;

void init_param_thread(Thread_Param* tp, vector<Personne>* p, bool *** terrain, pthread_barrier_t* barriere, pthread_barrier_t* barriereAll);
void creation_personne(Personne *p, int x, int y);
bool** creation_terrain();
void afficher_matrice(bool ** terrain);
bool isFree(bool **terrain,int x, int y);
bool isNotAWall(int x, int y);
vector<Personne> init_personnes(bool** terrain ,int p);
float azimuth(Personne p);
int meilleur_coup(Personne p);
Personne deplacement(bool **terrain, vector<Personne> tab_personnes,int index);
void actualise(bool **terrain, Personne *p,int dir);
bool** Libere(bool **terrain,int x, int y);
void etape1(int n_thread);

double moyenne(double *tableValues, int nbExecutions);
void lancer_statistiques(double *executionsCPU, double *executionsUtil);


#endif //ETAPE1_TERRAIN_H
