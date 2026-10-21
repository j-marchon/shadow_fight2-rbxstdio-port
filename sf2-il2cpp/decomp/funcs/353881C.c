// FightHolder$$Start @ RVA 0x353881C

void FightHolder__Start(FightHolder_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  FCJBEKHDLAF_o *pFVar2;
  MethodInfo *extraout_x1;
  FCJBEKHDLAF_o **ppFVar3;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar4;
  AFFHKININGD_o *FBFPLEFCDOK;
  
  if ((DAT_04568aad & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FightHolder_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6345);
    FUN_01bab630(&StringLiteral_6344);
    DAT_04568aad = 1;
    method = extraout_x1;
  }
  if (FightHolder_TypeInfo->static_fields->FightList == (AFFHKININGD_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_6344,(MethodInfo *)0x0);
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 == (NDPMLPGANCI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    NDPMLPGANCI__EKPAFDJIAGI
              (__this_00,3,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,(MethodInfo *)0x0
              );
  }
  pNVar4 = (__this->fields).preFight;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_6345,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields).preFight;
  FBFPLEFCDOK = FightHolder_TypeInfo->static_fields->FightList;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar2 = MGNPHCAAEIO__ECLNPCHEBFA(FBFPLEFCDOK,pNVar4,(MethodInfo *)0x0);
  ppFVar3 = &(__this->fields)._CKOGELANOLD_k__BackingField;
  *ppFVar3 = pFVar2;
  thunk_FUN_01c20e04(ppFVar3,pFVar2);
  return;
}

