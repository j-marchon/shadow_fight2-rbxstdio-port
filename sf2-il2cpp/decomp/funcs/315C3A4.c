// ANBKLGFGGFH$$DPGIIHOJJDE @ RVA 0x315C3A4

void ANBKLGFGGFH__DPGIIHOJJDE(ANBKLGFGGFH_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  undefined8 *puVar1;
  System_String_o *message;
  
  if ((DAT_0456686c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15419);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
    DAT_0456686c = 1;
  }
  puVar1 = &StringLiteral_1567;
  if ((__this->fields).super.field_0x34 != '\0') {
    puVar1 = &StringLiteral_1606;
  }
  message = System_String__Concat(StringLiteral_15419,(System_String_o *)*puVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    OLKKAIFGGAK__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

