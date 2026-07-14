#ifndef PLAYER_H
#define PLAYER_H

#include <QString>
#include <QDateTime>

class Player
{
public:
    Player();
    Player(const QString& name, const QString& id);

    QString getName() const;
    QString getId() const;
    int getScore() const;
    void addScore(int points);
    void resetScore();
    bool isReady() const;
    void setReady(bool ready);

private:
    QString m_name;
    QString m_id;
    int m_score;
    bool m_ready;
};