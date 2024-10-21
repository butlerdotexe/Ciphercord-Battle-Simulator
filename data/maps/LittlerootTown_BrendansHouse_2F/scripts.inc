LittlerootTown_BrendansHouse_2F_MapScripts::
	.byte 0


BrendandsHouse_2F_Squirtle::
# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Squirtle_Text_0, MSGBOX_YESNO
# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Squirtle_2
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Squirtle_1:
# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Squirtle_2:
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5, ITEM_ORAN_BERRY
# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Squirtle_Text_1
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 1
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Squirtle_1


BrendandsHouse_2F_Charmander::
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Charmander_Text_0, MSGBOX_YESNO
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Charmander_2
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Charmander_1:
# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Charmander_2:
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_CHARMANDER, 5, ITEM_ORAN_BERRY
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Charmander_Text_1
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 1
# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Charmander_1


BrendandsHouse_2F_Bulbasaur::
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Bulbasaur_Text_0, MSGBOX_YESNO
# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Bulbasaur_2
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Bulbasaur_1:
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Bulbasaur_2:
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_BULBASAUR, 5, ITEM_ORAN_BERRY
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Bulbasaur_Text_1
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 1
# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Bulbasaur_1


BrendandsHouse_2F_Totodile::
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Totodile_Text_0, MSGBOX_YESNO
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Totodile_2
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Totodile_1:
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Totodile_2:
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_TOTODILE, 5, ITEM_ORAN_BERRY
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Totodile_Text_1
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 1
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Totodile_1


BrendandsHouse_2F_Cyndaquil::
# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Cyndaquil_Text_0, MSGBOX_YESNO
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Cyndaquil_2
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Cyndaquil_1:
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Cyndaquil_2:
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_ORAN_BERRY
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Cyndaquil_Text_1
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 1
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Cyndaquil_1


BrendandsHouse_2F_Chikorita::
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Chikorita_Text_0, MSGBOX_YESNO
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Chikorita_2
# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Chikorita_1:
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Chikorita_2:
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_ORAN_BERRY
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Chikorita_Text_1
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 1
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Chikorita_1


BrendandsHouse_2F_Mudkip::
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Mudkip_Text_0, MSGBOX_YESNO
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Mudkip_2
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Mudkip_1:
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Mudkip_2:
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_MUDKIP, 5, ITEM_ORAN_BERRY
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Mudkip_Text_1
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 1
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Mudkip_1


BrendandsHouse_2F_Torchic::
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Torchic_Text_0, MSGBOX_YESNO
# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Torchic_2
# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Torchic_1:
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Torchic_2:
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_TORCHIC, 5, ITEM_ORAN_BERRY
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Torchic_Text_1
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 2
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Torchic_1


BrendandsHouse_2F_Treecko::
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Treecko_Text_0, MSGBOX_YESNO
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Treecko_2
# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Treecko_1:
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Treecko_2:
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_TREECKO, 5, ITEM_ORAN_BERRY
# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Treecko_Text_1
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Treecko_1


BrendandsHouse_2F_Piplup::
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Piplup_Text_0, MSGBOX_YESNO
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Piplup_2
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Piplup_1:
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Piplup_2:
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_PIPLUP, 5, ITEM_ORAN_BERRY
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Piplup_Text_1
# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Piplup_1


BrendandsHouse_2F_Chimchar::
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Chimchar_Text_0, MSGBOX_YESNO
# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Chimchar_2
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Chimchar_1:
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Chimchar_2:
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5, ITEM_ORAN_BERRY
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Chimchar_Text_1
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Chimchar_1


BrendandsHouse_2F_Turtwig::
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Turtwig_Text_0, MSGBOX_YESNO
# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Turtwig_2
# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Turtwig_1:
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Turtwig_2:
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_TURTWIG, 5, ITEM_ORAN_BERRY
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Turtwig_Text_1
# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Turtwig_1


BrendandsHouse_2F_Oshawott::
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Oshawott_Text_0, MSGBOX_YESNO
# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Oshawott_2
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Oshawott_1:
# 296 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Oshawott_2:
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_ORAN_BERRY
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Oshawott_Text_1
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Oshawott_1


