// Nekki.SF2.GUI.Fight.FightScene$$CreateFight @ RVA 0x323727C

void Nekki_SF2_GUI_Fight_FightScene__CreateFight
               (Nekki_SF2_GUI_Fight_FightScene_o *__this,AFFHKININGD_o *FBFPLEFCDOK,
               PJKHAJKEHEL_o *HGEDEAAHJHN,
               System_Collections_Generic_List_PJKHAJKEHEL__o *ADKCCEDHHGO,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  FCJBEKHDLAF_o *pFVar3;
  FCJBEKHDLAF_o **ppFVar4;
  Nekki_SF2_GUI_Fight_PreFight_o **ppNVar5;
  
  if ((DAT_0456702c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<PreFight>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6358);
    DAT_0456702c = 1;
  }
  pNVar2 = (Nekki_SF2_GUI_Fight_PreFight_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<PreFight>__);
  ppNVar5 = &(__this->fields).JLJCNEPAFAO;
  *ppNVar5 = pNVar2;
  thunk_FUN_01c20e04(ppNVar5,pNVar2);
  pNVar2 = *ppNVar5;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_6358,(MethodInfo *)0x0);
  }
  pNVar2 = *ppNVar5;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pFVar3 = MGNPHCAAEIO__ECLNPCHEBFA(FBFPLEFCDOK,HGEDEAAHJHN,ADKCCEDHHGO,pNVar2,(MethodInfo *)0x0);
  ppFVar4 = &(__this->fields).NAKHBIFKBGK;
  *ppFVar4 = pFVar3;
  thunk_FUN_01c20e04(ppFVar4,pFVar3);
  return;
}

