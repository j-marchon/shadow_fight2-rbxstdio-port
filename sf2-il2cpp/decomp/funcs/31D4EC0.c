// OGMFFOMHGIA$$IFFHCBKGMKC @ RVA 0x31D4EC0

SimpleJSON_JSONNode_o *
OGMFFOMHGIA__IFFHCBKGMKC
          (SimpleJSON_JSONNode_o *JHMENEKPIBO,System_String_o *PNOCDIDLLLM,MethodInfo *method)

{
  bool bVar1;
  SimpleJSON_JSONNode_o *pSVar2;
  
  if ((DAT_04566cd4 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_04566cd4 = 1;
  }
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = SimpleJSON_JSONNode__op_Inequality(JHMENEKPIBO,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = System_String__IsNullOrEmpty(PNOCDIDLLLM,(MethodInfo *)0x0);
    if (!bVar1) {
      if (JHMENEKPIBO != (SimpleJSON_JSONNode_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032d4f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar2 = (SimpleJSON_JSONNode_o *)
                 (*(JHMENEKPIBO->klass->vtable)._7_get_Item.methodPtr)
                           (JHMENEKPIBO,PNOCDIDLLLM,(JHMENEKPIBO->klass->vtable)._7_get_Item.method)
        ;
        return pSVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return (SimpleJSON_JSONNode_o *)0x0;
}

