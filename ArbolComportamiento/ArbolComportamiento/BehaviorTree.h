//#include <iostream>
#include <functional>
//#include <stdarg.h>
/*
#include <string>
*/
#include <vector>


enum BTCode
{
	Failure,
	Success,
	Running
};


class RootSelector{
public :
	int toTick;
	BTCode tick();
};

class BehaviorTree
{

public:

	BehaviorTree(RootSelector root);
	BTCode tick();

	std::function<BTCode ()> behaviorToTick; 

	void setReturnCode( BTCode code ){ codeLastTick = code; }
	BTCode getReturnCode(){ return codeLastTick;}



private:

	BTCode codeLastTick;
	RootSelector rootNode;

};
