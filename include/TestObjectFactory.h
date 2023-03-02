class Bank;

class TestObjectFactory {
  private:
        TestObjectFactory() {};
  public:
        ~TestObjectFactory() {};
        Bank* bankWithTwoAccounts();

  static TestObjectFactory* getInstance();

  private:
        static TestObjectFactory* theInstance;

};
