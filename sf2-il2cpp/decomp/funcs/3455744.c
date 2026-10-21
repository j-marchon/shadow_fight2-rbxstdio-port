// CLFCKIFNGHA$$OCNFNLFGLNG @ RVA 0x3455744

void CLFCKIFNGHA__OCNFNLFGLNG(IAGNPGHOAIC_o *IEKGHPACLPF,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  ulong uVar4;
  System_String_o *key;
  ulong uVar5;
  
  if ((DAT_045682c9 & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_set_Item__);
    DAT_045682c9 = 1;
  }
  if (IEKGHPACLPF != (IAGNPGHOAIC_o *)0x0) {
    IAGNPGHOAIC__BKCFPHNEONL(IEKGHPACLPF,(MethodInfo *)0x0);
    bVar2 = IAGNPGHOAIC__BKALFJAFEOE(IEKGHPACLPF,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pSVar3 = IAGNPGHOAIC__CIIONFHFKGB(IEKGHPACLPF,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_array *)0x0) {
      if (0 < (int)pSVar3->max_length) {
        uVar5 = 0;
        uVar4 = pSVar3->max_length & 0xffffffff;
        do {
          if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          key = pSVar3->m_Items[uVar5];
          if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this = (System_Collections_Generic_Dictionary_object__object__o *)
                   CLFCKIFNGHA_TypeInfo->static_fields->FJONCCJJCBP;
          if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_03555860;
          System_Collections_Generic_Dictionary<object,_object>__set_Item
                    (__this,(Il2CppObject *)key,(Il2CppObject *)IEKGHPACLPF,
                     Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_set_Item__);
          uVar1 = (uint)pSVar3->max_length;
          uVar4 = (ulong)uVar1;
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)uVar1);
      }
      IAGNPGHOAIC__BMMOAFKFHNN(IEKGHPACLPF,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03555860:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

