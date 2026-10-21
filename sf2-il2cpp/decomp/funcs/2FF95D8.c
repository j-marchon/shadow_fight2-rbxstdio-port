// JMDPBFOCHHP$$BBIAIOFGMEA @ RVA 0x2FF95D8

System_String_o * JMDPBFOCHHP__BBIAIOFGMEA(JMDPBFOCHHP_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_o *item;
  System_Collections_Generic_List_string__o *collection;
  JMDPBFOCHHP_PEFEIMKBGAH_o *pJVar5;
  System_String_array *pSVar6;
  
  if ((DAT_04565abf & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04565abf = 1;
  }
  pJVar5 = (__this->fields).EJCCMMEGGFF;
  if ((pJVar5 == (JMDPBFOCHHP_PEFEIMKBGAH_o *)0x0) ||
     (pSVar4 = (pJVar5->fields).AMKLDMEBJDP,
     pSVar4 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_030f97bc;
  if ((pSVar4->fields)._size == 0) {
    collection = (pJVar5->fields).JNCNFDFICON;
    if (collection == (System_Collections_Generic_List_string__o *)0x0) goto LAB_030f97bc;
    if ((collection->fields)._size < 1) {
      return (System_String_o *)0x0;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar4,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               Method_System_Collections_Generic_List<string>_AddRange__);
    pJVar5 = (__this->fields).EJCCMMEGGFF;
    if ((pJVar5 == (JMDPBFOCHHP_PEFEIMKBGAH_o *)0x0) ||
       (pSVar4 = (pJVar5->fields).JNCNFDFICON,
       pSVar4 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_030f97bc;
    iVar3 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (0 < iVar3) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar3,(MethodInfo *)0x0);
      pJVar5 = (__this->fields).EJCCMMEGGFF;
      if (pJVar5 == (JMDPBFOCHHP_PEFEIMKBGAH_o *)0x0) goto LAB_030f97bc;
    }
  }
  pSVar4 = (pJVar5->fields).AMKLDMEBJDP;
  if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
    iVar3 = (pSVar4->fields)._size;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar3 = LIIFLGALGNK__HLMBDJOGONJ(iVar3,(MethodInfo *)0x0);
    pJVar5 = (__this->fields).EJCCMMEGGFF;
    if ((pJVar5 != (JMDPBFOCHHP_PEFEIMKBGAH_o *)0x0) &&
       (pSVar4 = (pJVar5->fields).AMKLDMEBJDP,
       pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) {
      item = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar4,iVar3,
                        Method_System_Collections_Generic_List<string>_get_Item__);
      pJVar5 = (__this->fields).EJCCMMEGGFF;
      if ((pJVar5 != (JMDPBFOCHHP_PEFEIMKBGAH_o *)0x0) &&
         (pSVar4 = (pJVar5->fields).AMKLDMEBJDP,
         pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) {
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar4,iVar3,
                   Method_System_Collections_Generic_List<string>_RemoveAt__);
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pJVar5 = (__this->fields).EJCCMMEGGFF;
        if ((pJVar5 != (JMDPBFOCHHP_PEFEIMKBGAH_o *)0x0) &&
           (pSVar4 = (pJVar5->fields).JNCNFDFICON,
           pSVar4 != (System_Collections_Generic_List_string__o *)0x0)) {
          pSVar6 = (pSVar4->fields)._items;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (pSVar6 != (System_String_array *)0x0) {
            uVar1 = (pSVar4->fields)._size;
            if (uVar1 < (uint)pSVar6->max_length) {
              (pSVar4->fields)._size = uVar1 + 1;
              pSVar6->m_Items[(int)uVar1] = item;
              thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,item);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            return item;
          }
        }
      }
    }
  }
LAB_030f97bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

