#include "ObjectBuffer.h"

ObjectBuffer::ObjectBuffer(vector<Pointer<Object>> buffer) : buffer_(move(buffer))
{

}

Pointer<Object> ObjectBuffer::getPointerToObject(size_t index)
{
	return buffer_.at(index);
}

void ObjectBuffer::addObject(Pointer<Object> newObject)
{
	buffer_.push_back(newObject);
}

ObjectBuffer::~ObjectBuffer()
{

}
