// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$UpdateDanAndStatus @ RVA 0x33551E8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__UpdateDanAndStatus
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  IDGOGBNEGAM_o *pIVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  pIVar2 = (__this->fields).PAAIEEFEBKK;
  if (pIVar2 != (IDGOGBNEGAM_o *)0x0) {
    pNVar3 = (__this->fields)._danNumber;
    pSVar1 = System_Int32__ToString((int)pIVar2 + 0x2c,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,pSVar1,(pNVar3->klass->vtable)._75_set_text.method);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__FDFHMHPOHKA(__this,method_00);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__NLBPEFENJIK(__this,method_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

