#include "BehaviorTree.h"


BehaviorTree::BehaviorTree(RootSelector root)
        {
            rootNode = root;
 }


BTCode BehaviorTree::tick()
{
     return rootNode.tick();
              
}

       