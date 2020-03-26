class Student{
	private:
	int age;

	public:
	const int rollNumber;
	char *name;
	//Intialization List
	Student(int r,int a):rollNumber(r),age(a){
		
	}
	/*Student(int age,char *name){
	this->age=age;  //this suits fine :no need of DEEP COPY
	//	this->name=name; //SHALLOW COPY	
	//DEEP COPY
	this->name=new char[strlen(name)+1]; //+1 for NULL in charater array	
	strcpy(this->name,name);  //(destination,source)
	
	}
	//OWN COPY CONSTRUCTOR FOR DEEP COPY
	Student(Student &s){  //interpreted as s2.Student(s1);  s2 is the object via which we came here with s1 to copied there
	//this->age=age; both side is same since there is no argument named age
	this->age=s.age; //it's correct 
 	this->name=new char[strlen(s.name)+1];
	strcpy(this->name,s.name);	
	}*/
	void display(){
	cout<<rollNumber<<" "<<age<<endl;	
	}
	//Intialization List
	//Student(VALUE CAME FROM MAIN):rollNumber(YAHA VARIABLE JO AAYAHA HAI MEANS SAME AS BEFORE ":"){}
	
};
