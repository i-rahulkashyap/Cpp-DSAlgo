class Student{
	public:
	int rollNumber;

	private:
	int age;

	public:
	void display()
	{
		cout<<"age: "<<age<<"RollNumber :"<<rollNumber<<endl;
	}

	//Destructor
	~Student(){
		cout<<"Destructor Called "<<endl;	
	}

	//Default Constructor
	Student(){
	
	cout<<"Constructor Called 1: "<<endl;	
	}
	
	
	//Parameterized 1args
	
	Student(int rno){
	cout<<"Constructor Called 2: "<<endl;
	rollNumber=rno;		
	}
	//Student(int age){
	//cout<<"Constructor Called 2age: "<<endl;
	//this->age=age;
	//}
	//two args 
	Student(int age,int rno){
	//Every function has this pointer for the object currentry being operated via main().
	cout<<"This :"<<this<<endl; //since this is a address it will print the address
	//and one more thing about this pointer is that it's holding the address of object which is being operated via main() .
	cout<<"Constructor Called 3: "<<endl;
	this->age=age;
	this->rollNumber=rno;	
	}
	
	
};

