// OGMFFOMHGIA$$LFCNNAGLPHO @ RVA 0x31D57F0

System_String_o *
OGMFFOMHGIA__LFCNNAGLPHO
          (SimpleJSON_JSONNode_o *JHMENEKPIBO,System_String_o *HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04566cd9 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566cd9 = 1;
  }
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return HBFDLMOKDGA;
  }
  if (JHMENEKPIBO != (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032d5398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar2 = (System_String_o *)
             (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

