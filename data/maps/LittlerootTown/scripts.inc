LittlerootTown_MapScripts::
	.byte 0


pokecenternurse::
# 6 "data/maps/LittlerootTown/scripts.pory"
	lock
# 7 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 8 "data/maps/LittlerootTown/scripts.pory"
	msgbox pokecenternurse_Text_0, MSGBOX_YESNO
# 9 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq pokecenternurse_1
# 15 "data/maps/LittlerootTown/scripts.pory"
	msgbox pokecenternurse_Text_1, MSGBOX_NPC
	return

pokecenternurse_1:
# 10 "data/maps/LittlerootTown/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 11 "data/maps/LittlerootTown/scripts.pory"
	release
	end


pokecenternurse_Text_0:
# 8 "data/maps/LittlerootTown/scripts.pory"
	.string "Would you like me to heal your party?$"

pokecenternurse_Text_1:
# 15 "data/maps/LittlerootTown/scripts.pory"
	.string "Have a nice day$"
