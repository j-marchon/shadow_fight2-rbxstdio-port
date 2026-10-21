// DBIJLEGANCE$$OOLPMIGFMKH @ RVA 0x32A4570

System_Byte_array * DBIJLEGANCE__OOLPMIGFMKH(System_String_o *AIGOBLJEBCA,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  System_Byte_array *pSVar2;
  
  if ((DAT_045673e1 & 1) == 0) {
    FUN_01bab630(&GCFMDIJNNBO_TypeInfo);
    DAT_045673e1 = 1;
  }
  pSVar1 = System_Text_Encoding__get_Unicode((MethodInfo *)0x0);
  if (pSVar1 != (System_Text_Encoding_o *)0x0) {
    pSVar2 = (System_Byte_array *)
             (*(pSVar1->klass->vtable)._19_GetBytes.methodPtr)
                       (pSVar1,AIGOBLJEBCA,(pSVar1->klass->vtable)._19_GetBytes.method);
    if ((GCFMDIJNNBO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GCFMDIJNNBO_TypeInfo);
    }
    pSVar2 = GCFMDIJNNBO__PBDHJGKDPML(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