BrendandsHouse_2F_Tepig::
# 303 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 304 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Tepig_Text_0, MSGBOX_YESNO
# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Tepig_2
# 316 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 317 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Tepig_1:
# 319 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 320 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 321 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Tepig_2:
# 307 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_TEPIG, 5, ITEM_ORAN_BERRY
# 308 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 309 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Tepig_Text_1
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 312 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 313 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Tepig_1


BrendandsHouse_2F_Snivy::
# 326 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 327 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Snivy_Text_0, MSGBOX_YESNO
# 329 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Snivy_2
# 339 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 340 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Snivy_1:
# 342 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 343 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 344 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Snivy_2:
# 330 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_SNIVY, 5, ITEM_ORAN_BERRY
# 331 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 332 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 333 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Snivy_Text_1
# 334 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 335 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 336 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Snivy_1


BrendandsHouse_2F_Froakie::
# 349 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 350 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 351 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Froakie_Text_0, MSGBOX_YESNO
# 352 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Froakie_2
# 362 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 363 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Froakie_1:
# 365 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 366 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 367 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Froakie_2:
# 353 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_FROAKIE, 5, ITEM_ORAN_BERRY
# 354 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 355 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 356 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Froakie_Text_1
# 357 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 358 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 359 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Froakie_1


BrendandsHouse_2F_Fennekin::
# 372 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 373 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 374 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Fennekin_Text_0, MSGBOX_YESNO
# 375 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Fennekin_2
# 385 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 386 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Fennekin_1:
# 388 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 389 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 390 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Fennekin_2:
# 376 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_FENNEKIN, 5, ITEM_ORAN_BERRY
# 377 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 378 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 379 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Fennekin_Text_1
# 380 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 381 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 382 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Fennekin_1


BrendandsHouse_2F_Chespin::
# 395 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 396 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 397 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Chespin_Text_0, MSGBOX_YESNO
# 398 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Chespin_2
# 408 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 409 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Chespin_1:
# 411 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 412 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 413 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Chespin_2:
# 399 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_CHESPIN, 5, ITEM_ORAN_BERRY
# 400 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 401 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 402 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Chespin_Text_1
# 403 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 404 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 405 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Chespin_1


BrendandsHouse_2F_Popplio::
# 418 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 419 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 420 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Popplio_Text_0, MSGBOX_YESNO
# 421 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Popplio_2
# 431 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 432 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Popplio_1:
# 434 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 435 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 436 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Popplio_2:
# 422 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_POPPLIO, 5, ITEM_ORAN_BERRY
# 423 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 424 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 425 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Popplio_Text_1
# 426 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 427 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 428 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Popplio_1


BrendandsHouse_2F_Litten::
# 441 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 442 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 443 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Litten_Text_0, MSGBOX_YESNO
# 444 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Litten_2
# 454 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 455 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Litten_1:
# 457 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 458 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 459 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Litten_2:
# 445 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_LITTEN, 5, ITEM_ORAN_BERRY
# 446 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 447 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 448 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Litten_Text_1
# 449 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 450 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 451 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Litten_1


BrendandsHouse_2F_Rowlet::
# 464 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 465 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 466 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Rowlet_Text_0, MSGBOX_YESNO
# 467 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Rowlet_2
# 477 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 478 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Rowlet_1:
# 480 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 481 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 482 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Rowlet_2:
# 468 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_ROWLET, 5, ITEM_ORAN_BERRY
# 469 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 470 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 471 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Rowlet_Text_1
# 472 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 473 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 474 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Rowlet_1


BrendandsHouse_2F_Sobble::
# 487 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 488 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
# 489 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Sobble_Text_0, MSGBOX_YESNO
# 490 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Sobble_2
# 500 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 501 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Sobble_1:
# 503 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 504 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 505 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Sobble_2:
# 491 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_SOBBLE, 5, ITEM_ORAN_BERRY
# 492 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 493 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 494 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Sobble_Text_1
# 495 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 496 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 497 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Sobble_1


BrendandsHouse_2F_Scorbunny::
# 510 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 511 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 512 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Scorbunny_Text_0, MSGBOX_YESNO
# 513 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Scorbunny_2
# 523 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 524 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Scorbunny_1:
# 526 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 527 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 528 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Scorbunny_2:
# 514 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5, ITEM_ORAN_BERRY
# 515 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 516 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 517 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Scorbunny_Text_1
# 518 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 519 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 520 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Scorbunny_1


