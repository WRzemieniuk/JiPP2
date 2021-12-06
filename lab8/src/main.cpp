//
// Created by weronika on 29.11.2021.
//
#include<iostream>
#include "../include/Note.h"
 using namespace std;
int main(){

    Note *note1=new TextNote();
    note1->setContent("Pierwsza stworzona notatka przez mnie.");
    cout<<"note1: "<<note1->getContent()<<endl;

    Note *listNote1=new ListNote();
    //listNote1->setContent("Pierwsza notatka");//\nDruga notka\nTrzecia");
    //cout<<listNote1->getContent();
    string list="Ala\n";
    string content[100];


//    cout<<"Tab: "<<tekst<<"cos";
//    for (int i = 0; i < 100; ++i) {
//        int pom_i=i;
//        while(tekst[pom_i] != '\n') {
//            content[i][pom_i] = tekst[pom_i];
//
//            if (tekst == "\0") {
//                content[i] = '\n';
//                break;
//            }
//            pom_i++;
//        }
//    }

    for (int i = 0; i < list.length(); ++i) {
        int pom_i=i;
        while(list[pom_i]!='\n'){
            content[i][pom_i]=list[pom_i];
            pom_i++;
        }
        content[i]='\n';

    }

    cout<<content[0];
    return 0;
}