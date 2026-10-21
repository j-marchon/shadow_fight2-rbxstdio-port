// NOMBKAHPOHM$$PHBFKBEHGIK @ RVA 0x32D8FC4

void NOMBKAHPOHM__PHBFKBEHGIK(NOMBKAHPOHM_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,MethodInfo *method)

{
  char cVar1;
  System_Action_FPPKHNNABAD__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_045675a5 & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&Method_NOMBKAHPOHM_PHBFKBEHGIK__);
    DAT_045675a5 = 1;
  }
  CJNHFNHJHPE = (System_Action_FPPKHNNABAD__o *)
                thunk_FUN_01bda818(System_Action<FPPKHNNABAD>_TypeInfo);
  System_Action<object>___ctor();
  if (NDBPOFMECGL != (FPPKHNNABAD_o *)0x0) {
    FPPKHNNABAD__OKLHPLEGCOA(NDBPOFMECGL,CJNHFNHJHPE,(MethodInfo *)0x0);
    cVar1 = (__this->fields).super.field_0x52;
    (__this->fields).super.field_0x51 = 1;
    if (cVar1 == '\0') {
      (__this->fields).super.field_0x52 = 1;
      method_00 = extraout_x1;
      do {
        NOMBKAHPOHM__NKLGCNHLBAF(__this,method_00);
        method_00 = extraout_x1_00;
      } while ((__this->fields).super.field_0x51 != '\0');
      (__this->fields).super.field_0x52 = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

