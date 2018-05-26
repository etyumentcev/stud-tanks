#include "Figure.h"
#include <list>

class GameFieldWithObj: public Figure
{
	Figure *background;
	std::list <Figure*> &figures;
public:
	virtual void Draw()
	{
		background->Draw();
		/*for (std::list <Figure*>::iterator it = figures.begin; it != figures.end; ++it)
		{
			//it->Draw();
		}*/
	}
};