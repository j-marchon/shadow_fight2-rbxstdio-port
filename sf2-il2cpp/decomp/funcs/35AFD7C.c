// EDFDANKEBGF$$MCKLJNFEACN @ RVA 0x35AFD7C

int32_t EDFDANKEBGF__MCKLJNFEACN(MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_AudioClip_o *x;
  
  if ((DAT_04568e87 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_21118);
    FUN_01bab630(&StringLiteral_21115);
    DAT_04568e87 = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  x = PNLFHHJGDLI__GEIPHOGLKAG(StringLiteral_21115,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo);
  }
  puVar1 = &StringLiteral_21115;
  if (!bVar2) {
    puVar1 = &StringLiteral_21118;
  }
  iVar3 = PNLFHHJGDLI__CJKCKACIIHK((System_String_o *)*puVar1,false,1.0,1.0,(MethodInfo *)0x0);
  return iVar3;
}

