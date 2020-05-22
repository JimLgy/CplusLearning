
#ifndef GOLF_H_
#define GOLF_H_

class golf
{
	private:
		static const int Len = 40;
		char fullname[Len];
		int handicap;
	public:
		golf(){ fullname[0] = '\0'; handicap = 0; };
		golf(const char * ch, int n);
		golf & setgolf();
		// function resets handicap to new value
		void resethc(int hc);
		// function displays contents of golf structure
		void showgolf() const;
};
#endif
