#pragma once

#include "object.h"
#include "string.h"
#include "node.h"
#include "map.h"

#include <stdio.h>
#include <stdlib.h>

void FAIL() { exit(1); }
void OK(const char* m) { printf("Passed: %s\n", m); }
void t_true(bool p) { if (!p) FAIL(); }
void t_false(bool p) { if (p) FAIL(); }
String* cast_string(Object *object) {
    return dynamic_cast<String*>(object);
}

String* s1 = new String("A");
String* s2 = new String("B");
String* s3 = new String("C");

Object* o1 = new Object();
Object* o2 = new Object();
Object* o3 = new Object();

Node* n1 = new Node(s1, o1);
Node* n2 = new Node(s2, o2);
Node* n3 = new Node(s3, o3);

Node* n4 = new Node(o1, s1);
Node* n5 = new Node(o2, s2);
Node* n6 = new Node(o3, s3);

Map* m1 = new Map();

//Test to check addElement
void test1(){
    String* o1 = new String("Test");
    String* o2 = new String("Value");
    Node* n1 = new Node(o1, o2);
    Map* m1 = new Map();
    m1 -> addElement(n1);
    t_true(m1->getLength() == 1);
    t_false(m1->getLength() == 3);
    OK("Test1");
}

//Tests to check node Constructor
void test2(){
    String* o1 = new String("Test");
    String* o2 = new String("Value");
    Node* n1 = new Node(o1, o2);
    Node* n2 = new Node(s1, s2);
    Map* m1 = new Map();
    m1 -> addElement(n1);
    m1 -> addElement(n2);
    t_true(m1->getLength() == 2);
    t_false(m1->getLength() == 0);
    OK("Test2");
}

//Tests Map Functions
void testAddElem(){
    Map* m1 = new Map();
    m1->addElement(n1);
    m1->addElement(n2);
    m1->addElement(n3);
    t_true(m1->getLength() == 3);
    t_true(m1->isKeyIn(s1) == 1);
    t_true(m1->isKeyIn(s2) == 1);
    t_true(m1->isKeyIn(s3) == 1);
    OK("testAddElem");
}

void testRemoveElem() {
    Map* m1 = new Map();
    m1->addElement(n1);
    m1->addElement(n2);
    m1->addElement(n3);
    t_true(m1->getLength() == 3);
    m1->removeElement(s1);
    t_true(m1->getLength()== 2);
    t_true(m1->isKeyIn(s1) == 0);
    t_true(m1->isKeyIn(s2) == 1);
    t_true(m1->isKeyIn(s3) == 1);
    OK("testRemoveElem");
}

void testGetValue() {
    Map* m1 = new Map();
    m1->addElement(n1);
    m1->addElement(n2);
    m1->addElement(n3);
    t_true(m1->getValue(s1) == o1);
    t_true(m1->getValue(s2) == o2);
    t_true(m1->getValue(s3) == o3);
    OK("testGetValue");
}

int main(){
    test1();
    test2();
    testAddElem();
    testRemoveElem();
    testGetValue();
}
