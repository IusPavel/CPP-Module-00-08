#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "\nmain test: " << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	delete j;//should not create a leak
	delete i;

	std::cout << "\n====================================================" << std::endl;
	std::cout << "creating and filling array of Animal half is Dog and the other half is Cat" << std::endl;
	Animal *arr[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	for (int i = 0; i < 4; i++)
	{
		arr[i]->makeSound();
		delete arr[i];
	}

	std::cout << "\n====================================================\ncreating Cat k:" << std::endl;
	Cat k;
	k.getIdeas()[0] = "idea of cat k";

	std::cout << "\ncreating Cat l (copy of k)" << std::endl;
	Cat l(k);
	std::cout << l.getIdeas()[0] << std::endl;

	std::cout << "\nchecking assignment operator" << std::endl;
	k.getIdeas()[0] = "idea of cat kkk";
	l = k;
	std::cout << l.getIdeas()[0] << std::endl;
	std::cout << "\nend of main" << std::endl;
}