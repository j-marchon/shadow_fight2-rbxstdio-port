// AEGOLGIJEBI$$HJDNHACEPJI @ RVA 0x3302F04

System_Collections_Generic_List_AEGOLGIJEBI_MCGKJAGBFKP__o *
AEGOLGIJEBI__HJDNHACEPJI(System_String_o **JGHIJMJNJLE,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int32_t EJABGOLHHBC;
  int32_t iVar5;
  System_Collections_Generic_List_AEGOLGIJEBI_MCGKJAGBFKP__o *__this;
  System_String_o *pSVar6;
  AEGOLGIJEBI_MCGKJAGBFKP_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar7;
  MethodInfo *in_x6;
  AEGOLGIJEBI_MCGKJAGBFKP_array *pAVar8;
  
  if ((DAT_04567730 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>_TypeInfo);
    FUN_01bab630(&AEGOLGIJEBI_MCGKJAGBFKP_TypeInfo);
    FUN_01bab630(&StringLiteral_2421);
    FUN_01bab630(&StringLiteral_10627);
    FUN_01bab630(&StringLiteral_10626);
    FUN_01bab630(&StringLiteral_2475);
    DAT_04567730 = 1;
    method = extraout_x1;
  }
  __this = (System_Collections_Generic_List_AEGOLGIJEBI_MCGKJAGBFKP__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>_TypeInfo,
                              method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>__ctor__);
  if (*JGHIJMJNJLE != (System_String_o *)0x0) {
    bVar4 = System_String__Contains(*JGHIJMJNJLE,StringLiteral_2421,(MethodInfo *)0x0);
    if (!bVar4) {
      return __this;
    }
    pSVar6 = *JGHIJMJNJLE;
    if (pSVar6 != (System_String_o *)0x0) {
      iVar7 = 0;
      while( true ) {
        if ((pSVar6->fields)._stringLength <= iVar7) {
          return __this;
        }
        EJABGOLHHBC = System_String__IndexOf(pSVar6,StringLiteral_2421,iVar7,(MethodInfo *)0x0);
        if (EJABGOLHHBC < 0) {
          return __this;
        }
        if ((StringLiteral_2421 == (System_String_o *)0x0) ||
           (*JGHIJMJNJLE == (System_String_o *)0x0)) break;
        iVar5 = System_String__IndexOf
                          (*JGHIJMJNJLE,StringLiteral_2475,
                           (StringLiteral_2421->fields)._stringLength + EJABGOLHHBC,
                           (MethodInfo *)0x0);
        if (iVar5 < 0) {
          pSVar6 = StringLiteral_10626;
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pSVar6 = StringLiteral_10626;
          }
LAB_03403188:
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
          return __this;
        }
        if (iVar5 < EJABGOLHHBC) {
          pSVar6 = System_String__Concat(StringLiteral_10627,*JGHIJMJNJLE,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          goto LAB_03403188;
        }
        if ((StringLiteral_2475 == (System_String_o *)0x0) ||
           (StringLiteral_2421 == (System_String_o *)0x0)) break;
        iVar1 = (StringLiteral_2421->fields)._stringLength;
        pSVar6 = *JGHIJMJNJLE;
        iVar7 = iVar5 + -1 + (StringLiteral_2475->fields)._stringLength;
        __this_00 = (AEGOLGIJEBI_MCGKJAGBFKP_o *)
                    thunk_FUN_01bda818(AEGOLGIJEBI_MCGKJAGBFKP_TypeInfo);
        AEGOLGIJEBI_MCGKJAGBFKP___ctor
                  (__this_00,pSVar6,iVar1 + EJABGOLHHBC,iVar5 + -1,EJABGOLHHBC,iVar7,in_x6);
        lVar3 = Method_System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>_Add__;
        if (__this == (System_Collections_Generic_List_AEGOLGIJEBI_MCGKJAGBFKP__o *)0x0) break;
        pAVar8 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pAVar8 == (AEGOLGIJEBI_MCGKJAGBFKP_array *)0x0) break;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pAVar8->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pAVar8->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pAVar8->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        if (StringLiteral_2475 == (System_String_o *)0x0) break;
        pSVar6 = *JGHIJMJNJLE;
        iVar7 = iVar7 + (StringLiteral_2475->fields)._stringLength + -1;
        if (pSVar6 == (System_String_o *)0x0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

