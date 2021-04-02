class Time{
	private:
        int m,h,s;
    public:
        void getTime();
        Time operator-(Time);
        void display();
        
};

void Time::getTime(){
    do{
        cout << "Input hours :";
        cin >> h;
        if(h >=24){
            cout << "--- Please input hours in (0-23) ---" << endl;
        }
    }while(h>=24);

    cout << "Input minutes :";
    cin >> m;
    cout << "Input seconds :";
    cin >> s;
}

void Time::display(){
    cout << "Time diff is ";
    cout<<setfill('0')<<setw(2)<<h<<":";
	cout<<setfill('0')<<setw(2)<<m<<":";
	cout<<setfill('0')<<setw(2)<<s<<endl;
}

Time Time::operator-(Time t1){
    Time t3;
    if(t1.s > s){
        s += 60;
        m--;
    }
    if(t1.m > m){
        m += 60;
        h--;
    }
    if(t1.h > h){
        h += 24;
    }
    t3.h = h - t1.h;
    t3.m = m - t1.m;
    t3.s = s - t1.s;
    return t3;
}