// Nekki.SF2.GUI.RaidMapUIModule$$BJBEBBGINAH @ RVA 0x3569C2C

void Nekki_SF2_GUI_RaidMapUIModule__BJBEBBGINAH
               (Nekki_SF2_GUI_RaidMapUIModule_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o **ppNVar2;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *pNVar3;
  
  if ((DAT_04568c1a & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c1a = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields)._RaidDailyQuestsButton_k__BackingField;
  pNVar3 = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = MGNPHCAAEIO__MPGHOPABJNB((MethodInfo *)0x0);
    if (bVar1) {
      pNVar3 = Nekki_SF2_GUI_Map_RaidQuestsButton__Instantiate
                         ((__this->fields)._raidDailyQuestsButtonSpawnPos,(MethodInfo *)0x0);
      (__this->fields)._RaidDailyQuestsButton_k__BackingField = pNVar3;
      thunk_FUN_01c20e04(ppNVar2,pNVar3);
      return;
    }
  }
  return;
}

