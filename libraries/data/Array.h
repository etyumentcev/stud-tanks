#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <vector>
#include <map>

#include "IObject.h"

class Array : public IObject
{
	std::map<std::string, Pointer<IObject> > args_;
	std::vector<Pointer<IObject> > array_;
public:
	Array() = default;
	explicit Array(std::vector<Pointer<IObject>> array);
	
	Pointer<IObject> operator[](size_t index) const;
	Pointer<IObject> operator[](size_t index);

	Pointer<IObject> getValue(std::string key) override;
	void setValue(std::string key, Pointer<IObject> value) override;
	std::string getKey() const override;

	virtual ~Array() noexcept = default;
};

#endif
