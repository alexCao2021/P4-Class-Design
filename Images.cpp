#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//class defination
class images
{
public:
        //all required properties
        string FileName;
        string imagesType;
        string DateCreated;
        double size;
        string AuthorName;
        double width;
        double height;
        string ApertureSize;
        double Exposuretime;
        int ISOvalue;
        bool FlashEnabled;

        //constructor to initialize all values
        images(string FileName, string imagesType, string DateCreated,
               double size, string AuthorName, double width, double height,
               string ApertureSize, double Exposuretime, int ISOvalue,
               bool FlashEnabled)
        {
                this->FileName = FileName;
                this->imagesType = imagesType;
                this->DateCreated = DateCreated;
                this->size = size;
                this->AuthorName = AuthorName;
                this->width = width;
                this->height = height;
                this->ApertureSize = ApertureSize;
                this->Exposuretime = Exposuretime;
                this->ISOvalue = ISOvalue;
                this->FlashEnabled = FlashEnabled;
        }

        //getters and setters for all properties with validations
        void setFileName(string FileName) { this->FileName = FileName; }
        string getFileName() { return this->FileName; }

        //if image type is not valid then it will print error message
        void setimagesType(string imagesType) {
                if (imagesType == "PNG" or (imagesType == "GIF" or imagesType == "JPEG"))
                        this->imagesType = imagesType;
                else
                        cout << "Enter valid images type!" << endl;
        }
        string getimagesType() { return this->imagesType; }

        void setDateCreated(string DateCreated) { this->DateCreated = DateCreated; }
        string getDateCreated() { return this->DateCreated; }

        void setSize(double size) { this->size = size; }
        double getSize() { return this->size; }

        void setAuthorName(string AuthorName) { this->AuthorName = AuthorName; }
        string getAuthorName() { return this->AuthorName; }

        void setWidth(double width) { this->width = width; }
        double getWidth() { return this->width; }

        void setHeight(double height) { this->height = height; }
        double getHeight() { return this->height; }

        void setApertureSize(string ApertureSize) {
                if (ApertureSize[0] == 'f' and ApertureSize[1] == '/')
                        this->ApertureSize = ApertureSize;
                else
                        cout << "Enter valid Aperture Size!" << endl;
        }
        string getApertureSize() { return this->ApertureSize; }

        void setExposuretime(double Exposuretime) {
                if (Exposuretime < 1)
                        this->Exposuretime = Exposuretime;
                else
                        cout << "Exposure time should be less then 1" << endl;
        }
        double getExposuretime() { return this->Exposuretime; }

        void setISOvalue(int ISOvalue) { this->ISOvalue = ISOvalue; }
        int getISOvalue() { return this->ISOvalue; }

        void setFlashEnabled(bool FlashEnabled) { this->FlashEnabled = FlashEnabled; }
        bool getFlashEnabled() { return this->FlashEnabled; }

        //method to print  all data
        void PrintAll()
        {
                cout << FileName << endl;
                cout << imagesType << endl;
                cout << DateCreated << endl;
                cout << size << " MB" << endl;
                cout << AuthorName << endl;
                cout << width << endl;
                cout << height << endl;
                cout << ApertureSize << endl;
                cout << Exposuretime << endl;
                cout << ISOvalue << endl;
                cout << FlashEnabled << endl;
        }
};

//main method
int32_t main()
{

        //create class object and pass value using constructor
        images obj1("images1", "PNG", "12-12-2021", 4.5, "Urvish", 45, 60, "f/6", 0.02, 600, false);
        //call method to print all data
        obj1.PrintAll();
        return 0;
}