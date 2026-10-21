// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoCell$$HHKGCCCAAAE @ RVA 0x31999B8

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoCell__HHKGCCCAAAE
          (int32_t OGPGLGPMEPD,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  undefined8 *puVar2;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_04566a97 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_20413);
    FUN_01bab630(&StringLiteral_20426);
    FUN_01bab630(&StringLiteral_20423);
    FUN_01bab630(&StringLiteral_20425);
    FUN_01bab630(&StringLiteral_20412);
    FUN_01bab630(&StringLiteral_20394);
    FUN_01bab630(&StringLiteral_20427);
    FUN_01bab630(&StringLiteral_20407);
    FUN_01bab630(&StringLiteral_6733);
    FUN_01bab630(&StringLiteral_10864);
    DAT_04566a97 = 1;
    method = extraout_x1;
  }
  switch(OGPGLGPMEPD) {
  case 0:
    puVar2 = &StringLiteral_20407;
    break;
  case 1:
    puVar2 = &StringLiteral_20394;
    break;
  case 2:
    puVar2 = &StringLiteral_20423;
    break;
  case 3:
    puVar2 = &StringLiteral_20427;
    break;
  case 4:
    puVar2 = &StringLiteral_20425;
    break;
  case 5:
    puVar2 = &StringLiteral_20412;
    break;
  case 6:
    puVar2 = &StringLiteral_20413;
    break;
  case 7:
  case 8:
    puVar2 = &StringLiteral_20426;
    break;
  default:
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_6733,(MethodInfo *)0x0);
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
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    return (pAVar3->fields).FAAJGHKHEBI;
  }
  pSVar1 = System_String__Concat(StringLiteral_10864,(System_String_o *)*puVar2,(MethodInfo *)0x0);
  return pSVar1;
}

