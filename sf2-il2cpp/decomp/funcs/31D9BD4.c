// Nekki.SF2.GUI.Dialogs.Raids.RaidTopPlayerCell$$KANCOIBLNKP @ RVA 0x31D9BD4

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell__KANCOIBLNKP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_o *__this,int32_t ACCIHBHMFPN,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *CJNHFNHJHPE;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o value_00;
  
  if ((DAT_04566d0d & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo);
    DAT_04566d0d = 1;
  }
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell__IsFake
                    ((Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesCell_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CJNHFNHJHPE = LPGPNBGHDBD__ELADHNOAPBC(ACCIHBHMFPN,(MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  pNVar2 = (__this->fields)._frameTracery;
  if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    if (bVar1) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    }
    else {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._frameTracery;
      if (pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_032d9e28;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    pNVar2 = (__this->fields)._frameTracery;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
      if (DAT_0455fa7f == '\0') {
        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
        DAT_0455fa7f = '\x01';
      }
      pUVar3 = UnityEngine_Vector3_TypeInfo->static_fields;
      uVar6 = (pUVar3->oneVector).fields.x;
      uVar7 = (pUVar3->oneVector).fields.y;
      fVar8 = (pUVar3->oneVector).fields.z;
                    /* try { // try from 032d9d24 to 033d9de7 has its CatchHandler @ 032d9d24
                       catch() { ... } // from try @ 032d9d24 with catch @ 032d9d24
                       catch() { ... } // from try @ 032d9e08 with catch @ 032d9d24
                       catch() { ... } // from try @ 032d9e6c with catch @ 032d9d24
                       catch() { ... } // from try @ 032d9e9c with catch @ 032d9d24 */
      if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565e5d == '\0') {
        FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
        DAT_04565e5d = '\x01';
      }
      if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        fVar4 = FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH;
        value_00.fields.z = (fVar8 + fVar8) * fVar4;
        value_00.fields.x = ((float)uVar6 + (float)uVar6) * fVar4;
        value_00.fields.y = ((float)uVar7 + (float)uVar7) * fVar4;
        UnityEngine_Transform__set_localScale(__this_01,value_00,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._frameTracery;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          __this_02 = UnityEngine_UI_Graphic__get_rectTransform
                                ((UnityEngine_UI_Graphic_o *)pNVar2,(MethodInfo *)0x0);
          if ((Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo);
          }
          fVar8 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo->static_fields->
                  LGDJILHAHJB).fields.x;
          fVar4 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopPlayerCell_TypeInfo->static_fields->
                  LGDJILHAHJB).fields.y;
          if (DAT_04565e5d == '\0') {
            FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
            DAT_04565e5d = '\x01';
          }
                    /* try { // try from 032d9de8 to 033d9def has its CatchHandler @ 032d9e50 */
          if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 032d9e00 to 033d9e07 has its CatchHandler @ 032d9e4c */
                    /* try { // try from 032d9e08 to 033d9e67 has its CatchHandler @ 032d9d24 */
            fVar5 = FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH;
            value.fields.y = fVar4 / fVar5;
            value.fields.x = fVar8 / fVar5;
            UnityEngine_RectTransform__set_sizeDelta(__this_02,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_032d9e28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

