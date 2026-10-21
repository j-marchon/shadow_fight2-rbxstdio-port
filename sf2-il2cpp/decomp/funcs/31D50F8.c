// OGMFFOMHGIA$$FMBMNDIGLIG @ RVA 0x31D50F8

bool OGMFFOMHGIA__FMBMNDIGLIG
               (SimpleJSON_JSONNode_o *JHMENEKPIBO,bool HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04566cd7 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&StringLiteral_18196);
    FUN_01bab630(&StringLiteral_21605);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04566cd7 = 1;
  }
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((JHMENEKPIBO == (SimpleJSON_JSONNode_o *)0x0) ||
       (pSVar2 = (System_String_o *)
                 (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method),
       pSVar2 == (System_String_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = System_String__ToLower(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_1567,(MethodInfo *)0x0);
    if ((bVar1) ||
       (bVar1 = System_String__op_Equality(pSVar2,StringLiteral_18196,(MethodInfo *)0x0), bVar1)) {
      HBFDLMOKDGA = false;
    }
    else {
      bVar1 = System_String__op_Equality(pSVar2,StringLiteral_1606,(MethodInfo *)0x0);
      if (bVar1) {
        HBFDLMOKDGA = true;
      }
      else {
        bVar1 = System_String__op_Equality(pSVar2,StringLiteral_21605,(MethodInfo *)0x0);
        HBFDLMOKDGA = bVar1 || HBFDLMOKDGA;
      }
    }
  }
  return HBFDLMOKDGA;
}

