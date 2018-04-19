#include "ObjectBuffer.h"

ObjectBuffer::ObjectBuffer(vector<Pointer<Object>*> buffer) : buffer_(move(buffer))
{

}

ObjectBuffer::ObjectBuffer(const ObjectBuffer& otherObjectBuffer) : buffer_(otherObjectBuffer.buffer_)
{

}

ObjectBuffer::ObjectBuffer(ObjectBuffer && otherObjectBuffer) : buffer_(move(0))
{
	swap(buffer_, otherObjectBuffer.buffer_);
}

ObjectBuffer& ObjectBuffer::operator=(const ObjectBuffer& otherObjectBuffer)
{
	buffer_ = otherObjectBuffer.buffer_;
	return *this;
}

ObjectBuffer& ObjectBuffer::operator=(ObjectBuffer && otherObjectBuffer) noexcept
{
	swap(buffer_, otherObjectBuffer.buffer_);
	return *this;
}

Pointer<Object>* ObjectBuffer::getPointerToObject(size_t index)
{
	return buffer_.at(index);
}

void ObjectBuffer::addObject(Pointer<Object>* newObject)
{
	buffer_.push_back(newObject);
}

ObjectBuffer::~ObjectBuffer()
{

}
