// Nekki.SF2.GUI.Profile.UserPerksPanel$$HDIADKGHLNC @ RVA 0x34A7F94

Nekki_SF2_GUI_Profile_PerkCell_o *
Nekki_SF2_GUI_Profile_UserPerksPanel__HDIADKGHLNC
          (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,
          Nekki_SF2_GUI_Profile_PerkCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  byte bVar1;
  int DPJIDNBJIBG;
  bool bVar2;
  Nekki_SF2_GUI_Profile_PerkCell_o *pNVar3;
  KELJDKIIHMM_o *__this_00;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  
                    /* catch() { ... } // from try @ 035a7f8c with catch @ 035a7fa4 */
                    /* try { // try from 035a7fb4 to 036a802f has its CatchHandler @ 035a80f0 */
  if ((DAT_04568508 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_04568508 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AHICPBEJIKJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  pNVar3 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
  if (!bVar2) {
    if (AHICPBEJIKJ == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
LAB_035a8080:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    DPJIDNBJIBG = (AHICPBEJIKJ->fields).super.super.FIMCNHGPCNA + -1;
    if (DPJIDNBJIBG < 0) {
                    /* try { // try from 035a806c to 036a80db has its CatchHandler @ 035a80f0 */
      pNVar3 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
    }
    else {
      pNVar4 = (__this->fields)._TableView;
      if ((pNVar4 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (__this_00 = (pNVar4->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 == (KELJDKIIHMM_o *)0x0)) goto LAB_035a8080;
      pNVar3 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
               KELJDKIIHMM__KHGEMIEPBJB(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035a7874 with catch @ 035a8030
                       try { // try from 035a8030 to 036a8047 has its CatchHandler @ 035a7464 */
      if (pNVar3 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
                    /* try { // try from 035a8048 to 036a804b has its CatchHandler @ 035a805c */
        bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 035a8048 with catch @ 035a805c */
        if (((pNVar3->klass->_2).naturalAligment < bVar1) ||
           ((pNVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
      }
    }
  }
  return pNVar3;
}

