// KKLJIDJBFEI$$HFDKNFKJIIP @ RVA 0x314757C

System_String_o *
KKLJIDJBFEI__HFDKNFKJIIP
          (KAMBBJFPLGM_o *HEHMPFLAEGE,KKLJIDJBFEI_EKJEAINHKPL_o *param_2,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  System_Func_TSource__bool__o *predicate;
  System_String_o *pSVar3;
  ELBBEAGGAOH_o *pEVar4;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *source;
  System_Enum_o local_48;
  undefined4 local_38;
  
  if ((DAT_04566788 & 1) == 0) {
    FUN_01bab630(&Method_KKLJIDJBFEI_BHKBBKCACGJ_KODDNBBFLPJ__);
    FUN_01bab630(&KKLJIDJBFEI_BHKBBKCACGJ_TypeInfo);
    FUN_01bab630(&DLIONECMCGE_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<KMAOIKKMFJF>__);
    FUN_01bab630(&System_Func<KMAOIKKMFJF,_bool>_TypeInfo);
    FUN_01bab630(&StringLiteral_14461);
    DAT_04566788 = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(KKLJIDJBFEI_BHKBBKCACGJ_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[1].klass = (Il2CppClass *)HEHMPFLAEGE;
    thunk_FUN_01c20e04(pIVar2 + 1,HEHMPFLAEGE);
    pEVar4 = (param_2->fields).p;
    if (pEVar4 != (ELBBEAGGAOH_o *)0x0) {
      source = (pEVar4->fields).OOPOHLJPBHE;
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<KMAOIKKMFJF,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      pIVar2 = System_Linq_Enumerable__FirstOrDefault<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                          Method_System_Linq_Enumerable_FirstOrDefault<KMAOIKKMFJF>__);
      pSVar3 = (System_String_o *)0x0;
      if (pIVar2 != (Il2CppObject *)0x0) {
        local_38 = *(undefined4 *)&pIVar2[1].monitor;
        local_48.klass = (System_Enum_c *)DLIONECMCGE_TypeInfo;
        local_48.monitor = (void *)0xffffffffffffffff;
        pSVar3 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      }
      pSVar1 = StringLiteral_14461;
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar1 = pSVar3;
      }
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

