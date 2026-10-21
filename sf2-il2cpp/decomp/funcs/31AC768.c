// BackKeyManager$$GIENGNEGHPJ @ RVA 0x31AC768

void BackKeyManager__GIENGNEGHPJ(BackKeyManager_o *__this,MethodInfo *method)

{
  NDPMLPGANCI_o *pNVar1;
  System_Action_GLINEGMOOBM__o *CJNHFNHJHPE;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE_00;
  
  if ((DAT_04566b4f & 1) == 0) {
    FUN_01bab630(&System_Action<GLINEGMOOBM>_TypeInfo);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&Method_BackKeyManager_AMHCCGMLBOE__);
    FUN_01bab630(&Method_BackKeyManager_NKKEKIKFFCJ__);
    DAT_04566b4f = 1;
  }
  pNVar1 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_GLINEGMOOBM__o *)
                thunk_FUN_01bda818(System_Action<GLINEGMOOBM>_TypeInfo);
  System_Action<object>___ctor();
  if (pNVar1 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__IIOPONEHEGP(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    CJNHFNHJHPE_00 =
         (System_Action_DBMPKPJGIPI__o *)thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
    System_Action<Int32Enum>___ctor();
    if (pNVar1 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EAPNEKLDLLM(pNVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

