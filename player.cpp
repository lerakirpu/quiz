#include "player.h"

Player::Player() : m_score(0), m_ready(false) {}

Player::Player(const QString& name, const QString& id)
    : m_name(name), m_id(id), m_score(0), m_ready(false)
{}

QString Player::getName() const { return m_name; }
QString Player::getId() const { return m_id; }
int Player::getScore() const { return m_score; }
void Player::addScore(int points) { m_score += points; }
void Player::resetScore() { m_score = 0; }
bool Player::isReady() const { return m_ready; }
void Player::setReady(bool ready) { m_ready = ready; }
