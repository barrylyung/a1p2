class Map {
public:
  //Constructor
  Map(){}
  
  // Destructor
  ~Map(){}
  
  //Adds an element to the map as a node pair
  void addElement(Node* elem);
  
  //Removed the given key from the map
  void removeElement(Object* key);

  //Gets the value of the key
  Object* getValue(Object* key);

  //Gets the length of the map
  void getLength();

  //Checks is the key is in the map
  bool isKeyIn(String* e);

};
