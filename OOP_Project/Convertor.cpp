#include <bits/stdc++.h>
#include "CLASSES/area_convertors.cpp"
#include "CLASSES/length_convertors.cpp"
#include "CLASSES/temp_convertors.cpp"
#include "CLASSES/mass_convertors.cpp"
#include "CLASSES/time_convertors.cpp"
#include "CLASSES/speed_convertors.cpp"
#define ll long long
#define str string
using namespace std;
class Choice
{
    public:
string choice_Area(int c){
     string s;
    switch (c)
    {
    case 1:
        s = "Acres";
        break;
    case 2:
        s = "Square feet";
        break;
    case 3:
        s = "square inch";
        break;
    case 4:
        s = "square meter";
        break;
    case 5:
        s = "Hectares";

        break;
    }
    return s;
}
string choice_length(int c){
    string s;
    switch (c)
    {
    case 1:
        s = "Millimetres";
        break;
    case 2:
        s = "Centimetres";
        break;
    case 3:
        s = "Metres";
        break;
    case 4:
        s = "Kilometres ";
        break;
    case 5:
        s = "feet";
        break;
     case 6:
        s = "Inch";
        break;   
    }
    return s;
}
string choice_temp(int c){
    string s;
    switch (c)
    {
    case 1:
        s = "Celsius";
        break;
    case 2:
        s = "Fahrenheit";
        break;
    case 3:
        s = "Kelvin";
        break;
    }
    return s;
}
string choice_mass(int c){
      string s;
    switch (c)
    {
    case 1:
        s = "Grams";
        break;
    case 2:
        s = "kilograms";
        break;
    case 3:
        s = "Tons";
        break;
    case 4:
        s = "Pounds";
        break;
     
    }
    return s;
}
string choice_time(int c){
    string s;
    switch (c)
    {
    case 1:
        s = "Milliseconds";
        break;
    case 2:
        s = "Seconds";
        break;
    case 3:
        s = "Minutes";
        break;
    case 4:
        s = "Hours";
        break;
     case 5:
        s = "Days";
        break;
     
    }
    return s;
}
string choice_speed(int c){
     string s;
    switch (c)
    {
    case 1:
        s = "Meter per second";
        break;
    case 2:
        s = "kilometer per second";
        break;
    case 3:
        s = "kilometer per hour";
        break;
    case 4:
        s = "Mile per hour";
        break;
    }
    return s;
}
};
/*--------------------------------------------------------------*/
class Convertors:public Choice
{
    public:
void Area_conversion()
{
     Area Area_conv;
    int ch;
    float unt;
    cout << endl;
    cout << "1.Acres" << endl;
    cout << "2.Square feet" << endl;
    cout << "3.Square inch" << endl;
    cout << "4.Square meter" << endl;
    cout << "5.Hectares" << endl;
    cout << endl;
    cout << "Convert from :: " << endl;
    int c;
    cin >> c;
    string s=choice_Area(c);
    cout << "Enter number in " << s << endl;
    cin >> unt;
    float result;
    cout << endl;
    cout << endl;
    cout << "1.Acres" << endl;
    cout << "2.Square feet" << endl;
    cout << "3.Square inch" << endl;
    cout << "4.Square meter" << endl;
    cout << "5.Hectares" << endl;
    cout << endl;
    cout << endl;
    cout << "convert to unit :: " << endl;
    cin >> ch;
    switch (ch)
    {
    case 1:
        if (c == 1)
        {
           result=unt;
        }
        if (c == 2)
        { 

            result=Area_conv.sqr_feet_to_acre(unt);
        }
        if (c == 3)
        {
            result=Area_conv.sqr_inch_to_acre(unt);
        }
        if (c == 4)
        {
            result=Area_conv.sqr_mtr_to_acre(unt);
        }
        if (c == 5)
        {
            result=Area_conv.hect_to_acre(unt);
        }
        break;
    case 2:
        if (c == 1)
        {
            result=Area_conv.acres_to_sqr_feet(unt);
        }
        if (c == 2)
        {
           result=unt;
        }
        if (c == 3)
        {
            result=Area_conv.sqr_inch_to_feet(unt);
        }
        if (c == 4)
        {
            result=Area_conv.sqr_mtr_to_feet(unt);
        }
        if (c == 5)
        {
            result=Area_conv.hect_to_feet(unt);
        }
        break;
    case 3:
        if (c == 1)
        {
            result=Area_conv.acres_to_sqr_inch(unt);
        }
        if (c == 2)
        {
            result=Area_conv.sqr_feet_to_inch(unt);
        }
        if (c == 3)
        {
           result=unt;
        }
        if (c == 4)
        {
            
            result=Area_conv.sqr_mtr_to_sqr_inc(unt);
        }
        if (c == 5)
        {
            result=Area_conv.hect_to_inch(unt);
        }
        break;
    case 4:
        if (c == 1)
        {
            result=Area_conv.acres_to_sqr_mtr(unt);
        }
        if (c == 2)
        {
            result=Area_conv.sqr_feet_to_mtr(unt);
        }
        if (c == 3)
        {

            result=Area_conv.sqr_inch_to_mtr(unt);
        }
        if (c == 4)
        {
           result=unt;
        }
        if (c == 5)
        {
            result=Area_conv.hect_to_mtr(unt);
        }
        break;
    case 5:
        if (c == 1)
        {
            result=Area_conv.acres_to_hect(unt);
        }
        if (c == 2)
        {
            result=Area_conv.sqr_feet_to_hect(unt);
        }
        if (c == 3)
        {

            result=Area_conv.sqr_inch_to_hect(unt);
        }
        if (c == 4)
        {
            result=Area_conv.sqr_mtr_to_hect(unt);
        }
        if (c == 5)
        {
           result=unt;
        }
        break;
    }
 
  cout<<endl<<"------------------------"<<endl<<endl;
 cout<<unt<<" "<<s<<" = "<<result<<" "<<choice_Area(ch)<<endl; 
  cout<<endl<<"------------------------"<<endl;
}
/*--------------------------------------------------------------*/
void Length_conversion(){
int ch;
Length Len_conv;
    float unt;
    cout << endl;
    cout << "1.Millimetres" << endl;
    cout << "2.Centimetres" << endl;
    cout << "3.Metres" << endl;
    cout << "4.Kilometres" << endl;
    cout << "5.feet" << endl;
    cout << "6.Inch" << endl;
    cout << endl;
    cout << "Convert from :: " << endl;
    int c;
    float result;
    cin >> c;
    string s=choice_length(c);
    cout << "Enter number in " << s << endl;
    cin >> unt;
    cout << endl;
    cout << endl;
    cout << "1.Millimetres" << endl;
    cout << "2.Centimetres" << endl;
    cout << "3.Metres" << endl;
    cout << "4.Kilometres" << endl;
    cout << "5.feet" << endl;
    cout << "6.Inch" << endl;
    cout << endl;
    cout << endl;
    cout << "convert to unit :: " << endl;
    cin >> ch;
    switch(ch){
        case 1:

            if (c == 1)
        {
        result=unt;
             
        }
        if (c == 2)
        {
             result=Len_conv.cent_milli(unt);
        }
        if (c == 3)
        {
        result=Len_conv.met_milli(unt);             
        }
        if (c == 4)
        {
         result=Len_conv.kilo_milli(unt);    
        }
        if (c == 5)
        {
         result=Len_conv.feet_milli(unt);   
        }
        if(c==6){
            result=Len_conv.inch_milli(unt);
        }
          
          break;

    case 2:
        
            if (c == 1)
        {
             result=Len_conv.mil_cent(unt);
             
        }
        if (c == 2)
        {
           result=unt;
        }
        if (c == 3)
        {
        result=Len_conv.met_cent(unt);             
        }
        if (c == 4)
        {
         result=Len_conv.kilo_centi(unt);    
        }
        if (c == 5)
        {
         result=Len_conv.feet_centi(unt);   
        }
        if(c==6){
            result=Len_conv.inch_centi(unt);
        }
          
          break;

   case 3:
        
            if (c == 1)
        {
        result=Len_conv.mil_met(unt);             
             
        }
        if (c == 2)
        {
             result=Len_conv.cent_met(unt);
        }
        if (c == 3)
        {
        result=unt;
        }
        if (c == 4)
        {
         result=Len_conv.kilo_meter(unt);    
        }
        if (c == 5)
        {
         result=Len_conv.feet_met(unt);   
        }
        if(c==6){
            result=Len_conv.inch_met(unt);
        }
          
          break;
          
        ///////
        case 4:
        
            if (c == 1)
        {
        result=Len_conv.mil_kilo(unt);             
             
        }
        if (c == 2)
        {
             result=Len_conv.cent_kilo(unt);
        }
        if (c == 3)
        {
         result=Len_conv.met_kilo(unt);    
        }
        if (c == 4)
        {
        result=unt;
        }
        if (c == 5)
        {
         result=Len_conv.feet_kilo(unt);   
        }
        if(c==6){
            result=Len_conv.inch_kilo(unt);
        }
          
          break;
        ////
        case 5:
        
            if (c == 1)
        {
        result=Len_conv.mil_feet(unt);             
             
        }
        if (c == 2)
        {
             result=Len_conv.cent_feet(unt);
        }
        if (c == 3)
        {
         result=Len_conv.met_feet(unt);   
        }
        if (c == 4)
        {
         result=Len_conv.kilo_feet(unt);    
        }
        if (c == 5)
        {
        result=unt;
        }
        if(c==6){
            result=Len_conv.inch_foot(unt);
        }
          
          break;
          ///
        case 6:
        
            if (c == 1)
        {
        result=Len_conv.mil_inch(unt);             
             
        }
        if (c == 2)
        {
             result=Len_conv.cent_inch(unt);
        }
        if (c == 3)
        {
            result=Len_conv.met_inch(unt);
        }
        if (c == 4)
        {
         result=Len_conv.kilo_inch(unt);    
        }
        if (c == 5)
        {
         result=Len_conv.feet_inch(unt);   
        }
        if(c==6){
           result=unt;
        }
          
          break;  
    }
    cout<<endl<<"----------------------------"<<endl<<endl;
 cout<<unt<<" "<<s<<" = "<<result<<" "<<choice_length(ch)<<endl; 
  cout<<endl<<"----------------------------"<<endl;

}
/*--------------------------------------------------------------*/
void Temperature_conversion(){
    Temperature temp_conv;
     int unt;
    cout << endl;
    cout << "1.Celsius" << endl;
    cout << "2.Fahrenheit" << endl;
    cout << "3.Kelvin" << endl;
    cout << endl;
    cout << "Convert from :: " << endl;
    int c;
    cin >> c;
    string s=choice_temp(c);
    cout << "Enter number in " << s << endl;
    cin >> unt;
    cout << endl;
    cout << endl;
    cout << "1.Celsius" << endl;
    cout << "2.Fahrenheit" << endl;
    cout << "3.Kelvin" << endl;
    cout << endl;
    cout << endl;
    cout << "convert to unit :: " << endl;
    int ch;
    float result;
    cin >> ch;
    switch (ch)
    {
    case 1:
          if (c == 1)
        {
         result=unt;
        }
        if (c == 2)
        {
            result=temp_conv.fahr_cels(unt);
        }
        if (c == 3)
        {
            result=temp_conv.kelvin_cels(unt);
        }
        break;
      case 2:
          if (c == 1)
        {
            result=temp_conv.cels_fahr(unt);
        }
        if (c == 2)
        { 
            result=unt;
        }
        if (c == 3)
        {
            result=temp_conv.kelvin_fahr(unt);
        }
        break;

        case 3:
          if (c == 1)
        {
            result=temp_conv.cels_kelvin(unt);
        }
        if (c == 2)
        { 
            result=temp_conv.fahr_Kelvin(unt);

        }
        if (c == 3)
        {
        result=unt;
        }
        break;
         default:
        break;
    }
    cout<<endl<<"------------------------"<<endl<<endl;
 cout<<unt<<" "<<s<<" = "<<result<<" "<<choice_temp(ch)<<endl; 
  cout<<endl<<"------------------------"<<endl;
}
/*--------------------------------------------------------------*/
void Mass_conversion(){
    Mass mass_conv;
      int unt;
    cout << endl;
    cout << "1.Grams" << endl;
    cout << "2.kilograms" << endl;
    cout << "3.Tons" << endl;
    cout << "4.Pounds" << endl;
    cout << endl;
    cout << "Convert from :: " << endl;
    int c;
    cin >> c;
     string s=choice_mass(c);
    cout << "Enter number in " << s << endl;
    cin >> unt;
    cout << endl;
    cout << endl;
    cout << "1.Grams" << endl;
    cout << "2.kilograms" << endl;
    cout << "3.Tons" << endl;
    cout << "4.Pounds" << endl;
    cout << endl;
    cout << endl;
    cout << "convert to unit :: " << endl;
    int ch;
    float result;
    cin >> ch;
    switch (ch)
    {
    case 1:
            if (c == 1)
        {
            result=unt;
        }
        if (c == 2)
        { 
            result=mass_conv.kg_gm(unt);
        }
        if (c == 3)
        {
            result=mass_conv.tons_gm(unt);
        }
        if(c==4){
            result=mass_conv.pounds_gm(unt);
        }
        break;
        ///  /////
        case 2:
            if (c == 1)
        {
            result=mass_conv.gm_kg(unt);
        }
        if (c == 2)
        { 
            result=unt;
        }
        if (c == 3)
        {
            result=mass_conv.tons_kg(unt);
        }
        if(c==4){
            result=mass_conv.pounds_kg(unt);
        }
        break;
     case 3:
            if (c == 1)
        {
            result=mass_conv.gm_tons(unt);
        }
        if (c == 2)
        { 
            result=mass_conv.kg_tons(unt);
        }
        if (c == 3)
        {
            result=unt;
        }
        if(c==4){
            result=mass_conv.pounds_tons(unt);
        }
        break; 

        case 4:
            if (c == 1)
        {
            result=mass_conv.gm_pounds(unt);
        }
        if (c == 2)
        { 
            result=mass_conv.kg_pounds(unt);
        }
        if (c == 3)
        {
            result=mass_conv.tons_pounds(unt);
        }
        if(c==4){
            result=unt;
        }
        break; 
    default:
        break;
    }
 cout<<endl<<"------------------------"<<endl<<endl;
 cout<<unt<<" "<<s<<" = "<<result<<" "<<choice_mass(ch)<<endl; 
  cout<<endl<<"------------------------"<<endl;

}
/*--------------------------------------------------------------*/
void Time_conversion(){
    Time time_conv;
     int unt;
    cout << endl;
    cout << "1.Milliseconds" << endl;
    cout << "2.Seconds" << endl;
    cout << "3.Minutes" << endl;
    cout << "4.Hours" << endl;
    cout << "5.Days" << endl;
    cout << endl;
    cout << "Convert from :: " << endl;
    int c;
    cin >> c;
    string s=choice_time(c);
    cout << "Enter number in " << s << endl;
    cin >> unt;
    cout << endl;
    cout << endl;
   cout << "1.Milliseconds" << endl;
    cout << "2.Seconds" << endl;
    cout << "3.Minutes" << endl;
    cout << "4.Hours" << endl;
    cout << "5.Days" << endl;
    cout << endl;
    cout << endl;
    cout << "convert to unit :: " << endl;
    int ch;
    float result;
    cin >> ch;
    switch (ch)
    {
    case 1:
            if (c == 1)
        {
            result=unt;
        }
        if (c == 2)
        { 
            result=time_conv.sec_ms(unt);
        }
        if (c == 3)
        {
        result=time_conv.min_ms(unt);

        }
        if(c==4){
            result=time_conv.hrs_ms(unt);

        }
        if(c==5){
            result=time_conv.day_ms(unt);
        }
        break;
     /// 
     case 2:
            if (c == 1)
        {
            result=time_conv.ms_sec(unt);
        }
        if (c == 2)
        { 
           result=unt;
        }
        if (c == 3)
        {
        result=time_conv.min_sec(unt);

        }
        if(c==4){
            result=time_conv.hrs_sec(unt);

        }
        if(c==5){
            result=time_conv.day_sec(unt);
        }
        break;
        ///
        case 3:
            if (c == 1)
        {
            result=time_conv.ms_min(unt);
        }
        if (c == 2)
        { 
           result=time_conv.sec_min(unt);
        }
        if (c == 3)
        {   
       result=unt;
        }
        if(c==4){
            result=time_conv.hrs_min(unt);

        }
        if(c==5){
            result=time_conv.day_min(unt);
        }
        break;
        ///
        case 4:
            if (c == 1)
        {
            result=time_conv.ms_hrs(unt);
        }
        if (c == 2)
        { 
           result=time_conv.sec_hrs(unt);
        }
        if (c == 3)
        {   
            result=time_conv.min_hrs(unt);
        }
        if(c==4){
       result=unt;
        }
        if(c==5){
            result=time_conv.day_hrs(unt);
        }
        break;
     ///
        case 5:
            if (c == 1)
        {
            result=time_conv.ms_days(unt);
        }
        if (c == 2)
        { 
           result=time_conv.sec_day(unt);
        }
        if (c == 3)
        {   
            result=time_conv.min_day(unt);
        }
        if(c==4){
            result=time_conv.hrs_day(unt);
        }
        if(c==5){
        result=unt;
        }
        break;
    default:
        break;
    } 
   cout<<endl<<"------------------------"<<endl<<endl;
 cout<<unt<<" "<<s<<" = "<<result<<" "<<choice_time(ch)<<endl; 
  cout<<endl<<"------------------------"<<endl;

}
/*--------------------------------------------------------------*/
void Speed_conversion(){
    Speed speed_conv;
     int unt;
    cout << endl;
    cout << "1.Meter per second" << endl;
    cout << "2.kilometer per second" << endl;
    cout << "3.kilometer per hour" << endl;
    cout << "4.Mile per hour" << endl;

    cout << endl;
    cout << "Convert from :: " << endl;
    int c;
    cin >> c;
    string s=choice_speed(c);
    cout << "Enter number in " << s << endl;
    cin >> unt;
    cout << endl;
    cout << endl;
   cout << "1.Meter per second" << endl;
    cout << "2.kilometer per second" << endl;
    cout << "3.kilometer per hour" << endl;
    cout << "4.Mile per hour" << endl;

    cout << endl;
    cout << endl;
    cout << "Convert to unit :: " << endl;
    int ch;
    float result;
    cin >> ch;
    switch (ch)
    {
    case 1:
         if (c == 1)
        {
            result= unt;
        }
        if (c == 2)
        { 
       result=speed_conv.kmps_mps(unt );
        }
        if (c == 3)
        {
         result=speed_conv.kmph_mps(unt );
        }
        if(c==4){
        result=speed_conv.mph_mps(unt );        
        }
        break;
    /// 
     case 2:
         if (c == 1)
        {
       result=speed_conv.mps_kmps(unt );
        }
        if (c == 2)
        { 
         result=unt;
        }
        if (c == 3)
        {
         result=speed_conv.kmph_kmps(unt );
        }
        if(c==4){
        result=speed_conv.mph_kmps(unt );        
        }
        break;
        /// 
     case 3:
         if (c == 1)
        {
       result=speed_conv.mps_kmph(unt );
        }
        if (c == 2)
        { 
         result=speed_conv.kmps_kmph(unt );
        }
        if (c == 3)
        {
         result=unt;
        }
        if(c==4){
        result=speed_conv.mph_kmph(unt );        
        }
        break;
            /// 
     case 4:
         if (c == 1)
        {
       result=speed_conv.mps_mph(unt );
        }
        if (c == 2)
        { 
         result=speed_conv.kmps_mph(unt );
        }
        if (c == 3)
        {
        result=speed_conv.kmph_mph(unt );        
        }
        if(c==4){
        result=unt;
        }
        break;
    default:
        break;
    }
     cout<<endl<<"------------------------"<<endl<<endl;
 cout<<unt<<" "<<s<<" = "<<result<<" "<<choice_speed(ch)<<endl; 
  cout<<endl<<"------------------------"<<endl;

}
/*--------------------------------------------------------------*/
};
