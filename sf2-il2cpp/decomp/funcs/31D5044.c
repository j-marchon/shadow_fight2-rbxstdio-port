// OGMFFOMHGIA$$HNIGPBMJJOL @ RVA 0x31D5044

int64_t OGMFFOMHGIA__HNIGPBMJJOL
                  (SimpleJSON_JSONNode_o *JHMENEKPIBO,int64_t HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int64_t iVar3;
  int64_t local_28;
  
  if ((DAT_04566cd6 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566cd6 = 1;
  }
  local_28 = 0;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  iVar3 = HBFDLMOKDGA;
  if (!bVar1) {
    if (JHMENEKPIBO == (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = (System_String_o *)
             (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method);
    pSVar2 = PCOEHCPGBBG__JLLDNFPOKND(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_Int64__TryParse(pSVar2,&local_28,(MethodInfo *)0x0);
    iVar3 = local_28;
    if (!bVar1) {
      iVar3 = HBFDLMOKDGA;
    }
  }
  return iVar3;
}

