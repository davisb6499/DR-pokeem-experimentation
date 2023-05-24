NewBirchLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewBirchLab_EventScript_BallDefault
	.byte 0


NewBirchLab_EventScript_BallDefault::
	setvar VAR_UNUSED_0x40F7, 0
	return


NewBirchLab_EventScript_Azurill::
	lockall
	faceplayer
	goto_if_unset FLAG_UNUSED_0x020, NewBirchLab_EventScript_Azurill_4
NewBirchLab_EventScript_Azurill_3:
	msgbox NewBirchLab_EventScript_Azurill_Text_3
NewBirchLab_EventScript_Azurill_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Azurill_2:
	msgbox NewBirchLab_EventScript_Azurill_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Azurill_9
	msgbox NewBirchLab_EventScript_Azurill_Text_2
	goto NewBirchLab_EventScript_Azurill_1

NewBirchLab_EventScript_Azurill_4:
	goto_if_unset FLAG_UNUSED_0x021, NewBirchLab_EventScript_Azurill_6
	goto NewBirchLab_EventScript_Azurill_3

NewBirchLab_EventScript_Azurill_6:
	goto_if_unset FLAG_UNUSED_0x022, NewBirchLab_EventScript_Azurill_2
	goto NewBirchLab_EventScript_Azurill_3

NewBirchLab_EventScript_Azurill_9:
	compare VAR_UNUSED_0x40F7, 2
	goto_if_lt NewBirchLab_EventScript_Azurill_13
	setvar VAR_UNUSED_0x40F7, 0
NewBirchLab_EventScript_Azurill_12:
	msgbox NewBirchLab_EventScript_Azurill_Text_1
	goto NewBirchLab_EventScript_Azurill_1

NewBirchLab_EventScript_Azurill_13:
	addvar VAR_UNUSED_0x40F7, 1
	goto NewBirchLab_EventScript_Azurill_12


NewBirchLab_EventScript_PokeballThree::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewBirchLab_EventScript_PokeballThree_4
NewBirchLab_EventScript_PokeballThree_3:
	msgbox NewBirchLab_EventScript_PokeballThree_Text_0
NewBirchLab_EventScript_PokeballThree_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_PokeballThree_2:
	switch VAR_UNUSED_0x40F7
	case 0, NewBirchLab_EventScript_PokeballThree_10
	case 1, NewBirchLab_EventScript_PokeballThree_11
	case 2, NewBirchLab_EventScript_PokeballThree_12
	goto NewBirchLab_EventScript_PokeballThree_1

NewBirchLab_EventScript_PokeballThree_4:
	goto_if_unset FLAG_UNUSED_0x021, NewBirchLab_EventScript_PokeballThree_6
	goto NewBirchLab_EventScript_PokeballThree_3

NewBirchLab_EventScript_PokeballThree_6:
	goto_if_unset FLAG_UNUSED_0x022, NewBirchLab_EventScript_PokeballThree_2
	goto NewBirchLab_EventScript_PokeballThree_3

NewBirchLab_EventScript_PokeballThree_10:
	call NewBirchLab_EventScript_Mudkip
	goto NewBirchLab_EventScript_PokeballThree_1

NewBirchLab_EventScript_PokeballThree_11:
	call NewBirchLab_EventScript_Squirtle
	goto NewBirchLab_EventScript_PokeballThree_1

NewBirchLab_EventScript_PokeballThree_12:
	call NewBirchLab_EventScript_Totodile
	goto NewBirchLab_EventScript_PokeballThree_1


NewBirchLab_EventScript_PokeballTwo::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewBirchLab_EventScript_PokeballTwo_4
NewBirchLab_EventScript_PokeballTwo_3:
	msgbox NewBirchLab_EventScript_PokeballThree_Text_0
NewBirchLab_EventScript_PokeballTwo_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_PokeballTwo_2:
	switch VAR_UNUSED_0x40F7
	case 0, NewBirchLab_EventScript_PokeballTwo_10
	case 1, NewBirchLab_EventScript_PokeballTwo_11
	case 2, NewBirchLab_EventScript_PokeballTwo_12
	goto NewBirchLab_EventScript_PokeballTwo_1

