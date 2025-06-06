class FooBar {
private:
    int n;
    mutex m1, m2;

public:
    FooBar(int n) {
        this->n = n;
        m2.lock();
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            
        	// printFoo() outputs "foo". Do not change or remove this line.
            m1.lock();
        	printFoo();
            m2.unlock();
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            
        	// printBar() outputs "bar". Do not change or remove this line.
            m2.lock();
        	printBar();
            m1.unlock();
        }
    }
};
