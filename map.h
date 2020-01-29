class Map {
public:
  size_t capacity_;
  //Size of the current map
  size_t len_;
  //Array of Node pointers in the map
  Node** elems_;

  //Constructor
  Map(){
    elems_ = NULL;
    len_ = 0;
    capacity_ = 10;
  }
  //Adds an element to the map as a node pair
  void addElement(Node* elem) {
  }

  //Removed the given key from the map
  void removeElement(Object* key);

  //Gets the value of the key
  Object* getValue(Object* key);

  //Gets the length of the map
  void getLength();

  //Checks is the key is in the map
  bool isKeyIn(String* e);

};
