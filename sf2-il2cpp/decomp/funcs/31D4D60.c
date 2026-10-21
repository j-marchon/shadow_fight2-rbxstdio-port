// OGMFFOMHGIA$$FECKAJHFDJM @ RVA 0x31D4D60

uint32_t OGMFFOMHGIA__FECKAJHFDJM
                   (SimpleJSON_JSONNode_o *JHMENEKPIBO,uint32_t HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  uint32_t uVar3;
  uint32_t local_24;
  
  if ((DAT_04566cda & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566cda = 1;
  }
  local_24 = 0;
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Equality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  uVar3 = HBFDLMOKDGA;
  if (!bVar1) {
    if (JHMENEKPIBO == (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = (System_String_o *)
             (*(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._9_HNIHOIAMDPC.method);
    pSVar2 = PCOEHCPGBBG__JLLDNFPOKND(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_UInt32__TryParse(pSVar2,&local_24,(MethodInfo *)0x0);
    uVar3 = local_24;
    if (!bVar1) {
      uVar3 = HBFDLMOKDGA;
    }
  }
  return uVar3;
}

