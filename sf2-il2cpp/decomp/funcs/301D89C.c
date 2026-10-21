// Nekki.SF2.GUI.Profile.ItemsController$$GetNextCell @ RVA 0x301D89C

Nekki_SF2_GUI_Profile_ProfileCell_o *
Nekki_SF2_GUI_Profile_ItemsController__GetNextCell
          (Nekki_SF2_GUI_Profile_ItemsController_o *__this,
          Nekki_SF2_GUI_Profile_ProfileCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  int DPJIDNBJIBG;
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_Profile_ProfileCell_o *pNVar4;
  Nekki_SF2_GUI_TableView_o *pNVar5;
  KELJDKIIHMM_o *__this_00;
  
  if ((DAT_04565c27 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
    DAT_04565c27 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AHICPBEJIKJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  pNVar4 = (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0;
  if (!bVar2) {
    if ((AHICPBEJIKJ == (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0) ||
       (pNVar5 = (__this->fields)._TableView, pNVar5 == (Nekki_SF2_GUI_TableView_o *)0x0)) {
LAB_0311d99c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    DPJIDNBJIBG = (AHICPBEJIKJ->fields).super.FIMCNHGPCNA + 1;
    iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar5,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0;
    if (DPJIDNBJIBG < iVar3) {
      pNVar5 = (__this->fields)._TableView;
      if ((pNVar5 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (__this_00 = (pNVar5->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 == (KELJDKIIHMM_o *)0x0)) goto LAB_0311d99c;
      pNVar4 = (Nekki_SF2_GUI_Profile_ProfileCell_o *)
               KELJDKIIHMM__KHGEMIEPBJB(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
        if (((pNVar4->klass->_2).naturalAligment < bVar1) ||
           ((pNVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
      }
    }
  }
  return pNVar4;
}

