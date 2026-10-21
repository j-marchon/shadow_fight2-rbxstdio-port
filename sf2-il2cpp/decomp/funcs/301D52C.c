// Nekki.SF2.GUI.Profile.ItemsController$$GetPrevCell @ RVA 0x301D52C

Nekki_SF2_GUI_Profile_ProfileCell_o *
Nekki_SF2_GUI_Profile_ItemsController__GetPrevCell
          (Nekki_SF2_GUI_Profile_ItemsController_o *__this,
          Nekki_SF2_GUI_Profile_ProfileCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  byte bVar1;
  int DPJIDNBJIBG;
  bool bVar2;
  Nekki_SF2_GUI_Profile_ProfileCell_o *pNVar3;
  KELJDKIIHMM_o *__this_00;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  
  if ((DAT_04565c28 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
    DAT_04565c28 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AHICPBEJIKJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  pNVar3 = (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0;
  if (!bVar2) {
    if (AHICPBEJIKJ == (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0) {
LAB_0311d618:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    DPJIDNBJIBG = (AHICPBEJIKJ->fields).super.FIMCNHGPCNA + -1;
    if (DPJIDNBJIBG < 0) {
      pNVar3 = (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0;
    }
    else {
      pNVar4 = (__this->fields)._TableView;
      if ((pNVar4 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (__this_00 = (pNVar4->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 == (KELJDKIIHMM_o *)0x0)) goto LAB_0311d618;
      pNVar3 = (Nekki_SF2_GUI_Profile_ProfileCell_o *)
               KELJDKIIHMM__KHGEMIEPBJB(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
        if (((pNVar3->klass->_2).naturalAligment < bVar1) ||
           ((pNVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
      }
    }
  }
  return pNVar3;
}

