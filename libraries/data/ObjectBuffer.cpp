#include "ObjectBuffer.h"

ObjectBuffer::ObjectBuffer() : buffer_(0)
{

}

ObjectBuffer::ObjectBuffer(const std::vector<Pointer<IObject> > buffer) : buffer_(buffer)
{

}

Pointer<IObject> ObjectBuffer::getPointerToObject(const size_t index)
{
	return buffer_.at(index);
}

void ObjectBuffer::addObject(const Pointer<IObject> newObject)
{
	buffer_.push_back(newObject);
}

ObjectBuffer::~ObjectBuffer()
{

}