BrendandsHouse_2F_Grookey::
# 533 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 534 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 535 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Grookey_Text_0, MSGBOX_YESNO
# 536 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Grookey_2
# 546 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 547 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Grookey_1:
# 549 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 550 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 551 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Grookey_2:
# 537 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_GROOKEY, 5, ITEM_ORAN_BERRY
# 538 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 539 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 540 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Grookey_Text_1
# 541 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 542 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 543 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Grookey_1


BrendandsHouse_2F_Quaxly::
# 556 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 557 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 558 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Quaxly_Text_0, MSGBOX_YESNO
# 559 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Quaxly_2
# 569 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 570 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Quaxly_1:
# 572 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 573 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 574 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Quaxly_2:
# 560 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_QUAXLY, 5, ITEM_ORAN_BERRY
# 561 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 562 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 563 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Quaxly_Text_1
# 564 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 565 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 566 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Quaxly_1


BrendandsHouse_2F_Fuecoco::
# 579 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 580 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 581 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Fuecoco_Text_0, MSGBOX_YESNO
# 582 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Fuecoco_2
# 592 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 593 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Fuecoco_1:
# 595 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 596 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 597 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Fuecoco_2:
# 583 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_FUECOCO, 5, ITEM_ORAN_BERRY
# 584 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 585 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Fuecoco_Text_1
# 587 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 588 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 589 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Fuecoco_1


BrendandsHouse_2F_Sprigatito::
# 602 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 603 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 604 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Sprigatito_Text_0, MSGBOX_YESNO
# 605 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Sprigatito_2
# 615 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 616 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Sprigatito_1:
# 618 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 619 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 620 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Sprigatito_2:
# 606 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5, ITEM_ORAN_BERRY
# 607 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 608 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 609 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Sprigatito_Text_1
# 610 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 611 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 612 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Sprigatito_1


BrendandsHouse_2F_Pikachu::
# 625 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 626 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_PIKACHU, 10, 3
# 627 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Pikachu_Text_0, MSGBOX_YESNO
# 628 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Pikachu_2
# 638 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 639 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Pikachu_1:
# 641 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 642 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 643 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Pikachu_2:
# 629 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_PIKACHU, 5, ITEM_ORAN_BERRY
# 630 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 631 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 632 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Pikachu_Text_1
# 633 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 634 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 635 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Pikachu_1


BrendandsHouse_2F_Eevee::
# 648 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 649 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 3
# 650 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Eevee_Text_0, MSGBOX_YESNO
# 651 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BrendandsHouse_2F_Eevee_2
# 661 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 662 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NewProfessor_NotChosen
BrendandsHouse_2F_Eevee_1:
# 664 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 10, 10
# 665 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmessage
# 666 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
	end

BrendandsHouse_2F_Eevee_2:
# 652 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_ORAN_BERRY
# 653 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 654 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 655 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox BrendandsHouse_2F_Eevee_Text_1
# 656 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	removeobject 3
# 657 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 658 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call NicknamePartyMon
	goto BrendandsHouse_2F_Eevee_1


NicknamePartyMon::
# 672 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 673 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 674 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 675 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 676 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 682 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 683 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	hidemonpic
# 684 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 687 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 685 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


BrendandsHouse_2F_Squirtle_Text_0:
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Squirtle?$"

BrendandsHouse_2F_Squirtle_Text_1:
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Squirtle$"

BrendandsHouse_2F_Charmander_Text_0:
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Charmander?$"

BrendandsHouse_2F_Charmander_Text_1:
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Charmander$"

BrendandsHouse_2F_Bulbasaur_Text_0:
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Bulbasaur?$"

BrendandsHouse_2F_Bulbasaur_Text_1:
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Bulbasaur$"

BrendandsHouse_2F_Totodile_Text_0:
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Totodile?$"

BrendandsHouse_2F_Totodile_Text_1:
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Totodile$"

BrendandsHouse_2F_Cyndaquil_Text_0:
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Cyndaquil?$"

BrendandsHouse_2F_Cyndaquil_Text_1:
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Cyndaquil$"

BrendandsHouse_2F_Chikorita_Text_0:
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Chikorita?$"

BrendandsHouse_2F_Chikorita_Text_1:
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Chikorita$"

