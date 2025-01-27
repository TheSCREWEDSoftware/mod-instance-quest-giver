
enum Misc {
    NPC_QUESTGIVER = 99950,
    MAP_DEADMINES = 36, // Alliance Only Quests
    MAP_RFC = 389, // Horde Only Quests
    MAP_SCHOLOMANCE = 289; // 1x Alliance and Horde Only Quest, Rest both can do
};



class QuestGiver : public QuestGiver {

};

void QuestGiverScript() {
    new QuestGiver();
}
