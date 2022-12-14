#include<iostream>
#include<string>
#include<fstream>
#include "header.h"
using namespace std;

class Project
{
    private:
        string projId;//p001|telecom|
        string type;
        string desc;
        string clientName;
        string stDate;
        string edDate;
        string profCenter;
        string priority;
        int noOfEmp;
        int noOfAllocated;
    public:
        Project(){};
        Project(string projId,string type,string desc, string clientName, string stDate, string edDate, string profCenter, string priority, int noOfEmp,int noOfAllocated)
        {
            this->projId=projId;
            this->type=type;
            this->desc=desc;
            this->clientName=clientName;
            this->stDate=stDate;
            this->edDate=edDate;
            this->profCenter=profCenter;
            this->priority=priority;
            this->noOfEmp=noOfEmp;
            this->noOfAllocated=noOfAllocated;
           // projId=projId+1;
            
        };

        string getType()
        {
            return this->type;
        }

        string getdesc(){
            return this->desc;
        }

        string getclientName(){
            return this->clientName;
        }

        string getstDate(){
            return this->stDate;
        }

        string getedDate(){
            return this->edDate;
        }
        
        string getprofCenter(){
            return this->profCenter;
        }

         string getPriority(){
            return this->priority;
        }

        int getNoOfEmp(){
            return this->noOfEmp;
        }
        
        int getNoOfAllocated(){
            return this->noOfAllocated;
        }

               
      string getprojId(){
            return this->projId;
        }

        //***********
        void setType(string type)
        {
            this->type = type;
        }
        void setdesc(string desc){
            this->desc=desc;
        }
       
        int setclientName(string clientName){
              if(validBu(clientName)){
                     this->clientName=clientName;
                     return 1;
                }else{
                     return 0;
                }
        }

        int setstDate(string stDate){
                if(validDate(stDate)){
                this->stDate=stDate;
                return 1;
            }else{
                    return 0;
            }
        }

        int setedDate(string edDate){
          
            if(validDate(edDate)){
                this->edDate=edDate;
                return 1;
            }else{
                    return 0;
            }
        }
        
        void setprofCenter(string profCenter){
            this->profCenter=profCenter;
        }

        int setPriority(string priority){
            
               if(validPriority(priority)){
                    this->priority=priority;
                    return 1;
                }else{
                    return 0;
                }
        }

        void setNoOfEmp(int noOfEmp){
            this->noOfEmp=noOfEmp;
        }       

        void setNoOfAllocated(int noOfAllocated){
            this->noOfAllocated=noOfAllocated;
        }       
        
        //***********

       virtual void display(){
          
            cout<<" Project Id: "<<this->projId;
            cout<<" Project Type: "<<this->type;
            cout<<" FIRST NAME: "<<this->desc;
            cout<<" LAST NAME: "<<this->clientName;
            cout<<" PHONE 1: "<<this->stDate;
            cout<<" PHONE 2: "<<this->edDate;
            cout<<" PROFIT CENTER:"<<this->profCenter;
            cout<<" PRIORITY: "<<this->priority;
            cout<<" NUMBER OF EMPLOYEES: "<<this->noOfEmp;
            cout<<" NUMBER OF Allocated EMPLOYEES : "<<this->noOfAllocated<<endl;
        }
    
};
class telecom : public Project
{
    string internetProvider;
    string  satelliteLinks;
    string  telecomStandards;
    public :
    telecom():Project(){}
        telecom(string projId,string type,string desc,string clientName, string stDate, string edDate, string profCenter, string priority, int noOfEmp,int noOfAllocated,string internetProvider,string  satelliteLinks,string  telecomStandards):Project( projId,type,desc,clientName,stDate,  edDate,  profCenter,  priority, noOfEmp,noOfAllocated)
        {
            this->internetProvider = internetProvider;
            this->satelliteLinks = satelliteLinks;
            this->telecomStandards = telecomStandards;
        }
    void setInternetProvider(string internetProvider)
    {
        this->internetProvider = internetProvider;
    }
    void setSatelliteLinks(string satelliteLinks)
    {
       this->satelliteLinks = satelliteLinks; 
    }
    void setTelecomStandards(string  telecomStandards)
    {
       this->telecomStandards = telecomStandards; 
    }

