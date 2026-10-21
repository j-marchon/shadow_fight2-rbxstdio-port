// NLPJLHOEAOE$$GINBGECFLHA @ RVA 0x31F8E3C

System_Collections_Generic_List_PJKHAJKEHEL__o *
NLPJLHOEAOE__GINBGECFLHA
          (NLPJLHOEAOE_o *__this,PJKHAJKEHEL_o *JMCEAKJCJLH,int32_t DFIBGGDJPLM,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_PJKHAJKEHEL__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  NLPJLHOEAOE_EANNNIEHPHH_o *__this_02;
  System_Collections_Generic_List_int__o *CNCDIMEKNPM;
  PJKHAJKEHEL_o *pPVar6;
  Il2CppObject *pIVar7;
  PJKHAJKEHEL_o *pPVar8;
  System_Xml_XmlNode_o *pSVar9;
  System_Xml_XmlAttributeCollection_o *__this_03;
  System_Xml_XmlAttribute_o *pSVar10;
  PJKHAJKEHEL_o *pPVar11;
  PJKHAJKEHEL_o *OAJIAGAOEOO;
  MethodInfo *in_x4;
  System_Collections_Generic_List_CILAFHOFEGC__o *pSVar12;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar13;
  PJKHAJKEHEL_array *pPVar14;
  int index;
  int iVar15;
  int iVar16;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566dd9 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<List<int>>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CILAFHOFEGC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CILAFHOFEGC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<CILAFHOFEGC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CILAFHOFEGC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<int>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CILAFHOFEGC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<List<int>>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<PJKHAJKEHEL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<List<int>>_TypeInfo);
    FUN_01bab630(&PJKHAJKEHEL_TypeInfo);
    FUN_01bab630(&StringLiteral_12864);
    DAT_04566dd9 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_PJKHAJKEHEL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PJKHAJKEHEL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PJKHAJKEHEL>__ctor__);
  if (JMCEAKJCJLH == (PJKHAJKEHEL_o *)0x0) goto LAB_032f9424;
  bVar4 = PJKHAJKEHEL__FNHJLFOFAHK(JMCEAKJCJLH,(MethodInfo *)0x0);
  if (bVar4) {
    __this_01 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<List<int>>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_01,Method_System_Collections_Generic_List<List<int>>__ctor__);
    pSVar12 = (JMCEAKJCJLH->fields).ADGOLGDBIEJ;
    if (pSVar12 == (System_Collections_Generic_List_CILAFHOFEGC__o *)0x0) goto LAB_032f9424;
    pPVar11 = Method_DJNBJHPDKDP_LJCDLMMMOGD<List<int>>__;
    DJNBJHPDKDP__LJCDLMMMOGD<object>
              ((System_Collections_Generic_List_T__o *)__this_01,(pSVar12->fields)._size,
               (MethodInfo_1E826C4 *)Method_DJNBJHPDKDP_LJCDLMMMOGD<List<int>>__);
    if (0 < DFIBGGDJPLM) {
      iVar15 = 0;
      iVar16 = 0;
      do {
        pSVar12 = (JMCEAKJCJLH->fields).ADGOLGDBIEJ;
        if (pSVar12 == (System_Collections_Generic_List_CILAFHOFEGC__o *)0x0) goto LAB_032f9424;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar12,
                   Method_System_Collections_Generic_List<CILAFHOFEGC>_GetEnumerator__);
        index = 0;
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        OAJIAGAOEOO = (PJKHAJKEHEL_o *)0x0;
        while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<CILAFHOFEGC>_MoveNext__
                                 ), pIVar7 = local_80.fields._current, bVar4) {
          if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_02 = NLPJLHOEAOE__JODLEMOLLDO
                                (__this,(System_String_o *)local_80.fields._current[1].klass,
                                 (MethodInfo *)pPVar11);
          pPVar8 = OAJIAGAOEOO;
          if (__this_02 != (NLPJLHOEAOE_EANNNIEHPHH_o *)0x0) {
                    /* try { // try from 032f9050 to 033f91cb has its CatchHandler @ 032f9050
                       catch() { ... } // from try @ 032f9050 with catch @ 032f9050
                       catch() { ... } // from try @ 032f91fc with catch @ 032f9050
                       catch() { ... } // from try @ 032f9220 with catch @ 032f9050
                       catch() { ... } // from try @ 032f9248 with catch @ 032f9050
                       catch() { ... } // from try @ 032f9278 with catch @ 032f9050 */
            if (*(char *)&pIVar7[1].monitor == '\0') {
              iVar5 = NLPJLHOEAOE_EANNNIEHPHH__LPJNHOACLDJ(__this_02,(MethodInfo *)0x0);
              pSVar13 = (__this_02->fields).HHGNEMKLKHG;
              if (pSVar13 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar1 = 0;
              if (iVar5 != 0) {
                iVar1 = iVar16 / iVar5;
              }
              pPVar11 = Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__;
              pPVar6 = (PJKHAJKEHEL_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar13,
                                  iVar16 - iVar1 * iVar5,
                                  (MethodInfo_26E4ADC *)
                                  Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
            }
            else if (*(char *)((long)&pIVar7[1].monitor + 1) == '\0') {
              pPVar6 = NLPJLHOEAOE_EANNNIEHPHH__GBCBLINLEHM(__this_02,(MethodInfo *)0x0);
            }
            else {
              if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              CNCDIMEKNPM = (System_Collections_Generic_List_int__o *)
                            System_Collections_Generic_List<object>__get_Item
                                      (__this_01,index,
                                       (MethodInfo_26E4ADC *)
                                       Method_System_Collections_Generic_List<List<int>>_get_Item__)
              ;
              pPVar11 = (PJKHAJKEHEL_o *)0x0;
              pPVar6 = NLPJLHOEAOE_EANNNIEHPHH__GBCBLINLEHM(__this_02,CNCDIMEKNPM,(MethodInfo *)0x0)
              ;
              pSVar13 = (__this_02->fields).HHGNEMKLKHG;
              if (pSVar13 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (iVar15 < (pSVar13->fields)._size + -1) {
                iVar15 = iVar15 + 1;
              }
              else {
                pPVar11 = Method_System_Collections_Generic_List<List<int>>_get_Item__;
                pIVar7 = System_Collections_Generic_List<object>__get_Item
                                   (__this_01,index,
                                    (MethodInfo_26E4ADC *)
                                    Method_System_Collections_Generic_List<List<int>>_get_Item__);
                if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                iVar1 = *(int *)((long)&pIVar7[1].monitor + 4);
                iVar15 = 0;
                *(undefined4 *)&pIVar7[1].monitor = 0;
                *(int *)((long)&pIVar7[1].monitor + 4) = iVar1 + 1;
              }
            }
            if ((pPVar6 != (PJKHAJKEHEL_o *)0x0) &&
               (pPVar8 = pPVar6, OAJIAGAOEOO != (PJKHAJKEHEL_o *)0x0)) {
              method = (MethodInfo *)0x1;
              pPVar8 = NLPJLHOEAOE__MDEGKNMDKPN
                                 (__this,(pPVar6->fields).JHFENACKNPG,OAJIAGAOEOO,true,in_x4);
              NLPJLHOEAOE__AEPHAFAHAGA(__this,pPVar8,(MethodInfo *)OAJIAGAOEOO);
              pPVar11 = OAJIAGAOEOO;
            }
          }
          index = index + 1;
          OAJIAGAOEOO = pPVar8;
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<CILAFHOFEGC>_Dispose__);
        if (OAJIAGAOEOO != (PJKHAJKEHEL_o *)0x0) {
          pSVar9 = (JMCEAKJCJLH->fields).JHFENACKNPG;
          if ((pSVar9 == (System_Xml_XmlNode_o *)0x0) ||
             (__this_03 = (System_Xml_XmlAttributeCollection_o *)
                          (*(pSVar9->klass->vtable)._16_get_Attributes.methodPtr)
                                    (pSVar9,(pSVar9->klass->vtable)._16_get_Attributes.method),
             __this_03 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_032f9424;
          pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_03,StringLiteral_12864,(MethodInfo *)0x0);
          if (pSVar10 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 032f91cc to 033f91d3 has its CatchHandler @ 032f922c */
            method = (MethodInfo *)0x1;
            pPVar8 = NLPJLHOEAOE__MDEGKNMDKPN
                               (__this,(JMCEAKJCJLH->fields).JHFENACKNPG,OAJIAGAOEOO,true,in_x4);
            pPVar11 = OAJIAGAOEOO;
            lVar3 = Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__;
          }
          else {
            pPVar8 = PJKHAJKEHEL__FAOBHLCDKJI(OAJIAGAOEOO,(MethodInfo *)0x0);
            pPVar11 = JMCEAKJCJLH;
            NLPJLHOEAOE__ECJILAGJEEE((NLPJLHOEAOE_o *)pPVar8,pPVar8,JMCEAKJCJLH,method);
            lVar3 = Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__;
          }
          Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__ = lVar3;
          if (__this_00 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) goto LAB_032f9424;
          pPVar14 = (__this_00->fields)._items;
                    /* try { // try from 032f91f0 to 033f91fb has its CatchHandler @ 032f9224 */
                    /* try { // try from 032f91fc to 033f921b has its CatchHandler @ 032f9050 */
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pPVar14 == (PJKHAJKEHEL_array *)0x0) goto LAB_032f9424;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pPVar14->max_length) {
                    /* try { // try from 032f921c to 033f921f has its CatchHandler @ 032f9228 */
            (__this_00->fields)._size = uVar2 + 1;
                    /* try { // try from 032f9220 to 033f9243 has its CatchHandler @ 032f9050 */
            pPVar14->m_Items[(int)uVar2] = pPVar8;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032f91f0 with catch @ 032f9224
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032f921c with catch @ 032f9228
                        */
            thunk_FUN_01c20e04(pPVar14->m_Items + (int)uVar2,pPVar8);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032f91cc with catch @ 032f922c
                        */
          }
          else {
            pPVar11 = *(PJKHAJKEHEL_o **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
                    /* try { // try from 032f9244 to 033f9247 has its CatchHandler @ 032f9268 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pPVar8
                       ,(MethodInfo_26E4DAC *)pPVar11);
          }
        }
                    /* try { // try from 032f9248 to 033f926f has its CatchHandler @ 032f9050 */
        iVar16 = iVar16 + 1;
      } while (iVar16 != DFIBGGDJPLM);
    }
LAB_032f9388:
    if (__this_00 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) goto LAB_032f9424;
  }
  else {
    if (DFIBGGDJPLM < 1) goto LAB_032f9388;
    do {
      pPVar11 = PJKHAJKEHEL__FAOBHLCDKJI(JMCEAKJCJLH,(MethodInfo *)0x0);
      lVar3 = Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__;
      if (__this_00 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) goto LAB_032f9424;
      pPVar14 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pPVar14 == (PJKHAJKEHEL_array *)0x0) goto LAB_032f9424;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pPVar14->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pPVar14->m_Items[(int)uVar2] = pPVar11;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pPVar11,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      DFIBGGDJPLM = DFIBGGDJPLM + -1;
    } while (DFIBGGDJPLM != 0);
  }
  if ((__this_00->fields)._size == 0) {
    pPVar11 = PJKHAJKEHEL__FAOBHLCDKJI(JMCEAKJCJLH,(MethodInfo *)0x0);
    lVar3 = Method_System_Collections_Generic_List<PJKHAJKEHEL>_Add__;
    pPVar14 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pPVar14 == (PJKHAJKEHEL_array *)0x0) {
LAB_032f9424:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pPVar14->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pPVar14->m_Items[(int)uVar2] = pPVar11;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pPVar11,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
  }
  return __this_00;
}

