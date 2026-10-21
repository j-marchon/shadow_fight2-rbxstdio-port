// FDJKKAFIEFB.EDHDJBHADAK$$CACOKDGBCIB @ RVA 0x35B5D78

System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *
FDJKKAFIEFB_EDHDJBHADAK__CACOKDGBCIB
          (FDJKKAFIEFB_EDHDJBHADAK_o *__this,GIDPGJAAOJA_o *provider,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *pSVar3;
  GIDPGJAAOJA_c *pGVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_String_o *pSVar7;
  
  if ((DAT_04568ebd & 1) == 0) {
    FUN_01bab630(&GIDPGJAAOJA_TypeInfo);
    DAT_04568ebd = 1;
  }
  if (provider == (GIDPGJAAOJA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pGVar4 = provider->klass;
  pSVar7 = (__this->fields).languageName;
  uVar1._0_1_ = (pGVar4->_2).rank;
  uVar1._1_1_ = (pGVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pGVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)GIDPGJAAOJA_TypeInfo) {
        pVVar2 = pGVar4->vtable + *piVar6;
        goto LAB_036b5e04;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(provider,GIDPGJAAOJA_TypeInfo,0);
LAB_036b5e04:
                    /* WARNING: Could not recover jumptable at 0x036b5e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar3 = (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)
           (*pVVar2->methodPtr)(provider,pSVar7,pVVar2->method);
  return pSVar3;
}

