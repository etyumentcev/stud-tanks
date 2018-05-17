#ifndef _OBJECT_BUFFER_H_
#define _OBJECT_BUFFER_H_

#include "Object.h"
#include "Pointer.h"

#include <vector>
#include <utility>

class ObjectBuffer
{

	vector<Pointer<Object>> buffer_;

public:

	explicit ObjectBuffer(vector<Pointer<Object>> buffer);

	Pointer<Object> getPointerToObject(size_t index);
	void addObject(Pointer<Object> newObject);

	virtual ~ObjectBuffer();

};

#endif
