// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$CIHKNMDAPBG @ RVA 0x326ED30

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__CIHKNMDAPBG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,float PJHOLDOLLCN,
               MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *pCVar2;
  ProgressLabelButton_o *pPVar3;
  KKLJIDJBFEI_o *__this_00;
  PGICCMFLDPI_o *pPVar4;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  long lVar5;
  ulong uVar6;
  float fVar7;
  
  if ((DAT_04567211 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 0336ed74 to 0346ed7f has its CatchHandler @ 0336e61c */
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
                    /* try { // try from 0336ed80 to 0346ed87 has its CatchHandler @ 0336ed88 */
    FUN_01bab630(&StringLiteral_21202);
                    /* catch() { ... } // from try @ 0336ed04 with catch @ 0336ed88
                       catch() { ... } // from try @ 0336ed80 with catch @ 0336ed88 */
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_21200);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567211 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (pCVar2 == (CHDGOFBHAFI_o *)0x0) goto LAB_0336f044;
  bVar1 = OOBBAGLCFPF__IFFNMNFGOII((pCVar2->fields).AABMLCNHHPN,(MethodInfo *)0x0);
  if (bVar1) {
    pPVar3 = (__this->fields)._btnFight;
    if (pPVar3 == (ProgressLabelButton_o *)0x0) goto LAB_0336f044;
    LabelButton__set_Alias((LabelButton_o *)pPVar3,StringLiteral_21202,(MethodInfo *)0x0);
    pPVar3 = (__this->fields)._btnFight;
    if (pPVar3 == (ProgressLabelButton_o *)0x0) goto LAB_0336f044;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pPVar3,true,(MethodInfo *)0x0);
  }
  else {
    lVar5 = -0x8000000000000000;
    if (PJHOLDOLLCN * 1000.0 != INFINITY) {
      lVar5 = (long)(PJHOLDOLLCN * 1000.0);
    }
    lVar5 = (__this->fields).NENHDBKCMFE - lVar5;
    (__this->fields).NENHDBKCMFE = lVar5;
    if (lVar5 < 1) {
      pPVar3 = (__this->fields)._btnFight;
      if (pPVar3 != (ProgressLabelButton_o *)0x0) {
        LabelButton__set_Alias((LabelButton_o *)pPVar3,StringLiteral_21200,(MethodInfo *)0x0);
        pPVar3 = (__this->fields)._btnFight;
        if (pPVar3 != (ProgressLabelButton_o *)0x0) {
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)pPVar3,false,(MethodInfo *)0x0);
          pPVar3 = (__this->fields)._btnFight;
          if (pPVar3 != (ProgressLabelButton_o *)0x0) {
            fVar7 = ProgressLabelButton__MaxValue(pPVar3,(MethodInfo *)0x0);
            ProgressLabelButton__SetValue(pPVar3,fVar7,0.0,(System_Action_o *)0x0,(MethodInfo *)0x0)
            ;
                    /* WARNING: Could not recover jumptable at 0x0336f014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(__this->klass->vtable)._20_Close.methodPtr)
                      (__this,(__this->klass->vtable)._20_Close.method);
            return;
          }
        }
      }
      goto LAB_0336f044;
    }
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (((__this_00 == (KKLJIDJBFEI_o *)0x0) ||
        (pPVar4 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0),
        pPVar4 == (PGICCMFLDPI_o *)0x0)) ||
       (pPVar3 = (__this->fields)._btnFight, pPVar3 == (ProgressLabelButton_o *)0x0))
    goto LAB_0336f044;
    uVar6 = (__this->fields).HODAIAEDHBL - (pPVar4->fields).GDKPGIBMFPA;
    if (0 < (long)uVar6) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pPVar3,false,(MethodInfo *)0x0);
      pPVar3 = (__this->fields)._btnFight;
      if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CJNHFNHJHPE = NGFEKJBMGEB__BCGDPKJNJCH
                              (uVar6 / 1000,true,true,3599999 < (long)uVar6,86399999 < (long)uVar6,
                               StringLiteral_2086,true,true,true,true,StringLiteral_1,
                               StringLiteral_1,StringLiteral_1,StringLiteral_1,(MethodInfo *)0x0);
      if (pPVar3 == (ProgressLabelButton_o *)0x0) goto LAB_0336f044;
      LabelButton__set_Text((LabelButton_o *)pPVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
      pPVar3 = (__this->fields)._btnFight;
      if (pPVar3 == (ProgressLabelButton_o *)0x0) goto LAB_0336f044;
      fVar7 = ProgressLabelButton__MaxValue(pPVar3,(MethodInfo *)0x0);
      fVar7 = fVar7 - (float)(long)uVar6;
      goto LAB_0336ef70;
    }
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pPVar3,true,(MethodInfo *)0x0);
    pPVar3 = (__this->fields)._btnFight;
    if (pPVar3 == (ProgressLabelButton_o *)0x0) goto LAB_0336f044;
    LabelButton__set_Alias((LabelButton_o *)pPVar3,StringLiteral_21200,(MethodInfo *)0x0);
  }
  pPVar3 = (__this->fields)._btnFight;
  if (pPVar3 != (ProgressLabelButton_o *)0x0) {
    fVar7 = ProgressLabelButton__MaxValue(pPVar3,(MethodInfo *)0x0);
LAB_0336ef70:
    ProgressLabelButton__SetValue(pPVar3,fVar7,0.0,(System_Action_o *)0x0,(MethodInfo *)0x0);
    return;
  }
LAB_0336f044:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

