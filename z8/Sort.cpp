#include "Numbers.h"
#include "Complex.h"
#include "Fracture.h"
#include "Container.h"

double Parameter(AbstNumbers* a);

void Sort(List *lst) {
	Node *t, *m, *a, *b;

	for (bool go = true; go; ) {
		go = false;
		a = t = lst->head;
		b = lst->head->next;

		while (b != nullptr) {
			if (Parameter(a->data) > Parameter(b->data)) {
				if (t == a)
					lst->head = b;
				else
					t->next = b;

				a->next = b->next;
				b->next = a;

				m = a, a = b, b = m;
				go = true;
			}
			t = a;
			a = a->next;
			b = b->next;
		}
	}
}