class Student {
  // private section
  private:
    int studentId;
    char name[20];
  //    int studentId
  //    name <- 20 charcters
  
  // public section
  public:
    void assignDetails(int pstudentId, char pname[]);
    void display();
  //    assignDetails() method declaration
  //    display() method declaration
};
