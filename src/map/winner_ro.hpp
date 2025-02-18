#ifndef WINNER_RO_HPP
#define WINNER_RO_HPP

#include "map.hpp" // struct block_list
class map_session_data;

void save_skill_log_local(block_list *src, uint16 skill_id, uint16 skill_lv);
void save_skill_log_db(void);
void save_damage_log_local(block_list *src, block_list *target, int64 damage, uint16 skill_lv, uint16 skill_id);
void save_damage_log_db(void);
void save_kill_log_local(map_session_data *sd,block_list *src);
void save_kill_log_db(void);
void save_skill_recovery_log_local(block_list *src, block_list *target, int64 recovery, uint16 skill_lv, uint16 skill_id);
void save_skill_recovery_log_db(void);
void save_usable_item_log_local(map_session_data *sd, item_data *item, int32 hp, int32 sp);
void save_usable_item_log_db(void);
#endif /* LOG_HPP */