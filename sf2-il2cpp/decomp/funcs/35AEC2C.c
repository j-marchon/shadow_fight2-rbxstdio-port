// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$FDFHMHPOHKA @ RVA 0x35AEC2C

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__FDFHMHPOHKA
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  MethodInfo *extraout_x1;
  System_String_o *MAFOJGJOMLG;
  MethodInfo *in_x2;
  IFFFKKMMKFO_o *pIVar3;
  
  if ((DAT_04568e72 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
    DAT_04568e72 = 1;
    method = extraout_x1;
  }
  pIVar3 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
  if (pIVar3 != (IFFFKKMMKFO_o *)0x0) {
    iVar1 = (pIVar3->fields).FPPPAMFABJP;
    if (iVar1 != 3) {
      iVar2 = (pIVar3->fields).IEONGHCHNNA;
      if (iVar2 - 2U < 2) {
        if (iVar1 == 2) {
          if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo,method);
          }
          MAFOJGJOMLG = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->
                        NKHHIFKCKBB;
        }
        else {
          if (iVar1 != 1) {
            return;
          }
          if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo,method);
          }
          MAFOJGJOMLG = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->
                        CBOLBCCOBLA;
        }
      }
      else {
        if (iVar2 != 1) {
          return;
        }
        if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo,method);
        }
        MAFOJGJOMLG = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->CNEFGALKDDI;
      }
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__DJNONHNFKCN(__this,MAFOJGJOMLG,in_x2);
      return;
    }
    __this_00 = (__this->fields)._playerStatusIcon;
    if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._canvasGroup;
      if (__this_02 != (UnityEngine_CanvasGroup_o *)0x0) {
        UnityEngine_CanvasGroup__set_alpha(__this_02,0.5,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

