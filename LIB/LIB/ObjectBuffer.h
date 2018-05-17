#ifndef _OBJECT_BUFFER_H_
#define _OBJECT_BUFFER_H_

#include <vector>

#include "IObject.h"
#include "Pointer.h"

class ObjectBuffer
{
	std::vector<Pointer<IObject>> buffer_;
public:
	explicit ObjectBuffer(std::vector<Pointer<IObject>> buffer);

	Pointer<IObject> getPointerToObject(size_t index);
	void addObject(Pointer<IObject> newObject);

	virtual ~ObjectBuffer();
};

#endif
