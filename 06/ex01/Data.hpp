#ifndef DATA_HPP
#define DATA_HPP

struct Data
{
	private:
		int	x;
	public:
		Data(int _x);
		Data(const Data & other);
		~Data();

		Data& operator=(const Data &other);

		int		getX(void);
		void	setX(int x);
};

#endif