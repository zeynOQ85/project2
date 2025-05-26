class Entity
{
protected:
	string Id;
	string name;
public:
	Entity(string name, string id) :name(name), Id(id) {}
	virtual~Entity() {}
	string getId() { return Id; }
	string getName() { return name; }
	virtual void display()const = 0;
};