NewBirchLab_EventScript_PokeballTwo_4:
	goto_if_unset FLAG_UNUSED_0x021, NewBirchLab_EventScript_PokeballTwo_6
	goto NewBirchLab_EventScript_PokeballTwo_3

NewBirchLab_EventScript_PokeballTwo_6:
	goto_if_unset FLAG_UNUSED_0x022, NewBirchLab_EventScript_PokeballTwo_2
	goto NewBirchLab_EventScript_PokeballTwo_3

NewBirchLab_EventScript_PokeballTwo_10:
	call NewBirchLab_EventScript_Torchic
	goto NewBirchLab_EventScript_PokeballTwo_1

NewBirchLab_EventScript_PokeballTwo_11:
	call NewBirchLab_EventScript_Charmander
	goto NewBirchLab_EventScript_PokeballTwo_1

NewBirchLab_EventScript_PokeballTwo_12:
	call NewBirchLab_EventScript_Cyndaquil
	goto NewBirchLab_EventScript_PokeballTwo_1


NewBirchLab_EventScript_PokeballOne::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewBirchLab_EventScript_PokeballOne_4
NewBirchLab_EventScript_PokeballOne_3:
	msgbox NewBirchLab_EventScript_PokeballThree_Text_0
NewBirchLab_EventScript_PokeballOne_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_PokeballOne_2:
	switch VAR_UNUSED_0x40F7
	case 0, NewBirchLab_EventScript_PokeballOne_10
	case 1, NewBirchLab_EventScript_PokeballOne_11
	case 2, NewBirchLab_EventScript_PokeballOne_12
	goto NewBirchLab_EventScript_PokeballOne_1

NewBirchLab_EventScript_PokeballOne_4:
	goto_if_unset FLAG_UNUSED_0x021, NewBirchLab_EventScript_PokeballOne_6
	goto NewBirchLab_EventScript_PokeballOne_3

NewBirchLab_EventScript_PokeballOne_6:
	goto_if_unset FLAG_UNUSED_0x022, NewBirchLab_EventScript_PokeballOne_2
	goto NewBirchLab_EventScript_PokeballOne_3

NewBirchLab_EventScript_PokeballOne_10:
	call NewBirchLab_EventScript_Treecko
	goto NewBirchLab_EventScript_PokeballOne_1

NewBirchLab_EventScript_PokeballOne_11:
	call NewBirchLab_EventScript_Bulbasaur
	goto NewBirchLab_EventScript_PokeballOne_1

NewBirchLab_EventScript_PokeballOne_12:
	call NewBirchLab_EventScript_Chikorita
	goto NewBirchLab_EventScript_PokeballOne_1


NewBirchLab_EventScript_Bulbasaur::
	lockall
	showmonpic SPECIES_BULBASAUR, 10, 3
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Bulbasaur_2
	hidemonpic
	msgbox NewLab_NotChosen
NewBirchLab_EventScript_Bulbasaur_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Bulbasaur_2:
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_BULBASAUR, 50, ITEM_ABILITY_PATCH
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Bulbasaur_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Bulbasaur_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_2
	goto NewBirchLab_EventScript_Bulbasaur_1

NewBirchLab_EventScript_Bulbasaur_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknamePartyMon
	goto NewBirchLab_EventScript_Bulbasaur_1

NewBirchLab_EventScript_Bulbasaur_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknameBoxMon
	goto NewBirchLab_EventScript_Bulbasaur_1


NewBirchLab_EventScript_Chikorita::
	lockall
	showmonpic SPECIES_CHIKORITA, 10, 3
	msgbox NewBirchLab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Chikorita_2
	hidemonpic
	msgbox NewLab_NotChosen
NewBirchLab_EventScript_Chikorita_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Chikorita_2:
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_CHIKORITA, 50, ITEM_ABILITY_PATCH
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Chikorita_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Chikorita_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_2
	goto NewBirchLab_EventScript_Chikorita_1

NewBirchLab_EventScript_Chikorita_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Chikorita_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknamePartyMon
	goto NewBirchLab_EventScript_Chikorita_1

NewBirchLab_EventScript_Chikorita_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Chikorita_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknameBoxMon
	goto NewBirchLab_EventScript_Chikorita_1


