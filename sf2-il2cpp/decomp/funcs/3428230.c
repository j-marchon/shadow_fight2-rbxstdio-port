// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$CIHKNMDAPBG @ RVA 0x3428230

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__CIHKNMDAPBG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  PGICCMFLDPI_o *pPVar1;
  System_String_o *CJNHFNHJHPE;
  CHDGOFBHAFI_o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  ProgressLabelButton_o *pPVar2;
  ulong uVar3;
  float fVar4;
  
  if ((DAT_04568122 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_21200);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568122 = 1;
  }
  if ((__this->fields)._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  if ((__this_00 == (KKLJIDJBFEI_o *)0x0) ||
     (pPVar1 = KKLJIDJBFEI__MPBLBEGCAKP(__this_00,(MethodInfo *)0x0), pPVar1 == (PGICCMFLDPI_o *)0x0
     )) goto LAB_0352847c;
  uVar3 = (__this->fields).HODAIAEDHBL - (pPVar1->fields).GDKPGIBMFPA;
  if ((long)uVar3 < 1) {
    pPVar2 = (__this->fields)._btnFight;
    if (pPVar2 == (ProgressLabelButton_o *)0x0) goto LAB_0352847c;
    LabelButton__set_Alias((LabelButton_o *)pPVar2,StringLiteral_21200,(MethodInfo *)0x0);
    pPVar2 = (__this->fields)._btnFight;
    if (pPVar2 == (ProgressLabelButton_o *)0x0) goto LAB_0352847c;
    fVar4 = ProgressLabelButton__MaxValue(pPVar2,(MethodInfo *)0x0);
    ProgressLabelButton__SetValue(pPVar2,fVar4,0.0,(System_Action_o *)0x0,(MethodInfo *)0x0);
  }
  else {
    pPVar2 = (__this->fields)._btnFight;
    if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CJNHFNHJHPE = NGFEKJBMGEB__BCGDPKJNJCH
                            (uVar3 / 1000,true,true,3599999 < (long)uVar3,86399999 < (long)uVar3,
                             StringLiteral_2086,true,true,true,true,StringLiteral_1,StringLiteral_1,
                             StringLiteral_1,StringLiteral_1,(MethodInfo *)0x0);
    if (pPVar2 == (ProgressLabelButton_o *)0x0) goto LAB_0352847c;
    LabelButton__set_Text((LabelButton_o *)pPVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pPVar2 = (__this->fields)._btnFight;
    if (pPVar2 == (ProgressLabelButton_o *)0x0) goto LAB_0352847c;
    fVar4 = ProgressLabelButton__MaxValue(pPVar2,(MethodInfo *)0x0);
    ProgressLabelButton__SetValue
              (pPVar2,fVar4 - (float)(long)uVar3,0.0,(System_Action_o *)0x0,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (__this_01 == (CHDGOFBHAFI_o *)0x0) goto LAB_0352847c;
    CHDGOFBHAFI__JADOIEAEGKL(__this_01,(__this->fields).HODAIAEDHBL,(MethodInfo *)0x0);
  }
  __this_02 = (__this->fields)._adIcon;
  if ((__this_02 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_03 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
     __this_03 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive
              (__this_03,0 < (long)uVar3 && (__this->fields).NGOMPLJHBHH != false,(MethodInfo *)0x0)
    ;
    return;
  }
LAB_0352847c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

