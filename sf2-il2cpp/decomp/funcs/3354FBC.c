// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$FDFHMHPOHKA @ RVA 0x3354FBC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__FDFHMHPOHKA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  int iVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  undefined8 uVar2;
  IDGOGBNEGAM_o *pIVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04567a38 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9089);
    FUN_01bab630(&StringLiteral_9085);
    auVar5 = FUN_01bab630(&StringLiteral_10932);
    DAT_04567a38 = 1;
  }
  uVar2 = auVar5._0_8_;
  pIVar3 = (__this->fields).PAAIEEFEBKK;
  if (pIVar3 != (IDGOGBNEGAM_o *)0x0) {
    iVar1 = (pIVar3->fields).HHJIJKJCEOF;
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        __this_00 = (__this->fields)._status;
        uVar2 = 0;
        if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0345507c;
        puVar4 = &StringLiteral_9085;
      }
      else {
        if (iVar1 != 1) {
          return;
        }
        __this_00 = (__this->fields)._status;
        uVar2 = 0;
        if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0345507c;
        puVar4 = &StringLiteral_9089;
      }
LAB_0345505c:
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (__this_00,(System_String_o *)*puVar4,(MethodInfo *)0x0);
      return;
    }
    __this_00 = (__this->fields)._status;
    uVar2 = 0;
    if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      puVar4 = &StringLiteral_10932;
      goto LAB_0345505c;
    }
  }
LAB_0345507c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar5._8_8_);
}

