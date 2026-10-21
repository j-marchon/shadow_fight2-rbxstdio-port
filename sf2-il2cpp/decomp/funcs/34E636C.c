// OLKKAIFGGAK$$OPLIANBGNML @ RVA 0x34E636C

void OLKKAIFGGAK__OPLIANBGNML(OLKKAIFGGAK_o *__this,OLKKAIFGGAK_o *JALKELIHLPC,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  OPNFCOGALLI_o *pOVar4;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar5;
  System_Collections_Generic_List_OIGAJAKPPEO__o *__this_00;
  NGKBNOEJLPH_o *__this_01;
  OPNFCOGALLI_o *pOVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  OLKKAIFGGAK_o *pOVar7;
  OLKKAIFGGAK_array *pOVar8;
  PJKHAJKEHEL_o *pPVar9;
  HOOAAGABMBL_o *pHVar10;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04568769 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_GetEnumerator__);
    DAT_04568769 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pOVar7 = (__this->fields).NFMBPIPEKGF;
  pOVar4 = (__this->fields).OAKOFJJIOFF;
  if (pOVar7 == (OLKKAIFGGAK_o *)0x0) {
    pOVar6 = (OPNFCOGALLI_o *)0x0;
  }
  else {
    pOVar6 = (pOVar7->fields).OAKOFJJIOFF;
  }
  if (pOVar4 != (OPNFCOGALLI_o *)0x0) {
    (pOVar4->fields).DPNACGKHLGD = pOVar6;
    thunk_FUN_01c20e04();
    lVar2 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__;
    if (JALKELIHLPC == (OLKKAIFGGAK_o *)0x0) {
                    /* try { // try from 035e6570 to 036e6573 has its CatchHandler @ 035e6578 */
                    /* try { // try from 035e6574 to 036e659b has its CatchHandler @ 035e5f0c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e6570 with catch @ 035e6578
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e656c with catch @ 035e657c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e6568 with catch @ 035e6580
                        */
      return;
    }
    pSVar5 = (__this->fields).BGODEHNIMGC;
    if (pSVar5 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      pOVar8 = (pSVar5->fields)._items;
      (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
      if (pOVar8 != (OLKKAIFGGAK_array *)0x0) {
        uVar1 = (pSVar5->fields)._size;
        if (uVar1 < (uint)pOVar8->max_length) {
          (pSVar5->fields)._size = uVar1 + 1;
          pOVar8->m_Items[(int)uVar1] = JALKELIHLPC;
          thunk_FUN_01c20e04(pOVar8->m_Items + (int)uVar1,JALKELIHLPC);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)JALKELIHLPC
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        __this_00 = (JALKELIHLPC->fields).MPLCPGJEHPG;
        if (__this_00 != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
                     Method_System_Collections_Generic_List<OIGAJAKPPEO>_GetEnumerator__);
          local_50.fields._index = local_68.fields._index;
          local_50.fields._version = local_68.fields._version;
                    /* try { // try from 035e64a8 to 036e64af has its CatchHandler @ 035e658c */
          local_50.fields._list = local_68.fields._list;
          local_50.fields._current = local_68.fields._current;
          while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_50,
                                    Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_MoveNext__
                                   ),
                lVar2 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__, bVar3) {
            pSVar5 = (__this->fields).BGODEHNIMGC;
            if (pSVar5 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e64dc with catch @ 035e6584
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e64c8 with catch @ 035e6588
                        */
              FUN_01bab8c8();
            }
                    /* try { // try from 035e64c8 to 036e64d3 has its CatchHandler @ 035e6588 */
            pOVar8 = (pSVar5->fields)._items;
                    /* try { // try from 035e64dc to 036e64e3 has its CatchHandler @ 035e6584 */
            (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
            if (pOVar8 == (OLKKAIFGGAK_array *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e64a8 with catch @ 035e658c
                        */
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 035e64e4 to 036e6567 has its CatchHandler @ 035e5f0c */
            uVar1 = (pSVar5->fields)._size;
            if (uVar1 < (uint)pOVar8->max_length) {
              (pSVar5->fields)._size = uVar1 + 1;
              pOVar8->m_Items[(int)uVar1] = (OLKKAIFGGAK_o *)local_50.fields._current;
              thunk_FUN_01c20e04(pOVar8->m_Items + (int)uVar1);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar5,
                         local_50.fields._current,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
          pOVar4 = (__this->fields).OAKOFJJIOFF;
          if (pOVar4 != (OPNFCOGALLI_o *)0x0) {
            (pOVar4->fields).MLANKGMLJBF = (JALKELIHLPC->fields).OAKOFJJIOFF;
            thunk_FUN_01c20e04();
            pPVar9 = (JALKELIHLPC->fields).FAPMJJBOFEF;
            if (pPVar9 != (PJKHAJKEHEL_o *)0x0) {
              pHVar10 = (pPVar9->fields).PNAAPNFPCPI;
              method_00 = extraout_x1;
              if (pHVar10 != (HOOAAGABMBL_o *)0x0) {
                __this_01 = (__this->fields).ADGFKAPOIFN;
                if (__this_01 == (NGKBNOEJLPH_o *)0x0) goto LAB_035e6594;
                NGKBNOEJLPH__CLCEDPNEOKL
                          (__this_01,(pHVar10->fields)._DKODBGOHKGH_k__BackingField,
                           (MethodInfo *)0x0);
                method_00 = extraout_x1_00;
              }
                    /* try { // try from 035e6568 to 036e656b has its CatchHandler @ 035e6580 */
                    /* try { // try from 035e656c to 036e656f has its CatchHandler @ 035e657c */
              OLKKAIFGGAK__IKMPJAAFEEA(__this,method_00);
              return;
            }
          }
        }
      }
    }
  }
LAB_035e6594:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

