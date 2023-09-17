#include<iostream>

using namespace std;
struct stack
{
     int data[5];
   int atas;
};
stack tumpuk;

int main()
{
   int pilihan, baru, i;

   tumpuk.atas=-1;
   do
   {
      cout<<"1. PUSH DATA"<<endl;
      cout<<"2. POP DATA"<<endl;
      cout<<"3. PRINT DATA"<<endl<<endl;
      cout<<"ISI PILIHAN : ";
      cin>>pilihan;

      switch (pilihan)
      {
           case 1 :
           if(tumpuk.atas==5-1)
            {
                cout<<"TUMPUKAN SUDAH PENUH";
                cout<<endl;
            }
            else
            {
                cout<<"MASUKKAN DATA : ";
                cin>>baru;
                tumpuk.atas++;
               tumpuk.data[tumpuk.atas]=baru;
                     }
            break;

         case 2 :
           if(tumpuk.atas==-1)
            {
                cout<<"TUMPUKAN KOSONG";
              cout<<endl;  
            }
            else
            {
               cout<<"DATA YANG AKAN DI POP = "<<tumpuk.data[tumpuk.atas]<<endl;
                tumpuk.atas--;
                cout<<endl;
               
            }
            break;

         case 3 :
           if(tumpuk.atas==-1)
            {
                cout<<"TUMPUKAN KOSONG";
    cout<<endl;               
            }
           else
            {
                cout<<"DATA - "<<endl;
               for(i=tumpuk.atas; i>=0; i--)
               {
               cout<<tumpuk.data[i]<<ends;
               cout<<endl;
               }
               cout<<endl;
            }
            break;

         default :
           cout<<"TIDAK ADA DALAM PILIHAN";
            break;
      }
   }
   while((pilihan>=1) && (pilihan<=3));
}
