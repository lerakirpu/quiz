#include "question.h"

Question::Question() : m_correctIndex(-1), m_difficulty(1) {}

Question::Question(const QString& text, const QList<QString>& options,
                   int correctIndex, int difficulty)
    : m_text(text)           // Текст вопроса
    , m_options(options)     // Список вариантов ответов
    , m_correctIndex(correctIndex) // Индекс правильного ответа
    , m_difficulty(difficulty)     // Сложность вопроса 
{}

// Возвращает текст вопроса
QString Question::getText() const { return m_text; }

// Возвращает список вариантов ответов
QList<QString> Question::getOptions() const { return m_options; }

// Возвращает индекс правильного ответа
int Question::getCorrectIndex() const { return m_correctIndex; }

// Возвращает сложность вопроса
int Question::getDifficulty() const { return m_difficulty; }

// Проверяет, совпадает ли выбранный игроком ответ с правильным
bool Question::isCorrect(int answerIndex) const { return answerIndex == m_correctIndex; }