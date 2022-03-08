#include "NumberList.h"
#include <stdio.h>

void NumberList::Init() {
	this->count = 0;
}

bool NumberList::Add(int x) {
	if (count >= 10)
		return false;
	else{
		numbers[count] = x;
		count++;
		return true;
	}
}

void NumberList::Sort() {
	bool swapped = false;
	while (swapped == false) {
		swapped = true;
		for(int i = 0; i < count-1; ++i)
			if (this->numbers[i] > this->numbers[i + 1]) {
				swapped = false;
				int aux = this->numbers[i];
				this->numbers[i] = this->numbers[i+1];
				this->numbers[i+1] = aux;
			}
		
	}
}

void NumberList::Print() {
	for (int i = 0; i < this->count; ++i)
		printf("%d%c", this->numbers[i], ' ');
}

