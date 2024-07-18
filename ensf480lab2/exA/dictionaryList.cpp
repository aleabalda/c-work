// lookuptable.cpp

// ENSF 480 - Lab 2 - Exercise A

// Completed by: Alessandro Baldassarre & Christopher Michaud

#include <assert.h>
#include <iostream>
#include <stdlib.h>
#include "dictionaryList.h"
#include "mystring_B.h"

using namespace std;

Node::Node(const Key &keyA, const Datum &datumA, Node *nextA)
    : keyM(keyA), datumM(datumA), nextM(nextA)
{
}

DictionaryList::DictionaryList()
    : sizeM(0), headM(0), cursorM(0)
{
}

DictionaryList::DictionaryList(const DictionaryList &source)
{
  copy(source);
}

DictionaryList &DictionaryList::operator=(const DictionaryList &rhs)
{
  if (this != &rhs)
  {
    destroy();
    copy(rhs);
  }
  return *this;
}

DictionaryList::~DictionaryList()
{
  destroy();
}

int DictionaryList::size() const
{
  return sizeM;
}

int DictionaryList::cursor_ok() const
{
  return cursorM != 0;
}

const Key &DictionaryList::cursor_key() const
{
  assert(cursor_ok());
  return cursorM->keyM;
}

const Datum &DictionaryList::cursor_datum() const
{
  assert(cursor_ok());
  return cursorM->datumM;
}

void DictionaryList::insert(const int &keyA, const Mystring &datumA)
{
  // Add new node at head?
  if (headM == 0 || keyA < headM->keyM)
  {
    headM = new Node(keyA, datumA, headM);
    sizeM++;
  }

  // Overwrite datum at head?
  else if (keyA == headM->keyM)
    headM->datumM = datumA;

  // Have to search ...
  else
  {

    // POINT ONE

    // if key is found in list, just overwrite data;
    for (Node *p = headM; p != 0; p = p->nextM)
    {
      if (keyA == p->keyM)
      {
        p->datumM = datumA;
        return;
      }
    }

    // OK, find place to insert new node ...
    Node *p = headM->nextM;
    Node *prev = headM;

    while (p != 0 && keyA > p->keyM)
    {
      prev = p;
      p = p->nextM;
    }

    prev->nextM = new Node(keyA, datumA, p);
    sizeM++;
  }
  cursorM = NULL;
}

void DictionaryList::remove(const int &keyA)
{
  if (headM == 0 || keyA < headM->keyM)
    return;

  Node *doomed_node = 0;

  if (keyA == headM->keyM)
  {
    doomed_node = headM;
    headM = headM->nextM;

    // POINT TWO
  }
  else
  {
    Node *before = headM;
    Node *maybe_doomed = headM->nextM;
    while (maybe_doomed != 0 && keyA > maybe_doomed->keyM)
    {
      before = maybe_doomed;
      maybe_doomed = maybe_doomed->nextM;
    }

    if (maybe_doomed != 0 && maybe_doomed->keyM == keyA)
    {
      doomed_node = maybe_doomed;
      before->nextM = maybe_doomed->nextM;
    }
  }
  if (doomed_node == cursorM)
    cursorM = 0;

  delete doomed_node; // Does nothing if doomed_node == 0.
  sizeM--;
}

void DictionaryList::go_to_first()
{
  cursorM = headM;
}

void DictionaryList::step_fwd()
{
  assert(cursor_ok());
  cursorM = cursorM->nextM;
}

void DictionaryList::make_empty()
{
  destroy();
  sizeM = 0;
  cursorM = 0;
}

// The following function are supposed to be completed by the stuents, as part
// of the exercise B part II. the given fucntion are in fact place-holders for
// find, destroy and copy, in order to allow successful linking when you're
// testing insert and remove. Replace them with the definitions that work.

void DictionaryList::find(const Key &keyA)
{
  if (headM == 0 || keyA < headM->keyM)
  {
    cursorM = 0;
  }
  else if (keyA == headM->keyM)
  {
    cursorM = headM;
  }
  else
  {
    for (Node *p = headM; p != 0; p = p->nextM)
    {
      if (keyA == p->keyM)
      {
        cursorM = p;
        return;
      }
    }
    cursorM = 0;
  }
  // cout << "\nDon't know how to find " << keyA << " (or any other key).\n";
  // cout << "... so exit is being called.\n";
  // exit(1);
}

void DictionaryList::destroy()
{
  Node *current = headM;
  Node *next;

  while (current != 0)
  {
    next = current->nextM;
    delete current;
    current = next;
  }

  headM = 0;
}

void DictionaryList::copy(const DictionaryList &source)
{
  if (source.headM == 0)
  {
    headM = 0;
    return;
  }

  headM = new Node(source.headM->keyM, source.headM->datumM, source.headM->nextM);

  Node *current = headM;
  Node *sourceCurrent = source.headM->nextM;

  while (sourceCurrent != nullptr)
  {
    current->nextM = new Node(sourceCurrent->keyM, sourceCurrent->datumM, sourceCurrent->nextM);
    current = current->nextM;
    sourceCurrent = sourceCurrent->nextM;
  }
}

std::ostream &operator<<(std::ostream &out, const DictionaryList &dl)
{
  for (Node *p = dl.headM; p != nullptr; p = p->getNext())
  {
    out << p->getKey() << " " << p->getDatum().c_str() << std::endl;
  }
  return out;
}

// Overload for [] operator
const Datum &DictionaryList::operator[](int i) const
{
  Node *current = headM;
  int count = 0;
  while (current != nullptr && count < i)
  {
    current = current->nextM;
    count++;
  }
  if (current == nullptr)
  {
    throw std::out_of_range("Index out of range");
  }
  return current->datumM;
}

#include <cassert>

Datum &DictionaryList::operator[](int i)
{
  static Datum defaultValue;

  Node *current = headM;
  int count = 0;
  while (current != nullptr && count < i)
  {
    current = current->nextM;
    count++;
  }

  if (current == nullptr)
  {
    return defaultValue;
  }
  return current->datumM;
}