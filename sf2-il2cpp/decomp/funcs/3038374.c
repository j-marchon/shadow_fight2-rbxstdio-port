// LJNJDFEAIOH$$HMCHGDKEHHE @ RVA 0x3038374

void LJNJDFEAIOH__HMCHGDKEHHE
               (LJNJDFEAIOH_o *__this,int32_t OICBCFGIIOA,int64_t ECLENFDGNKL,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  LJNJDFEAIOH_o *__this_00;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  Il2CppObject *item;
  LJNJDFEAIOH_c *pLVar6;
  System_Object_array *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_Generic_List_object__o *__this_01;
  
  if ((DAT_04565d69 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IEnumerator>_Add__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565d69 = 1;
  }
  if (ECLENFDGNKL <= OICBCFGIIOA * 60000) {
    return;
  }
  __this_01 = (System_Collections_Generic_List_object__o *)(__this->fields).GEFEAGGHDNK;
  __this_00 = (LJNJDFEAIOH_o *)CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar4 = LJNJDFEAIOH__NANCBNHCOBH(__this_00,ECLENFDGNKL - OICBCFGIIOA * 60000,OICBCFGIIOA,method);
  if (__this_00 != (LJNJDFEAIOH_o *)0x0) {
    pLVar6 = __this_00->klass;
    uVar1._0_1_ = (pLVar6->_2).rank;
    uVar1._1_1_ = (pLVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pLVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar5 = &(pLVar6->vtable)._0_Equals + *piVar9;
          goto LAB_03138454;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(__this_00,PBAKFOBIHEG_TypeInfo,0);
LAB_03138454:
    item = (Il2CppObject *)(*pVVar5->methodPtr)(__this_00,pSVar4,1,pVVar5->method);
    lVar3 = Method_System_Collections_Generic_List<IEnumerator>_Add__;
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar7 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pSVar7 != (System_Object_array *)0x0) {
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar7->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pSVar7->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04();
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_01,item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

