// OLKKAIFGGAK$$KJJJHPFIDKH @ RVA 0x34F5204

void OLKKAIFGGAK__KJJJHPFIDKH
               (OLKKAIFGGAK_o *__this,System_Collections_Generic_List_CNDPAJOLKFN__o *OABFBHCCODF,
               bool JOBCCBNCMNC,MethodInfo *method)

{
  int capacity;
  uint uVar1;
  long lVar2;
  GBJGJEGPHKD_o *__this_00;
  System_Collections_Generic_List_CNDPAJOLKFN__o *OABFBHCCODF_00;
  Il2CppObject *pIVar3;
  CNDPAJOLKFN_o *__this_01;
  OPNFCOGALLI_o *pOVar4;
  CNDPAJOLKFN_array *pCVar5;
  int index;
  float OKMABLDHNLJ;
  float PIBBGDEBBJC;
  float fVar6;
  
  if ((DAT_045687d1 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<CNDPAJOLKFN>_TypeInfo);
    DAT_045687d1 = 1;
  }
  if (((JOBCCBNCMNC) && (pOVar4 = (__this->fields).OAKOFJJIOFF, pOVar4 != (OPNFCOGALLI_o *)0x0)) &&
     ((pOVar4->fields).DMJAJGGGHPF == -1)) {
    if (OABFBHCCODF == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0) goto LAB_035f5408;
    capacity = (OABFBHCCODF->fields)._size;
    OABFBHCCODF_00 =
         (System_Collections_Generic_List_CNDPAJOLKFN__o *)
         thunk_FUN_01bda818(System_Collections_Generic_List<CNDPAJOLKFN>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)OABFBHCCODF_00,capacity,
               Method_System_Collections_Generic_List<CNDPAJOLKFN>__ctor__);
    if (0 < capacity) {
      index = 0;
      do {
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index,
                            Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_035f5408;
        fVar6 = *(float *)&pIVar3[1].klass;
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index,
                            Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_035f5408;
        OKMABLDHNLJ = *(float *)((long)&pIVar3[1].klass + 4);
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)OABFBHCCODF,index,
                            Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_035f5408;
        PIBBGDEBBJC = *(float *)&pIVar3[1].monitor;
        __this_01 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
        CNDPAJOLKFN___ctor(__this_01,-fVar6,OKMABLDHNLJ,PIBBGDEBBJC,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<CNDPAJOLKFN>_Add__;
        if (OABFBHCCODF_00 == (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)
        goto LAB_035f5408;
        pCVar5 = (OABFBHCCODF_00->fields)._items;
        (OABFBHCCODF_00->fields)._version = (OABFBHCCODF_00->fields)._version + 1;
        if (pCVar5 == (CNDPAJOLKFN_array *)0x0) goto LAB_035f5408;
        uVar1 = (OABFBHCCODF_00->fields)._size;
        if (uVar1 < (uint)pCVar5->max_length) {
          (OABFBHCCODF_00->fields)._size = uVar1 + 1;
          pCVar5->m_Items[(int)uVar1] = __this_01;
          thunk_FUN_01c20e04(pCVar5->m_Items + (int)uVar1,__this_01);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)OABFBHCCODF_00,
                     (Il2CppObject *)__this_01,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        index = index + 1;
      } while (capacity != index);
    }
    __this_00 = (__this->fields).HMIAFJALFCJ;
  }
  else {
    __this_00 = (__this->fields).HMIAFJALFCJ;
    OABFBHCCODF_00 = OABFBHCCODF;
  }
  if (__this_00 != (GBJGJEGPHKD_o *)0x0) {
    GBJGJEGPHKD__KJJJHPFIDKH(__this_00,OABFBHCCODF_00,(MethodInfo *)0x0);
    return;
  }
LAB_035f5408:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