    //==================================================
    string getInternetProvider()
    {
        return  this->internetProvider;
    }
    string getSatelliteLinks()
    {
        return this->satelliteLinks;
    }
    string getTelecomStandards()
    {
        return this->telecomStandards;
    }
    void display(){
         cout<<"teecom display"<<endl;
            Project::display();
            cout<<"\n:internetProvider"<<this->internetProvider<<endl;
            cout<<"\n:satelliteLinks "<<this->satelliteLinks<<endl;
            cout<<"\n:telecomStandards "<<this->telecomStandards<<endl;
    }

};
class banking : public Project
{
    string currentAccountModulePurchased;
    string loanAccountModulePurchased ;
    string  customizations  ;
    public :
    banking():Project(){}
        banking(string projId,string type,string desc, string clientName, string stDate, string edDate, string profCenter, string priority, int noOfEmp,int noOfAllocated,string currentAccountModulePurchased,string loanAccountModulePurchased,string  customizations ):Project(projId,type, desc,clientName,stDate,  edDate,  profCenter,  priority, noOfEmp , noOfAllocated)
        {
            this->currentAccountModulePurchased = currentAccountModulePurchased;
            this->loanAccountModulePurchased = loanAccountModulePurchased;
            this->customizations= customizations;
        }
    void setCurrentAccountModulePurchased(string currentAccountModulePurchased)
    {
        this->currentAccountModulePurchased = currentAccountModulePurchased;
    }
    void setLoanAccountModulePurchased (string loanAccountModulePurchased )
    {
       this->loanAccountModulePurchased  = loanAccountModulePurchased ; 
    }
    void setCustomizations(string customizations )
    {
       this->customizations = customizations; 
    }

    //==================================================
    string getCurrentAccountModulePurchased()
    {
        return this->currentAccountModulePurchased;
    }
    string getLoanAccountModulePurchased ()
    {
        return this->loanAccountModulePurchased;
    }
    string getCustomizations()
    {
       return this->customizations;
    }
    void display(){
            cout<<"Banking display"<<endl;
            Project::display();
            cout<<"\n:currentAccountModulePurchased"<<this->currentAccountModulePurchased<<endl;
            cout<<"\n: loanAccountModulePurchased"<<this->loanAccountModulePurchased<<endl;
            cout<<"\n:customizations "<<this->customizations<<endl;
    }

};

/*
Project addPrj(){
            int n;
            string desc;
            string clientName;
            string stDate;
            string edDate;
            string profCenter;
            string priority;
            string noOfEmp;

            cout<<"\nENTER THE JOB DESCRIPTION: "<<endl;
            getline(cin,desc);
            //getchar();
            cout<<"\nENTER THE CLIENT NAME: "<<endl;
            getline(cin,clientName);
            //getchar();
            cout<<"\nENTER THE START Date: "<<endl;
            getline(cin,stDate);
            //getchar();
            cout<<"\nENTER THE END Date: "<<endl;
            getline(cin,edDate);
            //getchar();
            cout<<"\nENTER THE PROFIT CENTER: "<<endl;
            getline(cin,profCenter);
            //getchar();
            cout<<"\nENTER THE PRIORITY: "<<endl;
            getline(cin,priority);
            //cin>>priority;
           // getchar();
            cout<<"\nENTER THE NUMBER OF EMPLOYEES REQUIRED: "<<endl;
            cin>>noOfEmp;
            //getline(cin,noOfEmp);
            getchar();
            Project temp(desc,clientName,stDate,edDate,profCenter,priority,noOfEmp);
            //temp();
            return temp;
}*/


//int Project::projId=1000;