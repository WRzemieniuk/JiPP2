//
// Created by weronika on 29.11.2021.
//

#include "../include/Note.h"

void Note::setTitle(string s) {
    title=s;
}
string Note::getTitle() {
    return title;
}



void TextNote::setContent(string note) {
    content=note;
}
string TextNote::getContent() {
    return content;
}




void ListNote::setContent(string list) {
    /*content[0]=list do momentu napotkania \n
     * content[1]=od momentu ustawienia poprzedniego znaku do
     *
     * */
    for (int i = 0; i < list.length(); ++i) {
        int pom_i=i;
        while(list[i]!='\n'){
            content[i][pom_i]=list[pom_i];
            pom_i++;
        }

    }
}
string ListNote::getContent() {

    for (int i = 0; i < 100; ++i) {
        return content[i];
    }
}