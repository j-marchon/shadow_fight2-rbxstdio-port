// Nekki.SF2.GUI.Profile.UserPerksPanel$$COKANBDIAPH @ RVA 0x34A84C4

Nekki_SF2_GUI_Profile_PerkCell_o *
Nekki_SF2_GUI_Profile_UserPerksPanel__COKANBDIAPH
          (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,EANNACPOJFA_o *EOFJCNMEMNM,
          MethodInfo *method)

{
  byte bVar1;
  int32_t DPJIDNBJIBG;
  int32_t iVar2;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  Nekki_SF2_GUI_Profile_PerkCell_o *pNVar4;
  KELJDKIIHMM_o *__this_01;
  
  if ((DAT_0456850c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_IndexOf__);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_0456850c = 1;
  }
  __this_00 = (__this->fields).MHOLLBLFLAH;
  if (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    DPJIDNBJIBG = System_Collections_Generic_List<object>__IndexOf
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)EOFJCNMEMNM,
                             Method_System_Collections_Generic_List<EANNACPOJFA>_IndexOf__);
    if (DPJIDNBJIBG < 0) {
      pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
    }
    else {
                    /* try { // try from 035a8520 to 036a8547 has its CatchHandler @ 035a8ce8 */
      pNVar3 = (__this->fields)._TableView;
      if (pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_035a85a8;
      iVar2 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar3,(MethodInfo *)0x0);
      pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
      if (DPJIDNBJIBG < iVar2) {
        pNVar3 = (__this->fields)._TableView;
        if ((pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
           (__this_01 = (pNVar3->fields)._LBHOKEBOIFN_k__BackingField,
           __this_01 == (KELJDKIIHMM_o *)0x0)) goto LAB_035a85a8;
        pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                 KELJDKIIHMM__KHGEMIEPBJB(__this_01,DPJIDNBJIBG,(MethodInfo *)0x0);
        if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
          bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035a8580 to 036a85a7 has its CatchHandler @ 035a8ce4 */
          if (((pNVar4->klass->_2).naturalAligment < bVar1) ||
             ((pNVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
        }
      }
    }
    return pNVar4;
  }
LAB_035a85a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

