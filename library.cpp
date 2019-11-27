#include <iostream>
#include <ctime>


using namespace std;

class ebook{
  public:
    string name;
tm issue_date;
  tm expire_date;
   string categories;
string subject;
};
class book: public ebook{
};
class cd_dvddvd: public ebook{
};
class project_kit: public ebook{
};


int main() {
    // Create an object of ebook
ebook   ebookObj1;
    ebookObj1.name = "Spiderman";
    ebookObj1.issue_date.tm_year= 2019;
    ebookObj1.issue_date.tm_mon = 5;
    ebookObj1.issue_date.tm_mday = 13;
    ebookObj1.expire_date.tm_year= 2019;
    ebookObj1.expire_date.tm_mon = 6;
    ebookObj1.expire_date.tm_mday = 24;
    ebookObj1.categories="thriller";
    ebookObj1.subject="drama";
ebook ebookObj2;
    ebookObj2.name = "Joker";
    ebookObj2.issue_date.tm_year= 2019;
    ebookObj2.issue_date.tm_mon = 5;
    ebookObj2.issue_date.tm_mday = 13;
    ebookObj2.expire_date.tm_year= 2019;
    ebookObj2.expire_date.tm_mon = 5;
    ebookObj2.expire_date.tm_mday = 13;
    ebookObj2.categories="drama";
    ebookObj2.subject="romance";
    ////////////////////////////////////////////////////////////////////////

book   bookObj1;
    bookObj1.name = "Jeni";
    bookObj1.issue_date.tm_year= 2019;
    bookObj1.issue_date.tm_mon = 5;
    bookObj1.issue_date.tm_mday = 13;
    bookObj1.expire_date.tm_year= 2019;
    bookObj1.expire_date.tm_mon = 6;
    bookObj1.expire_date.tm_mday = 24;
    bookObj1.categories="Romantic";
    bookObj1.subject="drama";
book   bookObj2;
    bookObj2.name = "Across The Barricades";
    bookObj2.issue_date.tm_year= 2019;
    bookObj2.issue_date.tm_mon = 5;
    bookObj2.issue_date.tm_mday = 13;
    bookObj2.expire_date.tm_year= 2019;
    bookObj2.expire_date.tm_mon = 6;
    bookObj2.expire_date.tm_mday = 24;
    bookObj2.categories="thriller";
    bookObj2.subject="War";
    //////////////////////////////////////////////////////////////////
cd_dvddvd cd_dvddvdObj1;
    cd_dvddvdObj1.name = "French lover";
    cd_dvddvdObj1.issue_date.tm_year= 2019;
    cd_dvddvdObj1.issue_date.tm_mon = 5;
    cd_dvddvdObj1.issue_date.tm_mday = 13;
    cd_dvddvdObj1.expire_date.tm_year= 2019;
    cd_dvddvdObj1.expire_date.tm_mon = 6;
    cd_dvddvdObj1.expire_date.tm_mday = 24;
    cd_dvddvdObj1.categories="Tragedy";
    cd_dvddvdObj1.subject="Novel";
/////////////////////////////////////////////////////////////////////
project_kit project_kitObj1;
    project_kitObj1.name = "Danger";
    project_kitObj1.issue_date.tm_year= 2019;
    project_kitObj1.issue_date.tm_mon = 5;
    project_kitObj1.issue_date.tm_mday = 13;
    project_kitObj1.expire_date.tm_year= 2019;
    project_kitObj1.expire_date.tm_mon = 5;
    project_kitObj1.expire_date.tm_mday = 13;
    project_kitObj1.categories="SCIENCE";
    project_kitObj1.subject="Warning";
// Print attribute values
cout <<   ebookObj1.name << " " <<  ebookObj1.issue_date.tm_year << " " <<  ebookObj1.issue_date.tm_mon << " " << ebookObj1.issue_date.tm_mday << " " << ebookObj1.expire_date.tm_year<<" "<<  ebookObj1.expire_date.tm_mon << " "<< ebookObj1.expire_date.tm_mday<<" "<<ebookObj1.categories<<"  "<<ebookObj1.subject<<"\n";
cout <<   ebookObj2.name << " " <<  ebookObj2.issue_date.tm_year << " " <<  ebookObj2.issue_date.tm_mon << " " << ebookObj2.issue_date.tm_mday << " " << ebookObj2.expire_date.tm_year<<" "<<  ebookObj2.expire_date.tm_mon << " "<< ebookObj2.expire_date.tm_mday<<" "<<ebookObj2.categories<<"  "<<ebookObj2.subject<<"\n";
cout <<   bookObj1.name << " " <<  bookObj1.issue_date.tm_year << " " <<  bookObj1.issue_date.tm_mon << " " << bookObj1.issue_date.tm_mday << " " << bookObj1.expire_date.tm_year<<" "<<  bookObj1.expire_date.tm_mon << " "<< bookObj1.expire_date.tm_mday<<" "<<bookObj1.categories<<"  "<<bookObj1.subject<<"\n";
cout <<   bookObj2.name << " " <<  bookObj2.issue_date.tm_year << " " <<  bookObj2.issue_date.tm_mon << " " << bookObj2.issue_date.tm_mday << " " << bookObj2.expire_date.tm_year<<" "<<  bookObj2.expire_date.tm_mon << " "<< bookObj2.expire_date.tm_mday<<" "<<bookObj2.categories<<"  "<<bookObj2.subject<<"\n";
cout <<   cd_dvddvdObj1.name << " " <<  cd_dvddvdObj1.issue_date.tm_year << " " <<  cd_dvddvdObj1.issue_date.tm_mon << " " << cd_dvddvdObj1.issue_date.tm_mday << " " << cd_dvddvdObj1.expire_date.tm_year<<" "<<  cd_dvddvdObj1.expire_date.tm_mon << " "<< cd_dvddvdObj1.expire_date.tm_mday<<" "<<cd_dvddvdObj1.categories<<"  "<<cd_dvddvdObj1.subject<<"\n";
}
