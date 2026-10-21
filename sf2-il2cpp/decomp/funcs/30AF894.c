// CFEANGJDHEE$$NKLGCNHLBAF @ RVA 0x30AF894

void CFEANGJDHEE__NKLGCNHLBAF(System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  MethodInfo *method_00;
  CFEANGJDHEE_o *pCVar1;
  MethodInfo *method_01;
  ABMPAOFAAEI_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *in_x2;
  
  if ((DAT_045661cd & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    DAT_045661cd = 1;
    method = extraout_x1;
  }
  if (DIHAKADKIKM != (System_String_o *)0x0) {
    if ((DIHAKADKIKM->fields)._stringLength < 1) {
      return;
    }
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_00;
    }
    CFEANGJDHEE__LMDMNPBBNML(DIHAKADKIKM,method);
    pCVar1 = CFEANGJDHEE__AIHNLLGNBLC(method_00);
    if (pCVar1 != (CFEANGJDHEE_o *)0x0) {
      CFEANGJDHEE__LCHLJMJNHJI(pCVar1,DIHAKADKIKM,in_x2);
      pCVar1 = CFEANGJDHEE__AIHNLLGNBLC(method_01);
      if ((pCVar1 != (CFEANGJDHEE_o *)0x0) &&
         (__this = (pCVar1->fields).MMFAILFMCJC, __this != (ABMPAOFAAEI_o *)0x0)) {
        ABMPAOFAAEI__NKLGCNHLBAF(__this,DIHAKADKIKM,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

