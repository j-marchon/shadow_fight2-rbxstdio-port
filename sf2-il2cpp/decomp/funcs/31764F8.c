// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$KPBJALPCPAP @ RVA 0x31764F8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__KPBJALPCPAP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  AFFHKININGD_o *FBFPLEFCDOK;
  OHDDKGHEEPA_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined8 *puVar2;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *pNVar3;
  
  if ((DAT_04566956 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03276524 to 03376533 has its CatchHandler @ 03276658 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_4859);
    FUN_01bab630(&StringLiteral_4858);
    DAT_04566956 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).IOOHHPDCNCM;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 03276578 to 03376593 has its CatchHandler @ 03276654 */
    return;
  }
  pNVar3 = (__this->fields).IOOHHPDCNCM;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) {
    FBFPLEFCDOK = Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__GetFight
                            (pNVar3,(MethodInfo *)0x0);
                    /* try { // try from 03276594 to 03376627 has its CatchHandler @ 03276270 */
    if (FBFPLEFCDOK == (AFFHKININGD_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      puVar2 = &StringLiteral_4859;
    }
    else {
      pNVar3 = (__this->fields).IOOHHPDCNCM;
      if (pNVar3 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) goto LAB_03276630;
      __this_00 = (pNVar3->fields)._battle;
      if (__this_00 != (OHDDKGHEEPA_o *)0x0) {
        bVar1 = OHDDKGHEEPA__EPLDDILOPAJ(__this_00,FBFPLEFCDOK,(MethodInfo *)0x0);
        if (bVar1) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__MGLJMKKFNKK(__this,method_00);
          return;
        }
                    /* try { // try from 03276628 to 0337662f has its CatchHandler @ 03276660 */
        Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__EADMNHONGDH(__this,method_00);
        return;
      }
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      puVar2 = &StringLiteral_4858;
    }
    UnityEngine_Debug__LogError((Il2CppObject *)*puVar2,(MethodInfo *)0x0);
    return;
  }
LAB_03276630:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03276630 to 03376637 has its CatchHandler @ 0327666c */
  FUN_01bab8c8();
}

