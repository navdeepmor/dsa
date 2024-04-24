# Oops:
  HW:
  1. Padding 
  2. Alignment

  class Account {
    int AccNo;
    string Name;
  }

  Account *p = new Accout();
  (*p).AccNo = 10003644;  // OR p->AccNo = 10003644
  (*p).Name = "Navdeep";  // OR p->Name = "Navdeep"


  class Account {
    int AccNo;
    string Name;

    public:
    Account(int Account, string Name) {
      this->Account = Account;  // OR this-> point to the calling object
      this->Name = Name;
    }
  }


  class Account {
    int AccNo;
    string Name;

    ~Account() {
      // use this to release memory
      // static memory is release by c++
      // dynamic memory or memory allocation inside heap need to be released intentionally
    }
  }

  int main() {
    Account *p = new Account;
    delete p;  // destructor called
    return 0;
  }


  Encapsulation:
  Abstraction: