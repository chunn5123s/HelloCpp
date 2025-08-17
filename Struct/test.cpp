void NhapDate(DATE &date)
{
        cout<<"Nhap Vao Ngay: ";
        cin>>date.day;
        cout<<"Nhap Vao Thang:";
        cin>>date.month;
        cout<<"Nhap Vao Nam:";
        cin>>date.year;

}
bool NamNhuan(int year)
{
    if((year%4==0 && year%100!=0) || year%400==0 )
        return true;
    return false;
}
int DayMax(DATE date)
{
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(NamNhuan(date.year)==true)
        a[2]=29;
    if(date.month>0 && date.month<13)
        return a[date.month];
    return 0;
}

bool DateHopLe(DATE date)
{
    if(date.year>0 && (date.month>0 && date.month<13) &&
        (date.day>0 &&date.day<=DayMax(date)))
            return true;
    return false;
}