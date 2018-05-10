#ifndef _ARRAY_H_
#define _ARRAY_H_

#include "Object.h"
#include "Pointer.h"

#include <vector>
#include <memory>

class Array : public Object
{
	vector<Pointer<Object>> mArray;
public:
	explicit Array(vector<Pointer<Object>> array);
	
	Pointer<Object> operator[](size_t index);

	Pointer<Object> getValue(size_t index) noexcept(false);
	void setValue(Pointer<Object> new_value);

	virtual ~Array();
};

#endif
