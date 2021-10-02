/*
** EPITECH PROJECT, 2020
** Character
** File description:
** hpp
*/

class Character {
    public:
        Character(const std::string &name, int level);
        ~Character();
        void TakeDamage(int damage);
        int CloseAttack();
        int getLvl()const;
        int getPv() const;
        int getPower() const;
        int RangeAttack();
        void Heal();
        void RestorePower();
        const std::string &getName() const;
        typedef enum AttackRange {
            CLOSE,
            RANGE
        } AttackRange;
        AttackRange Range;
    protected:
        std::string _name;
        int _level;
        int Pv;
        int Energy;
        std::string _class;
        std::string _race;

        int Strength;
        int Stamina;
        int Intelligence;
        int Spirit;
        int Agility;
        /* data */
};
