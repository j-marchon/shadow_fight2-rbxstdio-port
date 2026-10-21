// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$OGCLDPJPKKO @ RVA 0x3354B28

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__OGCLDPJPKKO
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  undefined8 uVar1;
  IDGOGBNEGAM_o *pIVar2;
  undefined8 *puVar3;
  System_Action_RectTransform__string__o *pSVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04567a35 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7112);
    FUN_01bab630(&StringLiteral_7111);
    FUN_01bab630(&StringLiteral_7105);
    auVar5 = FUN_01bab630(&StringLiteral_7109);
    DAT_04567a35 = 1;
  }
  pIVar2 = (__this->fields).PAAIEEFEBKK;
  if (pIVar2 == (IDGOGBNEGAM_o *)0x0) goto LAB_03454c10;
  switch((pIVar2->fields).LLNMDPPIGLF) {
  case 1:
    puVar3 = &StringLiteral_7109;
    break;
  case 2:
    puVar3 = &StringLiteral_7112;
    break;
  case 3:
    puVar3 = &StringLiteral_7105;
    break;
  case 4:
    puVar3 = &StringLiteral_7111;
    break;
  default:
    uVar1 = 0;
    goto LAB_03454be0;
  }
  uVar1 = *puVar3;
LAB_03454be0:
  pSVar4 = (__this->fields).JDMBKBAKOFA;
  if (pSVar4 != (System_Action_RectTransform__string__o *)0x0) {
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,(__this->fields)._hintPos,uVar1,
               (pSVar4->fields).super.super.method);
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
LAB_03454c10:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
}

