#pragma once;
#include "object.h"

class Map : public Object {
public:

  //Constructor
  Map();

  //Destructor
  ~Map();

  //Adds a pair key and value to the map
  void addElement(Object* key, Object* value);

  //Removed the given key from the map
  Object* removeElement(Object* key);

  //Gets the value of the key
  Object* getValue(Object* key);

  //Gets the actual number of key/pair values in map
  size_t getLength();

  //Gets the capacity of the map
  size_t getCapacity();

  //Checks is the key is in the map
  bool isKeyIn(Object* key);

  //Changed the capacity of the map
  void resizeCapacity();

};
