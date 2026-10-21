// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$KIPDEKLDABN @ RVA 0x3574B30

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__KIPDEKLDABN
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,
               JMDPBFOCHHP_CKEMIAEPGKD_o *CLDEGLBDGGE,int32_t AEAEPOHLBOE,MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *pSVar1;
  ACHLOMELAJE_o *pAVar2;
  int local_24;
  
  if ((DAT_04568c80 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)FUN_01bab630(&StringLiteral_3325);
    DAT_04568c80 = 1;
  }
  local_24 = AEAEPOHLBOE + 1;
  if ((CLDEGLBDGGE != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) &&
     (pSVar1 = (CLDEGLBDGGE->fields).GPNNHMIJLGL,
     pSVar1 != (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0)) {
    if ((pSVar1->fields)._size <= local_24) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)
             System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      ACHLOMELAJE__LMJFPPDAPBF
                (pAVar2,StringLiteral_3325,(System_String_o *)__this,0,(MethodInfo *)0x0);
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      __this = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0;
      if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar2,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

