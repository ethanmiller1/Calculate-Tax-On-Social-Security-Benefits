// constants.h

#ifndef CONSTANTS_H
#define CONSTANTS_H

// Filing Status Categories
const int SINGLE(1);          //Filing Status for Single
const int MARRIED(2);         //Filing Status for Married(Filing Jointly) 
const int MARRIEDFS(3);       //Filing Status for Married(Filing Separately) 
const int WIDOW(4);           //Filing Status for (Qualifying)Widow(er)
const int HDHOUSEHOLD(5);     //Filing Status for Head of Household(e.g., Single Parent)

// Standard Deduction Qualifiers (for determining Standard Deduction amount)
const int BLIND(1);           //You are blind
const int OVER65(1);          //You are over 65
const int NONE(0);            //NOT(OVER65 || BLIND)
const int OVR65_BLND(2);      //OVER 65 -and- BLIND

// Living Arrangement
// LA is a predefined variable in the InputData_BO data type
// Define values for Living Arrangement field LA
// where FS is:
//       SINGLE:        LA=0
//       HDHOUSEHOLD:   LA=0
//       MARRIED:       LA=1  (Filing Jointly -AND- Living together -OR- apart)
//       MARRIEDFS:     LA=2  (Lived APART from your spouse for ALL of tax year)
//       MARRIEDFS:     LA=3  (Lived with your spouse at ANY TIME during tax year)
#endif