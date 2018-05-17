#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <vector>

#include "IObject.h"
#include "Pointer.h"

class Array : public IObject
{
	std::vector<Pointer<IObject>> mArray;
public:
	explicit Array(std::vector<Pointer<IObject>> array);
	
	Pointer<IObject> operator[](size_t index) const;
	Pointer<IObject> operator[](size_t index);

	virtual ~Array();
};

#endif