NewBirchLab_EventScript_Treecko::
	lockall
	showmonpic SPECIES_TREECKO, 10, 3
	msgbox NewBirchLab_EventScript_Treecko_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Treecko_2
	hidemonpic
	msgbox NewLab_NotChosen
NewBirchLab_EventScript_Treecko_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Treecko_2:
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_TREECKO, 50, ITEM_ABILITY_PATCH
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Treecko_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Treecko_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_2
	goto NewBirchLab_EventScript_Treecko_1

NewBirchLab_EventScript_Treecko_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Treecko_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknamePartyMon
	goto NewBirchLab_EventScript_Treecko_1

NewBirchLab_EventScript_Treecko_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Treecko_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x020
	call NicknameBoxMon
	goto NewBirchLab_EventScript_Treecko_1


NewBirchLab_EventScript_Charmander::
	lockall
	showmonpic SPECIES_CHARMANDER, 10, 3
	msgbox NewBirchLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Charmander_2
	hidemonpic
	msgbox NewLab_NotChosen
NewBirchLab_EventScript_Charmander_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Charmander_2:
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_CHARMANDER, 50, ITEM_ABILITY_PATCH
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Charmander_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Charmander_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_2
	goto NewBirchLab_EventScript_Charmander_1

NewBirchLab_EventScript_Charmander_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Charmander_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x021
	call NicknamePartyMon
	goto NewBirchLab_EventScript_Charmander_1

NewBirchLab_EventScript_Charmander_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Charmander_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x021
	call NicknameBoxMon
	goto NewBirchLab_EventScript_Charmander_1


NewBirchLab_EventScript_Cyndaquil::
	lockall
	showmonpic SPECIES_CYNDAQUIL, 10, 3
	msgbox NewBirchLab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Cyndaquil_2
	hidemonpic
	msgbox NewLab_NotChosen
NewBirchLab_EventScript_Cyndaquil_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Cyndaquil_2:
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_CYNDAQUIL, 50, ITEM_ABILITY_PATCH
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Cyndaquil_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Cyndaquil_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_2
	goto NewBirchLab_EventScript_Cyndaquil_1

NewBirchLab_EventScript_Cyndaquil_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Cyndaquil_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x021
	call NicknamePartyMon
	goto NewBirchLab_EventScript_Cyndaquil_1

NewBirchLab_EventScript_Cyndaquil_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Cyndaquil_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x021
	call NicknameBoxMon
	goto NewBirchLab_EventScript_Cyndaquil_1


NewBirchLab_EventScript_Torchic::
	lockall
	showmonpic SPECIES_TORCHIC, 10, 3
	msgbox NewBirchLab_EventScript_Torchic_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Torchic_2
	hidemonpic
	msgbox NewLab_NotChosen
NewBirchLab_EventScript_Torchic_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Torchic_2:
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_TORCHIC, 50, ITEM_ABILITY_PATCH
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Torchic_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Torchic_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_2
	goto NewBirchLab_EventScript_Torchic_1

NewBirchLab_EventScript_Torchic_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Torchic_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x021
	call NicknamePartyMon
	goto NewBirchLab_EventScript_Torchic_1

NewBirchLab_EventScript_Torchic_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Torchic_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x021
	call NicknameBoxMon
	goto NewBirchLab_EventScript_Torchic_1


NewBirchLab_EventScript_Squirtle::
	lockall
	showmonpic SPECIES_SQUIRTLE, 10, 3
	msgbox NewBirchLab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Squirtle_2
	hidemonpic
	msgbox NewLab_NotChosen
NewBirchLab_EventScript_Squirtle_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Squirtle_2:
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_SQUIRTLE, 50, ITEM_ABILITY_PATCH
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Squirtle_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Squirtle_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_2
	goto NewBirchLab_EventScript_Squirtle_1

NewBirchLab_EventScript_Squirtle_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Squirtle_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x022
	call NicknamePartyMon
	goto NewBirchLab_EventScript_Squirtle_1

NewBirchLab_EventScript_Squirtle_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Squirtle_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x022
	call NicknameBoxMon
	goto NewBirchLab_EventScript_Squirtle_1


NewBirchLab_EventScript_Totodile::
	lockall
	showmonpic SPECIES_TOTODILE, 10, 3
	msgbox NewBirchLab_EventScript_Totodile_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Totodile_2
	hidemonpic
	msgbox NewLab_NotChosen
