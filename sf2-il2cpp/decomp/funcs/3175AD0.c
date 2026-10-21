// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanRaidDialog$$GLEOGMBBLNH @ RVA 0x3175AD0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__GLEOGMBBLNH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog_o *__this,int32_t HJEBKCDDBAB
               ,MethodInfo *method)

{
  undefined8 *puVar1;
  ACHLOMELAJE_o *pAVar2;
  MethodInfo *method_00;
  
  if ((DAT_04566953 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10859);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04566953 = 1;
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
  if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
    puVar1 = &StringLiteral_1606;
    if (HJEBKCDDBAB != 0) {
      puVar1 = &StringLiteral_1567;
    }
    ACHLOMELAJE__LMJFPPDAPBF
              (pAVar2,StringLiteral_10859,(System_String_o *)*puVar1,0,(MethodInfo *)0x0);
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
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar2,false,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanRaidDialog__JBOPJALGFHH(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

