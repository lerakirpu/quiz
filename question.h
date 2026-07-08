#ifndef QUESTION_H
#define QUESTION_H

#include <QString>
#include <QList>

class Question
{
public:
    Question();
    Question(const QString& text, const QList<QString>& options, 
             int correctIndex, int difficulty = 1);

    // Возвращает текст вопроса
    QString getText() const;
    
    // Возвращает список вариантов ответов
    QList<QString> getOptions() const;
    
    // Возвращает индекс правильного ответа
    int getCorrectIndex() const;
    
    // Возвращает сложность вопроса
    int getDifficulty() const;
    
    // Проверяет, правильный ли ответ выбрал игрок.
    bool isCorrect(int answerIndex) const;

private:
    QString m_text;           // Текст вопроса
    QList<QString> m_options; // Варианты ответов
    int m_correctIndex;       // Индекс правильного ответа
    int m_difficulty;         // Сложность 
};

#endif