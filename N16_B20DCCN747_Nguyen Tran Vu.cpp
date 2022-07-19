#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include<bits/stdc++.h>

using namespace std;

class sinhvien{
    protected:
        string hoten;
        int maso;
    public:
    void nhap(){
        cin >> maso;
        cin >> hoten;
    }
    void xem(){
        cout<<maso<<" "<<hoten<<" ";
    }
        friend class lop;
        friend class diemsinhvien;
        friend class bangdiem; 
};
class lop {
    protected:
        vector<sinhvien> dssv;
        int malop;
    public:
        void nhapbp(){
            int TS;
            sinhvien x;
            cout<<"Ma lop : ";
            cin >> malop;
            cout<<"TS: "; cin>>TS;
            for(int i=0;i<TS;i++) {
                scanf("\n");
                x.nhap();
                dssv.push_back(x);
                
            }
        }
        void xemmh(){
            for(int i=0;i<dssv.size();i++){
                dssv[i].xem();
                cout<<endl;
            }
            
        }
        void sapxeptang(){
            for(int i=0;i<dssv.size()-1;i++){
                for(int j=i+1;j<dssv.size();j++){
                    if(dssv[i].maso>dssv[j].maso) swap(dssv[i],dssv[j]);
                }
            }
        }
        friend class bangdiem;
};
class diemsv: public sinhvien{
    private:
        int diem;
        string ketqua;
    public:
        void nhapbp(){
            sinhvien::xem();
            cin >> diem;
            if(diem>=4) ketqua="Qua";
            else ketqua="Hoc lai";
        }
        void xemmh(){
            sinhvien::xem();
            cout<<" "<<diem<<" "<<ketqua;
        }
        friend class bangdiem;
};
class bangdiem:public  lop{
    private:
        vector<diemsv> dsdiem;
        int tsqua,tshoclai;
        string monhoc;
    public:
        bangdiem(lop a){
            diemsv x;
            for(int i=0;i<a.dssv.size();i++) {
                x.maso=a.dssv[i].maso;
                x.hoten=a.dssv[i].hoten;
                dsdiem.push_back(x);
            }
        }
        bangdiem(){
           
        }
        void nhapbp(){
            cout<<"Mon hoc: "; cin >> monhoc;
            tsqua=0; tshoclai=0;
            cout<<"Nhap diem:\n";
            for(int i=0;i<dsdiem.size();i++){
                dsdiem[i].nhapbp();
                if(dsdiem[i].ketqua=="Qua") tsqua++;
                else tshoclai++;
            }
        }
        void xemmh(){
            cout<<"Ma lop: "<<malop<<endl;
            cout<< "Mon hoc: "<<monhoc<<endl;
            cout<<"TSqua: "<<tsqua<<endl;
            cout<<"TShoclai: "<<tshoclai<<endl;
            for(int i=0;i<dsdiem.size();i++){
                dsdiem[i].xemmh();
                cout<<endl;
            }
        }

        void ghitep()
            {	fstream fg("D:\\Documents\\Vu.txt",ios::out|ios::binary);

            fg.write(reinterpret_cast <char *> (&monhoc),sizeof(string));
            fg.write(reinterpret_cast <char *> (&tsqua),sizeof(int));
            fg.write(reinterpret_cast <char *> (&tshoclai),sizeof(int));
                for(int i=0;i<dsdiem.size();++i)
                    fg.write(reinterpret_cast <char *> (&dsdiem[i]),sizeof(diemsv));	
                    fg.close();
                }
        void doctep()
            {	fstream fd("D:\\Documents\\Vu.txt",ios::in|ios::binary);

            fd.read(reinterpret_cast <char *> (&monhoc),sizeof(string));
            fd.read(reinterpret_cast <char *> (&tsqua),sizeof(int));
            fd.read(reinterpret_cast <char *> (&tshoclai),sizeof(int));
                diemsv x;
                while (1)
                    { 	fd.read(reinterpret_cast <char *> (&x),sizeof(diemsv));	
                        if (!fd) break;
                        dsdiem.push_back(x);
                    }
                fd.close();
            } 
};

int main() {
	lop a; 
	a.nhapbp(); 
	a.sapxeptang(); 
	a.xemmh(); 

    bangdiem b(a); 
	b.nhapbp();
	b.ghitep();

    bangdiem c; 
	c.doctep(); 
	c.xemmh();
}

