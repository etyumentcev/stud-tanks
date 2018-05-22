#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <vector>

#include "IObject.h"
#include "Pointer.h"

class Array : public IObject
{
	std::vector<Pointer<IObject>> array_;
public:
	Array() = default;
	explicit Array(std::vector<Pointer<IObject>> array);
	
	Pointer<IObject> operator[](size_t index) const;
	Pointer<IObject> operator[](size_t index);

	std::string getKey() const override;

	virtual ~Array() noexcept = default;
};

#endif
