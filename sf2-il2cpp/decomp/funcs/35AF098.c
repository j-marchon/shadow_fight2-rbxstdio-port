// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$OENMKDCFDIF @ RVA 0x35AF098

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__OENMKDCFDIF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_FNILDHLJBBJ_o *__this_01;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  IFFFKKMMKFO_o *pIVar1;
  JKDFEBLBMOF_o *pJVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  
  if ((DAT_04568e76 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568e76 = 1;
    method = extraout_x1;
  }
  pIVar1 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
  if (pIVar1 != (IFFFKKMMKFO_o *)0x0) {
    if ((pIVar1->fields).AMAMLPJLCFG == (JKDFEBLBMOF_o *)0x0) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    pIVar1 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
    if (((pIVar1 != (IFFFKKMMKFO_o *)0x0) &&
        (pJVar2 = (pIVar1->fields).AMAMLPJLCFG, pJVar2 != (JKDFEBLBMOF_o *)0x0)) &&
       (__this_00 != (JMDPBFOCHHP_o *)0x0)) {
      __this_01 = JMDPBFOCHHP__OJOIAONADNG(__this_00,(pJVar2->fields).LEJBNEIJJIF,(MethodInfo *)0x0)
      ;
      if (__this_01 == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
        return;
      }
      __this_02 = (__this->fields)._chest;
      CJNHFNHJHPE = JMDPBFOCHHP_FNILDHLJBBJ__PCPJDHIAAHO(__this_01,false,(MethodInfo *)0x0);
      if (__this_02 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

