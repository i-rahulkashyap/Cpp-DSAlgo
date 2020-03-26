class Student{
	private:
	int age;
	//int rollNumber;
	char *name; //will point later due to unpredicted size of student
	public:
	Student(int age,char *name){
	this->age=age;  //yeh toh thik hai since it's just a integer variable
	//Shallow Copy
	//this->name=name; //yeh thik nahi hai sicne it's good to go for first call but after making call via another object it will leads to overwriting the previously assigned objects properties to new properties of other (new created) other due to SHALLOW COPY;
	//Solution to Shallow Copy is DEEP copy
	this->name=new char[strlen(name)+1];  //creates array at the name location for the given object so that deep copy succeeds;
	strcpy(this->name,name);
	
	}
	void print(){
	cout<<this->age<<" "<<this->name<<endl;
	
	}
};