NewBirchLab_EventScript_Totodile_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Totodile_2:
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_TOTODILE, 50, ITEM_ABILITY_PATCH
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Totodile_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Totodile_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_2
	goto NewBirchLab_EventScript_Totodile_1

NewBirchLab_EventScript_Totodile_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Totodile_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x022
	call NicknamePartyMon
	goto NewBirchLab_EventScript_Totodile_1

NewBirchLab_EventScript_Totodile_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Totodile_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x022
	call NicknameBoxMon
	goto NewBirchLab_EventScript_Totodile_1


NewBirchLab_EventScript_Mudkip::
	lockall
	showmonpic SPECIES_MUDKIP, 10, 3
	msgbox NewBirchLab_EventScript_Mudkip_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Mudkip_2
	hidemonpic
	msgbox NewLab_NotChosen
NewBirchLab_EventScript_Mudkip_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Mudkip_2:
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_MUDKIP, 50, ITEM_ABILITY_PATCH
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Mudkip_5
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Mudkip_6
	hidemonpic
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_2
	goto NewBirchLab_EventScript_Mudkip_1

NewBirchLab_EventScript_Mudkip_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Mudkip_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x022
	call NicknamePartyMon
	goto NewBirchLab_EventScript_Mudkip_1

NewBirchLab_EventScript_Mudkip_6:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Mudkip_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x022
	call NicknameBoxMon
	goto NewBirchLab_EventScript_Mudkip_1


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewBirchLab_EventScript_Azurill_Text_0:
	.string "Do you want other options?$"

NewBirchLab_EventScript_Azurill_Text_1:
	.string "New generation displayed.$"

NewBirchLab_EventScript_Azurill_Text_2:
	.string "Choose wisely.$"

NewBirchLab_EventScript_Azurill_Text_3:
	.string "Take care of your Pokemon!$"

NewBirchLab_EventScript_PokeballThree_Text_0:
	.string "Better only take one!$"

NewBirchLab_EventScript_Bulbasaur_Text_0:
	.string "Do you want to choose Bulbasaur?$"

NewBirchLab_EventScript_Bulbasaur_Text_1:
	.string "Received Bulbasaur!$"

NewBirchLab_EventScript_Bulbasaur_Text_2:
	.string "You have no room for this Pokemon!$"

NewBirchLab_EventScript_Chikorita_Text_0:
	.string "Do you want to choose Chikorita?$"

NewBirchLab_EventScript_Chikorita_Text_1:
	.string "Received Chikorita!$"

NewBirchLab_EventScript_Treecko_Text_0:
	.string "Do you want to choose Treecko?$"

NewBirchLab_EventScript_Treecko_Text_1:
	.string "Received Treecko!$"

NewBirchLab_EventScript_Charmander_Text_0:
	.string "Do you want to choose Charmander?$"

NewBirchLab_EventScript_Charmander_Text_1:
	.string "Received Charmander!$"

NewBirchLab_EventScript_Cyndaquil_Text_0:
	.string "Do you want to choose Cyndaquil?$"

NewBirchLab_EventScript_Cyndaquil_Text_1:
	.string "Received Cyndaquil!$"

NewBirchLab_EventScript_Torchic_Text_0:
	.string "Do you want to choose Torchic?$"

NewBirchLab_EventScript_Torchic_Text_1:
	.string "Received Torchic!$"

NewBirchLab_EventScript_Squirtle_Text_0:
	.string "Do you want to choose Squirtle?$"

NewBirchLab_EventScript_Squirtle_Text_1:
	.string "Received Squirtle!$"

NewBirchLab_EventScript_Totodile_Text_0:
	.string "Do you want to choose Totodile?$"

NewBirchLab_EventScript_Totodile_Text_1:
	.string "Received Totodile!$"

NewBirchLab_EventScript_Mudkip_Text_0:
	.string "Do you want to choose Mudkip?$"

NewBirchLab_EventScript_Mudkip_Text_1:
	.string "Received Mudkip!$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
	.string "Transferred to PC.$"

NewLab_NotChosen::
	.string "You did not choose the Pokemon.$"
