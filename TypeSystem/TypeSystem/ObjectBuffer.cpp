#include "ObjectBuffer.h"

ObjectBuffer::ObjectBuffer(vector<Pointer<Object>*> buffer) : mBuffer(move(buffer))
{

}

ObjectBuffer::ObjectBuffer(const ObjectBuffer & otherObjectBuffer) : mBuffer(otherObjectBuffer.mBuffer)
{

}

ObjectBuffer::ObjectBuffer(ObjectBuffer && otherObjectBuffer) : mBuffer(move(0))
{
	swap(mBuffer, otherObjectBuffer.mBuffer);
}

ObjectBuffer & ObjectBuffer::operator=(const ObjectBuffer & otherObjectBuffer)
{
	mBuffer = otherObjectBuffer.mBuffer;
	return *this;
}

ObjectBuffer & ObjectBuffer::operator=(ObjectBuffer && otherObjectBuffer) noexcept
{
	swap(mBuffer, otherObjectBuffer.mBuffer);
	return *this;
}

Pointer<Object>* ObjectBuffer::getPointerToObject(size_t index)
{
	return mBuffer.at(index);
}

void ObjectBuffer::addObject(const Pointer<Object>* newObject)
{
}

ObjectBuffer::~ObjectBuffer()
{

}
