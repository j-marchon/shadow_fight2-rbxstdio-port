// FGKGKDEJCOG$$IEPCAAEKFHN @ RVA 0x33343F4

int32_t FGKGKDEJCOG__IEPCAAEKFHN(FGKGKDEJCOG_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  uint uVar4;
  int32_t iVar5;
  KMBNFNCDDBP_o *pKVar6;
  
  if ((DAT_04567947 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_04567947 = 1;
  }
  iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
  bVar2 = GNAFJMPJNKI__NCOIGMBGENK(iVar3,(MethodInfo *)0x0);
  if (bVar2) {
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (EOAOCPLIKOI_TypeInfo->static_fields->ABJLMAOEEEE == false) {
      iVar3 = UnityEngine_SystemInfo__get_systemMemorySize((MethodInfo *)0x0);
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
      }
      if (DAT_045611dc == '\0') {
        FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
        DAT_045611dc = '\x01';
      }
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pKVar6 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
      if (pKVar6 == (KMBNFNCDDBP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar1 = (pKVar6->fields).JJIGNBIMLCC;
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar5 = EOAOCPLIKOI__PNPFJEGMOPC((MethodInfo *)0x0);
      uVar4 = 0;
      if (iVar5 != 0) {
        uVar4 = (uint)(iVar1 <= iVar3 || iVar5 == 1);
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

