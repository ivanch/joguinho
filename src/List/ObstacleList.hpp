#pragma once
#include "../Obstacles/Obstacle.hpp"
#include "List.hpp"
#include <list>

class ObstaclesList : public List<Obstacle*> {
    public:
        list<Obstacle*> obstacles;

        virtual void add(Obstacle* _el){
            obstacles.push_back(_el);
        }
        virtual void remove(Obstacle* _el){
            obstacles.remove(_el);
        }

        std::list<Obstacle*>::iterator begin(){ return obstacles.begin(); }
        std::list<Obstacle*>::iterator end(){ return obstacles.end(); }
};