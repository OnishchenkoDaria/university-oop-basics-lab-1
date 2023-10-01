#include "SeriesList.h"
#include "CharactersList1.h"

void SeriesList::AddSeries(string name, SeriesList** head, SeriesList** tail) {
	SeriesList* temp = new SeriesList;
	temp->Name = name;

	if (!(*head)) {
		*head = *tail = temp;

	}
	else {
		(*tail)->Next = temp;
		*tail = temp;
	}
	temp->Next = NULL;
}