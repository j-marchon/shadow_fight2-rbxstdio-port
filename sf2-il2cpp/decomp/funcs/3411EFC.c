// MGNPHCAAEIO.FGHBAEIKNBF$$EGAMDFPKABL @ RVA 0x3411EFC

System_Collections_Generic_List_KMJDCOABCCG__o *
MGNPHCAAEIO_FGHBAEIKNBF__EGAMDFPKABL(MGNPHCAAEIO_FGHBAEIKNBF_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_KMJDCOABCCG__o *__this_00;
  Il2CppObject *pIVar3;
  MGNPHCAAEIO_FGHBAEIKNBF_o *__this_01;
  KFGGMKHNCGM_o *pKVar4;
  KMJDCOABCCG_o *item;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar5;
  FEPPOONJCGI_o *pFVar6;
  KMJDCOABCCG_array *pKVar7;
  System_Collections_Generic_List_PANJAHAFBMD__o *__this_02;
  int index;
  System_String_o *KGLJICLJHEL;
  System_Collections_Generic_List_KMJDCOABCCG__o *__this_03;
  int index_00;
  
  if ((DAT_0456808b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<KMJDCOABCCG>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456808b = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KMJDCOABCCG__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KMJDCOABCCG>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KMJDCOABCCG>__ctor__);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
      (pFVar6 = (pAVar5->fields).IMJJJJJMMHL, pFVar6 != (FEPPOONJCGI_o *)0x0)) &&
     (__this_02 = (pFVar6->fields).MCDCFBOBJGI,
     __this_02 != (System_Collections_Generic_List_PANJAHAFBMD__o *)0x0)) {
    if (0 < (__this_02->fields)._size) {
      index = 0;
      do {
        method_00 = Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__;
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_02,index,
                            (MethodInfo_26E4ADC *)
                            Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03512170;
        KGLJICLJHEL = pIVar3[1].monitor;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
        if (__this_01 == (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) goto LAB_03512170;
        pKVar4 = MGNPHCAAEIO_FGHBAEIKNBF__HALKOOLIBED(__this_01,KGLJICLJHEL,method_00);
        if (pKVar4 != (KFGGMKHNCGM_o *)0x0) {
          __this_03 = (pKVar4->fields).EHGOHNHDKPP;
          if (__this_03 == (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) goto LAB_03512170;
          if (0 < (__this_03->fields)._size) {
            index_00 = 0;
            do {
              item = (KMJDCOABCCG_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_03,index_00,
                                Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
              lVar2 = Method_System_Collections_Generic_List<KMJDCOABCCG>_Add__;
              if (item == (KMJDCOABCCG_o *)0x0) goto LAB_03512170;
              if ((item->fields).ADHFHEJFJPK <= *(int *)&pIVar3[2].klass) {
                if (__this_00 == (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0)
                goto LAB_03512170;
                pKVar7 = (__this_00->fields)._items;
                (__this_00->fields)._version = (__this_00->fields)._version + 1;
                if (pKVar7 == (KMJDCOABCCG_array *)0x0) goto LAB_03512170;
                uVar1 = (__this_00->fields)._size;
                if (uVar1 < (uint)pKVar7->max_length) {
                  (__this_00->fields)._size = uVar1 + 1;
                  pKVar7->m_Items[(int)uVar1] = item;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
              }
              index_00 = index_00 + 1;
            } while (index_00 < (__this_03->fields)._size);
          }
        }
        index = index + 1;
      } while (index < (__this_02->fields)._size);
    }
    return __this_00;
  }
LAB_03512170:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

