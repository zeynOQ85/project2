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
class Song :public Entity {
	string singer;
	int releazeYear;
	string style;
public:
	Song(string name, string id, string singer, int releazeYear, string style) :Entity(name, id), singer(singer), releazeYear(releazeYear), style(style) {}
	void display() {
		cout << "Song naame:" << name << "| singer:" << singer << "| releaze year:" << releazeYear << "| Song style:" << style << endl;
	}
	string getSinger() { return singer; }
	string getStyle() { return style; }
	int getReleazeYear() { int releazeYear; }
};
class Song :public Entity {
	string singer;
	int releazeYear;
	string style;
public:
	Song(string name, string id, string singer, int releazeYear, string style) :Entity(name, id), singer(singer), releazeYear(releazeYear), style(style) {}
	void display() {
		cout << "Song naame:" << name << "| singer:" << singer << "| releaze year:" << releazeYear << "| Song style:" << style << endl;
	}
	string getSinger() { return singer; }
	string getStyle() { return style; }
	int getReleazeYear() { int releazeYear; }
};