BrendandsHouse_2F_Mudkip_Text_0:
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Mudkip?$"

BrendandsHouse_2F_Mudkip_Text_1:
# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Mudkip$"

BrendandsHouse_2F_Torchic_Text_0:
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Torchic?$"

BrendandsHouse_2F_Torchic_Text_1:
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Torchic$"

BrendandsHouse_2F_Treecko_Text_0:
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Treecko?$"

BrendandsHouse_2F_Treecko_Text_1:
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Treecko$"

BrendandsHouse_2F_Piplup_Text_0:
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Piplup?$"

BrendandsHouse_2F_Piplup_Text_1:
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Piplup$"

BrendandsHouse_2F_Chimchar_Text_0:
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Chimchar?$"

BrendandsHouse_2F_Chimchar_Text_1:
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Chimchar$"

BrendandsHouse_2F_Turtwig_Text_0:
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Turtwig?$"

BrendandsHouse_2F_Turtwig_Text_1:
# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Turtwig$"

BrendandsHouse_2F_Oshawott_Text_0:
# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Oshawott?$"

BrendandsHouse_2F_Oshawott_Text_1:
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Oshawott$"

BrendandsHouse_2F_Tepig_Text_0:
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Tepig?$"

BrendandsHouse_2F_Tepig_Text_1:
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Tepig$"

BrendandsHouse_2F_Snivy_Text_0:
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Snivy?$"

BrendandsHouse_2F_Snivy_Text_1:
# 333 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Snivy$"

BrendandsHouse_2F_Froakie_Text_0:
# 351 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Froakie?$"

BrendandsHouse_2F_Froakie_Text_1:
# 356 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Froakie$"

BrendandsHouse_2F_Fennekin_Text_0:
# 374 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Fennekin?$"

BrendandsHouse_2F_Fennekin_Text_1:
# 379 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Fennekin$"

BrendandsHouse_2F_Chespin_Text_0:
# 397 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Chespin?$"

BrendandsHouse_2F_Chespin_Text_1:
# 402 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Chespin$"

BrendandsHouse_2F_Popplio_Text_0:
# 420 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Popplio?$"

BrendandsHouse_2F_Popplio_Text_1:
# 425 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Popplio$"

BrendandsHouse_2F_Litten_Text_0:
# 443 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Litten?$"

BrendandsHouse_2F_Litten_Text_1:
# 448 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Litten$"

BrendandsHouse_2F_Rowlet_Text_0:
# 466 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Rowlet?$"

BrendandsHouse_2F_Rowlet_Text_1:
# 471 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Rowlet$"

BrendandsHouse_2F_Sobble_Text_0:
# 489 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Sobble?$"

BrendandsHouse_2F_Sobble_Text_1:
# 494 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Sobble$"

BrendandsHouse_2F_Scorbunny_Text_0:
# 512 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Scorbunny?$"

BrendandsHouse_2F_Scorbunny_Text_1:
# 517 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Scorbunny$"

BrendandsHouse_2F_Grookey_Text_0:
# 535 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Grookey?$"

BrendandsHouse_2F_Grookey_Text_1:
# 540 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Grookey$"

BrendandsHouse_2F_Quaxly_Text_0:
# 558 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Quaxly?$"

BrendandsHouse_2F_Quaxly_Text_1:
# 563 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Quaxly$"

BrendandsHouse_2F_Fuecoco_Text_0:
# 581 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Fuecoc?$"

BrendandsHouse_2F_Fuecoco_Text_1:
# 586 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Fuecoco$"

BrendandsHouse_2F_Sprigatito_Text_0:
# 604 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Sprigatito?$"

BrendandsHouse_2F_Sprigatito_Text_1:
# 609 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Sprigatito$"

BrendandsHouse_2F_Pikachu_Text_0:
# 627 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Pikachu?$"

BrendandsHouse_2F_Pikachu_Text_1:
# 632 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved PIKACHU$"

BrendandsHouse_2F_Eevee_Text_0:
# 650 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Do you want to choose Eevee?$"

BrendandsHouse_2F_Eevee_Text_1:
# 655 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Recieved Eevee$"

NicknamePartyMon_Text_0:
# 672 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Give it a nickname?$"

NewProfessor_NotChosen::
# 690 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "You did not choose the Pokemon$"
