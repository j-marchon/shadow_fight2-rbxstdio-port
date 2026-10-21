// NGFEKJBMGEB$$MDLAKLCAEPK @ RVA 0x3119778

System_String_o * NGFEKJBMGEB__MDLAKLCAEPK(MethodInfo *method)

{
  ushort uVar1;
  Il2CppType *handle;
  KMBNFNCDDBP_o *__this;
  System_String_o *pSVar2;
  VirtualInvokeData *pVVar3;
  System_Type_o *BKFOLMBMFNP;
  System_Collections_Generic_IReadOnlyDictionary_string__string__c *pSVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_Generic_IReadOnlyDictionary_string__string__o *pSVar7;
  System_String_o *local_28;
  
  if ((DAT_045665d8 & 1) == 0) {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<string,_string>_TypeInfo);
    FUN_01bab630(&NGFEKJBMGEB_var);
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_18047);
    FUN_01bab630(&StringLiteral_22485);
    FUN_01bab630(&StringLiteral_6783);
    DAT_045665d8 = 1;
  }
  local_28 = (System_String_o *)0x0;
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045611dc == '\0') {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045611dc = '\x01';
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
  if (__this != (KMBNFNCDDBP_o *)0x0) {
    pSVar2 = KMBNFNCDDBP__MLHLAKMLJNI(__this,(MethodInfo *)0x0);
    if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NGFEKJBMGEB_TypeInfo);
    }
    pSVar7 = NGFEKJBMGEB_TypeInfo->static_fields->BCMCJEDJNGC;
    if (pSVar7 != (System_Collections_Generic_IReadOnlyDictionary_string__string__o *)0x0) {
      pSVar4 = pSVar7->klass;
      uVar1._0_1_ = (pSVar4->_2).rank;
      uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar1;
      if (uVar5 != 0) {
        piVar6 = &((pSVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IReadOnlyDictionary<string,_string>_TypeInfo
             ) {
            pVVar3 = pSVar4->vtable + (*piVar6 + 1);
            goto LAB_032198e4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar3 = (VirtualInvokeData *)
               FUN_01b81914(pSVar7,
                            System_Collections_Generic_IReadOnlyDictionary<string,_string>_TypeInfo,
                            1);
LAB_032198e4:
      uVar5 = (*pVVar3->methodPtr)(pSVar7,pSVar2,&local_28,pVVar3->method);
      handle = NGFEKJBMGEB_var;
      if ((uVar5 & 1) == 0) {
                    /* try { // try from 03219910 to 03319a03 has its CatchHandler @ 03219910
                       catch() { ... } // from try @ 03219910 with catch @ 03219910
                       catch() { ... } // from try @ 03219ab8 with catch @ 03219910
                       catch() { ... } // from try @ 03219af0 with catch @ 03219910
                       catch() { ... } // from try @ 03219b30 with catch @ 03219910
                       catch() { ... } // from try @ 03219b68 with catch @ 03219910 */
        local_28 = StringLiteral_18047;
      }
      if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      BKFOLMBMFNP = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat
                         (StringLiteral_6783,pSVar2,StringLiteral_22485,local_28,(MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA(BKFOLMBMFNP,pSVar2,(MethodInfo *)0x0);
      return local_28;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

