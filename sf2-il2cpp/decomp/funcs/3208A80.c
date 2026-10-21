// NLPJLHOEAOE.EANNNIEHPHH$$GBCBLINLEHM @ RVA 0x3208A80

PJKHAJKEHEL_o *
NLPJLHOEAOE_EANNNIEHPHH__GBCBLINLEHM
          (NLPJLHOEAOE_EANNNIEHPHH_o *__this,System_Collections_Generic_List_int__o *CNCDIMEKNPM,
          MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  bool bVar5;
  int item;
  PJKHAJKEHEL_o *pPVar6;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar7;
  System_Int32_array *pSVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  
  if ((DAT_04566e5d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    DAT_04566e5d = 1;
  }
  local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_80._8_4_ = 0;
  local_80._12_4_ = 0;
  local_70 = (Il2CppObject *)0x0;
  pSVar7 = (__this->fields).HHGNEMKLKHG;
  if (pSVar7 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
    iVar1 = (pSVar7->fields)._size;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    item = LIIFLGALGNK__HLMBDJOGONJ(iVar1,(MethodInfo *)0x0);
    if (CNCDIMEKNPM != (System_Collections_Generic_List_int__o *)0x0) {
      do {
        System_Collections_Generic_List<int>__GetEnumerator
                  (&local_98,CNCDIMEKNPM,Method_System_Collections_Generic_List<int>_GetEnumerator__
                  );
                    /* try { // try from 03308b8c to 03408b97 has its CatchHandler @ 03308c00 */
        bVar3 = false;
        local_80._8_4_ = local_98.fields._index;
        local_80._12_4_ = local_98.fields._version;
        local_80._0_8_ = local_98.fields._list;
        local_70 = local_98.fields._current;
                    /* try { // try from 03308bac to 03408be3 has its CatchHandler @ 03308610 */
        while (bVar5 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                                 ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                                  Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__)
              , bVar5) {
          if ((int)local_70 == item) {
            pSVar7 = (__this->fields).HHGNEMKLKHG;
            if (pSVar7 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            iVar1 = (pSVar7->fields)._size;
            if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar3 = true;
                    /* try { // try from 03308be4 to 03408be7 has its CatchHandler @ 03308bf8 */
                    /* try { // try from 03308be8 to 03408beb has its CatchHandler @ 03308bf4 */
                    /* try { // try from 03308bec to 03408bef has its CatchHandler @ 03308bf0 */
            item = LIIFLGALGNK__HLMBDJOGONJ(iVar1,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03308bec with catch @ 03308bf0
                       try { // try from 03308bf0 to 03408c1b has its CatchHandler @ 03308610 */
          }
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03308be8 with catch @ 03308bf4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03308be4 with catch @ 03308bf8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03308ba0 with catch @ 03308bfc
                        */
        System_Collections_Generic_List_Enumerator<int>__Dispose
                  ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                   Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
        lVar4 = Method_System_Collections_Generic_List<int>_Add__;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03308b8c with catch @ 03308c00
                        */
      } while (bVar3);
                    /* catch() { ... } // from try @ 03308c1c with catch @ 03308c48 */
      pSVar8 = (CNCDIMEKNPM->fields)._items;
                    /* try { // try from 03308c58 to 03408c5f has its CatchHandler @ 03308c74 */
      (CNCDIMEKNPM->fields)._version = (CNCDIMEKNPM->fields)._version + 1;
      if (pSVar8 != (System_Int32_array *)0x0) {
                    /* try { // try from 03308c60 to 03408c6b has its CatchHandler @ 03308610 */
        uVar2 = (CNCDIMEKNPM->fields)._size;
                    /* try { // try from 03308c6c to 03408c73 has its CatchHandler @ 03308c74 */
        if (uVar2 < (uint)pSVar8->max_length) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03308c58 with catch @ 03308c74
                       catch(type#2 @ 00000000) { ... } // from try @ 03308c6c with catch @ 03308c74
                        */
          (CNCDIMEKNPM->fields)._size = uVar2 + 1;
          pSVar8->m_Items[(int)uVar2] = item;
        }
        else {
          System_Collections_Generic_List<int>__AddWithResize
                    (CNCDIMEKNPM,item,
                     *(MethodInfo_26C766C **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        pSVar7 = (__this->fields).HHGNEMKLKHG;
        if (pSVar7 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
          pPVar6 = (PJKHAJKEHEL_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar7,item,
                              Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
          return pPVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

