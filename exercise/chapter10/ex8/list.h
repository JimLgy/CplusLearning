#ifndef LIST_H_
#define LIST_H_

typedef int LST;
class List
{
	private:
		static const int LEN = 5;
		LST list[LEN];
		int top;
	public:
		List() { list[0] = 0; list[1] = 0; list[2] = 0; list[3] = 0;
		list[4] = 0; };
		List(int n);
		bool isempty(const LST & l1);
		bool isfull(const LST & l1);
		void push();

};

#endif
