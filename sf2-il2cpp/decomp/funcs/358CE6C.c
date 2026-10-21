// Nekki.SF2.GUI.Dialogs.SettingsAdvancedDialog$$CJNLHMPAHLJ @ RVA 0x358CE6C

void Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog__CJNLHMPAHLJ
               (Nekki_SF2_GUI_Dialogs_SettingsAdvancedDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  System_String_o *CJNHFNHJHPE;
  int32_t CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  FGKGKDEJCOG_o *pFVar2;
  
  if ((DAT_04568d4f & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_17756);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_18768);
    DAT_04568d4f = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (pFVar2 != (FGKGKDEJCOG_o *)0x0) {
    iVar1 = (pFVar2->fields).FIIKIHJHLNJ;
    if (iVar1 == 2) {
      if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
      }
      LLKDCCJMFLE__GBFOJMJMAMF(0,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565e59 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565e59 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
      if (pFVar2 != (FGKGKDEJCOG_o *)0x0) {
        FGKGKDEJCOG__HLAPEBKNMEK(pFVar2,0,(MethodInfo *)0x0);
        if (DAT_04565e59 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565e59 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
        if (pFVar2 != (FGKGKDEJCOG_o *)0x0) {
          CJNHFNHJHPE_00 = 0;
LAB_0368d0f8:
          FGKGKDEJCOG__KDKDLBDHKEK(pFVar2,CJNHFNHJHPE_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if (iVar1 == 1) {
      if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
      }
      LLKDCCJMFLE__GBFOJMJMAMF(2,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565e59 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565e59 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
      if (pFVar2 != (FGKGKDEJCOG_o *)0x0) {
        FGKGKDEJCOG__HLAPEBKNMEK(pFVar2,1,(MethodInfo *)0x0);
        if (DAT_04565e59 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565e59 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
        if (pFVar2 != (FGKGKDEJCOG_o *)0x0) {
          FGKGKDEJCOG__KDKDLBDHKEK(pFVar2,2,(MethodInfo *)0x0);
          if ((__this->fields).PINGKKPOOME == false) {
            return;
          }
          JJPNLEPEAFM__JNDPLPKDPCP
                    (StringLiteral_17756,StringLiteral_18768,StringLiteral_9679,StringLiteral_1,
                     (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,true,
                     true,(MethodInfo *)0x0);
          (__this->fields).PINGKKPOOME = false;
          return;
        }
      }
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
      }
      CJNHFNHJHPE = EOAOCPLIKOI__IDCJKHFCJKM((MethodInfo *)0x0);
      if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo);
      }
      LLKDCCJMFLE__BJGGBNJEDLM(CJNHFNHJHPE,(MethodInfo *)0x0);
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565e59 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565e59 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
      if (pFVar2 != (FGKGKDEJCOG_o *)0x0) {
        FGKGKDEJCOG__GGJHFLDKMHA(pFVar2,(MethodInfo *)0x0);
        if (DAT_04565e59 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565e59 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pFVar2 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
        if (pFVar2 != (FGKGKDEJCOG_o *)0x0) {
          CJNHFNHJHPE_00 = 1;
          goto LAB_0368d0f8;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

