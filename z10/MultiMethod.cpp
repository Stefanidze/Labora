#include "MultiMethod.h"

MultiMethodFactory* MultiMethodFactory::top = nullptr;
MultiMethodFactory::MultiMethodFactory(int m, int k) : multimethod_type_one(m), multimethod_type_two(k)
{
	this->next = top;
	top = this;
}

MultiMethod* MultiMethodFactory::Multimethod_choose(ofstream &ofst, AbstNumbers* elem_one, AbstNumbers* elem_two)
{
	int one = elem_one->mark;
	int two = elem_two->mark;

	MultiMethod *cur = NULL;
	MultiMethodFactory* tmp = top;
	while (tmp)
	{
		cur = tmp->Create(one, two);
		if (cur)
		{
			cur->Multimethod_body(ofst);
			return cur;
		}
		tmp = tmp->next;
	}
	return cur;
}

