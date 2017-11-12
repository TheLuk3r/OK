#include <iostream>
#include <fstream>
#include "map.h"
#include "route.h"
#include "mutate.h"
#include "init.h"
#include "genePool.h"

int main() {
    map town;
    route path;
    route generation[generationSize];
    town.load();
    //town.createMeme(80);
    //town.CreateMapFile();
    genePool generations;
    //std::cout<<zachlanny_artura_pojedynczy(0,town,path);
    min_zachlanny=zachlanny_artura(*&town, *&path);
    std::cout<<min_zachlanny<<" "<< path.getTown(0)<<std::endl;
    populateGeneration(*&town,*&generation);
    genePool pool;
    pool.calcMaxFitness(*&generation,*&town);
    pool.createPool(*&generation,*&town);
    //std::cout<<generation[20].getTown(0)<<"  "<<generation[20].getFitness();
    return 0;
}