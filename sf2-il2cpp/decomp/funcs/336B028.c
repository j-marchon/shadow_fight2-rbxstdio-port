// MDFGJKBMECA.LGNCFOEJBDP$$GMIOEDHLEIM @ RVA 0x336B028

void MDFGJKBMECA_LGNCFOEJBDP__GMIOEDHLEIM
               (MDFGJKBMECA_LGNCFOEJBDP_o *__this,int32_t GCMHMONNHII,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  int iVar7;
  int local_58;
  int local_54;
  
  if ((DAT_04567adf & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&StringLiteral_22448);
    FUN_01bab630(&StringLiteral_8294);
    FUN_01bab630(&StringLiteral_4333);
    DAT_04567adf = 1;
  }
  pSVar6 = (__this->fields).AFFPHLIMPKL;
  if (pSVar6 != (System_Collections_Generic_List_string__o *)0x0) {
    iVar7 = (pSVar6->fields)._size;
    if (GCMHMONNHII < iVar7) {
      return;
    }
    local_54 = iVar7;
    pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_54);
    pSVar4 = System_String__Format(StringLiteral_22448,StringLiteral_4333,pIVar3,(MethodInfo *)0x0);
    do {
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar5 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pSVar5 == (System_String_array *)0x0) break;
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar5->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar5->m_Items[(int)uVar1] = pSVar4;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pSVar6 = (__this->fields).PHDJNAEEIKK;
      local_58 = iVar7;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_58);
      pSVar4 = System_String__Format
                         (StringLiteral_22448,StringLiteral_8294,pIVar3,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) break;
      pSVar5 = (pSVar6->fields)._items;
      (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
      if (pSVar5 == (System_String_array *)0x0) break;
      uVar1 = (pSVar6->fields)._size;
      if (uVar1 < (uint)pSVar5->max_length) {
        (pSVar6->fields)._size = uVar1 + 1;
        pSVar5->m_Items[(int)uVar1] = pSVar4;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar4,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      iVar7 = iVar7 + 1;
      if (GCMHMONNHII < iVar7) {
        return;
      }
      pSVar6 = (__this->fields).AFFPHLIMPKL;
      local_54 = iVar7;
      pIVar3 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_54);
      pSVar4 = System_String__Format
                         (StringLiteral_22448,StringLiteral_4333,pIVar3,(MethodInfo *)0x0);
    } while (pSVar6 != (System_Collections_Generic_List_string__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

