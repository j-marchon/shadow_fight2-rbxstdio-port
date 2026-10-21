// Nekki.SF2.GUI.Profile.PerkCell$$ChoosePerkByName @ RVA 0x353F334

void Nekki_SF2_GUI_Profile_PerkCell__ChoosePerkByName
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,System_String_o *LMPMHKIABOM,
               MethodInfo *method)

{
  bool bVar1;
  JLGNBOILFLN_o *__this_00;
  System_String_o *a;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *pNVar2;
  
  pNVar2 = (__this->fields)._LeftSubItem;
  if ((pNVar2 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) &&
     (__this_00 = (pNVar2->fields)._CGEGGOPIPHH_k__BackingField, __this_00 != (JLGNBOILFLN_o *)0x0))
  {
    a = JLGNBOILFLN__GKMAFGODLLG(__this_00,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,LMPMHKIABOM,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar2 = (__this->fields)._LeftSubItem;
    }
    else {
      pNVar2 = (__this->fields)._RightSubItem;
    }
    if (pNVar2 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363f394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._59_Choose.methodPtr)
                (pNVar2,(pNVar2->klass->vtable)._59_Choose.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

