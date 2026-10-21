// Nekki.SF2.GUI.Fight.PreFight$$CreateVS @ RVA 0x2FFD740

void Nekki_SF2_GUI_Fight_PreFight__CreateVS
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,PJKHAJKEHEL_o *OKBIKHHKOEN,
               System_Collections_Generic_List_PJKHAJKEHEL__o *DFGLEOANOFI,int32_t FJJJGOHDLBH,
               bool BAADKMGHNAL,bool BLOEBCBBGBK,bool EOGKCNNHPFL,bool HIOHGCIKLNF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenFight_o *pNVar2;
  
  if ((DAT_04565af7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565af7 = 1;
  }
  pNVar2 = (__this->fields).LJAILGNLPAB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).LJAILGNLPAB;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_ScreenFight__CreateVS
                (pNVar2,OKBIKHHKOEN,DFGLEOANOFI,FJJJGOHDLBH,BAADKMGHNAL,BLOEBCBBGBK,EOGKCNNHPFL,
                 HIOHGCIKLNF,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

