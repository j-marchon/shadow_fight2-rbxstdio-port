// Nekki.SF2.GUI.Profile.PerkCell$$Init @ RVA 0x353F398

void Nekki_SF2_GUI_Profile_PerkCell__Init
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,EANNACPOJFA_o *PLKOKDEAMBE,bool NANHIJPKIAP
               ,bool LHFLFHOAHGM,JEIEEMKCNOJ_o *JJHEGPBBMLG,float DLPDIIMKMKE,MethodInfo *method)

{
  bool ICCGIMJNNKM;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Profile_PerkTreeLines_o *__this_03;
  JEIEEMKCNOJ_o **ppJVar1;
  
  method_00 = (MethodInfo *)(ulong)NANHIJPKIAP;
  (*(__this->klass->vtable)._17_Clear.methodPtr)(__this,(__this->klass->vtable)._17_Clear.method);
  Nekki_SF2_GUI_Profile_PerkCell__GJNMBGMOEHH(__this,(__this->fields)._LeftSubItem,method_00);
  Nekki_SF2_GUI_Profile_PerkCell__GJNMBGMOEHH(__this,(__this->fields)._RightSubItem,method_00);
  if (PLKOKDEAMBE != (EANNACPOJFA_o *)0x0) {
    Nekki_SF2_GUI_Profile_PerkCell__GJAELBNACIK(__this,(PLKOKDEAMBE->fields).GJBLBEALOBO,method_00);
    ppJVar1 = &(__this->fields).super.MKAAKGJNBHI;
    *ppJVar1 = JJHEGPBBMLG;
    thunk_FUN_01c20e04(ppJVar1,JJHEGPBBMLG);
    __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields)._LayoutGroup;
    if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                (__this_00,DLPDIIMKMKE,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._RightSubItem;
      if (__this_01 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
        __this_03 = (__this->fields)._PerkLines;
        __this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        if ((__this_02 != (UnityEngine_GameObject_o *)0x0) &&
           (ICCGIMJNNKM = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0),
           __this_03 != (Nekki_SF2_GUI_Profile_PerkTreeLines_o *)0x0)) {
          Nekki_SF2_GUI_Profile_PerkTreeLines__Refresh
                    (__this_03,NANHIJPKIAP,LHFLFHOAHGM,ICCGIMJNNKM,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

