// Nekki.SF2.GUI.Profile.UserPerksPanel$$KFDAGNGDHNL @ RVA 0x34A7910

Nekki_SF2_GUI_Profile_PerkCell_o *
Nekki_SF2_GUI_Profile_UserPerksPanel__KFDAGNGDHNL
          (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,
          Nekki_SF2_GUI_Profile_PerkCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  int DPJIDNBJIBG;
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_Profile_PerkCell_o *pNVar4;
  Nekki_SF2_GUI_TableView_o *pNVar5;
  KELJDKIIHMM_o *__this_00;
  
  if ((DAT_045684ff & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_045684ff = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AHICPBEJIKJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
  if (!bVar2) {
    if ((AHICPBEJIKJ == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) ||
       (pNVar5 = (__this->fields)._TableView, pNVar5 == (Nekki_SF2_GUI_TableView_o *)0x0)) {
LAB_035a7a10:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    DPJIDNBJIBG = (AHICPBEJIKJ->fields).super.super.FIMCNHGPCNA + 1;
    iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar5,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
    if (DPJIDNBJIBG < iVar3) {
      pNVar5 = (__this->fields)._TableView;
      if ((pNVar5 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (__this_00 = (pNVar5->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 == (KELJDKIIHMM_o *)0x0)) goto LAB_035a7a10;
      pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
               KELJDKIIHMM__KHGEMIEPBJB(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
        if (((pNVar4->klass->_2).naturalAligment < bVar1) ||
           ((pNVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
      }
    }
  }
                    /* try { // try from 035a7a04 to 036a7a2b has its CatchHandler @ 035a7eb4 */
  return pNVar4;
}

