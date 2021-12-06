//
// Created by weronika on 29.11.2021.
//

//kolokwieum za tydzień jak rozumiemy kod, bardziej testtowy, co robią gettery settery itd

#ifndef LAB8_NOTE_H
#define LAB8_NOTE_H

#include<iostream>
using namespace std;


class Note {
protected:
    string title;
public:
    Note(){};
   string getTitle(); //w geterach iseterach zadnych cout
   void setTitle(string);
   virtual string getContent()=0;
   virtual void setContent(string)=0;

};

class TextNote:public Note{
protected:
    string content;
public:
    TextNote(){};
    string getContent();
    void setContent(string);
};

class ListNote:public Note{
protected:
    string content[100];
public:
    ListNote(){};
    string getContent();
    void setContent(string);

};

class NoteDirector{
protected:
    string notesList[100];
public:
    NoteDirector(){};
    void addNote(string);
    void deleteNote();
    string editNote(string);
    void clearNotesList();


};

//iterujemy po calej tablicy
#endif //LAB8_NOTE_H
