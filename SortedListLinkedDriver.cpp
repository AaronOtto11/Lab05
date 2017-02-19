//slcaneer42@students.tntech.edu

#include "SortedListLinked.h"
#include "CD.h"
using CSC2110::CD;
#include "ListArray.h"
using CSC2110::ListArray;
#include "ListArrayIterator.h"
using CSC2110::ListArrayIterator;
#include <iostream>
using namespace std;

void addCDs(ListArray<CD>* list)
{
   ListArrayIterator<CD>* iter = list->iterator();

   //DO THIS
   //iterate over and add the cds to the list box (use lb->addItem)

  ListArrayIterator<CD>* iter =cds->iterator();
	SortedListLinked<CD>* sortedList= new SortedListLinked<CD>;
	ListLinkedIterator SIter =sortedList->iterator();
	while (iter->hasNext()){
	sortedList->add(iter->next());
	}


   delete iter;
}

void deleteCDs(ListArray<CD>* list)
{
   ListArrayIterator<CD>* iter = list->iterator();
	int index=1;
   //DO THIS  
   //iterate over and delete the cds
	 while(iter->hasNext()==1)
	{
	delete list->get(index);
	index++;
   }



   delete iter;
}

int main(int argc, char* argv[])
{
   ListArray<CD>* cds = CD::readCDs("cds.txt");
   //DO THIS
   //create and test the sorted linked list 
	

   return 0;
}
