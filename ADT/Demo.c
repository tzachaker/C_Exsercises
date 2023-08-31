/**
 * Demo program for ADT exercise.
 * 
 * Author: Evgeny Hershkovitch Neiterman
 * Since : 2023-02
 */

#include "AdptArray.h"
#include "book.h"
#include "Person.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int main() {

	// pbook b1 = creat_book("harry Potter",12345) ;
	// pbook b2= creat_book("C intro", 45678) ;
	// PAdptArray mybooks = CreateAdptArray(copy_book,delete_book,print_book);
	// SetAdptArrayAt(mybooks,3,b1);
	// SetAdptArrayAt(mybooks,5,b2);
	// printf("the size is %d\n",GetAdptArraySize(mybooks));  //should print 6
	// pbook b = GetAdptArrayAt(mybooks,4); // should return null;
	// assert(b==NULL); // doesn't fail
	// b = GetAdptArrayAt(mybooks,3);
	// printf("the book is %s\n",b->name); //should print "Harry Potter"
	// PrintDB(mybooks);

	// pperson p1 = creat_person("Harry","Potter", 934);
	// pperson p2 = creat_person("Ron","Weasley", 789);
	// PAdptArray HP_caracters = CreateAdptArray(copy_person,delete_person,print_person);
	// SetAdptArrayAt(HP_caracters,2,p1);
	// SetAdptArrayAt(HP_caracters,8,p2);
	// printf("the size is %d\n",GetAdptArraySize(HP_caracters)); // prints 9
	// PrintDB(HP_caracters); // prints:
	// //first name: Harry last name: Potter id: 934
    // //first name: Ron last name: Weasley id: 789

	//My additions:
	printf("\n*** My additions: *** \n");
	pbook book1= creat_book("story1",12) ;
	pbook book2= creat_book("story2", 34) ;
	pbook book3= creat_book("story3", 56) ;
	PAdptArray books = CreateAdptArray(copy_book,delete_book,print_book);
	SetAdptArrayAt(books,6,book1);
	SetAdptArrayAt(books,10,book2);
	SetAdptArrayAt(books,8,book3);
	printf("\nthe size is %d\n",GetAdptArraySize(books));  //should print 11
	pbook book = GetAdptArrayAt(books,7); // should return null;
	assert(book==NULL); // doesn't fail
	book = GetAdptArrayAt(books,8);
	printf("the book is %s\n",book->name); //should print "story3"
	PrintDB(books);


    DeleteAdptArray(books);
	delete_book(book1);
	delete_book(book2);
	delete_book(book3);
	delete_book(book);


	pperson person1 = creat_person("Tzach","Aker", 12);
	pperson person2 = creat_person("Alice","Ali", 34);
	pperson person3 = creat_person("Bob","Bo", 56);
	PAdptArray people = CreateAdptArray(copy_person,delete_person,print_person);
	SetAdptArrayAt(people,7,person1);
	SetAdptArrayAt(people,22,person2);
	SetAdptArrayAt(people,21,person3);
	printf("\nthe size is %d\n",GetAdptArraySize(people)); // prints 23
	pperson person = GetAdptArrayAt(people,21);
	printf("the person is %s\n",person->first_name); //should print "Bob"
	PrintDB(people); 

	delete_person(person1);
	delete_person(person2);
	delete_person(person3);

	//---------------------------

	
	// DeleteAdptArray(mybooks);
	// DeleteAdptArray(HP_caracters);
	// delete_book(b1);
	// delete_book(b2);
	// delete_book(b);
	// delete_person(p1);
	// delete_person(p2);
	return 0;
}
