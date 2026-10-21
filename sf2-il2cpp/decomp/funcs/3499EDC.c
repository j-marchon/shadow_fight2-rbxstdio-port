// NGKBNOEJLPH$$CAHGELFIKDM @ RVA 0x3499EDC

bool NGKBNOEJLPH__CAHGELFIKDM
               (NGKBNOEJLPH_o *__this,OLKKAIFGGAK_o *IFCJAOGIPJE,int32_t ACCIHBHMFPN,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  NGKBNOEJLPH_o *__this_00;
  GBJGJEGPHKD_o *__this_01;
  IEFEBEDLHNN_o *pIVar5;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_02;
  Il2CppObject *pIVar6;
  OLKKAIFGGAK_o *pOVar7;
  OLKKAIFGGAK_o *method_00;
  System_Collections_Generic_List_OIGAJAKPPEO__o *pSVar8;
  Il2CppClass *pIVar9;
  CNDPAJOLKFN_o *pCVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  __this_00 = __this;
  if ((DAT_0456845a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Count__);
    __this_00 = (NGKBNOEJLPH_o *)
                FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_0456845a = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((IFCJAOGIPJE != (OLKKAIFGGAK_o *)0x0) &&
     (pSVar8 = (IFCJAOGIPJE->fields).MPLCPGJEHPG,
     pSVar8 != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0)) {
    if (((pSVar8->fields)._size == 0) ||
       (pOVar7 = (__this->fields).KOHECBJAFKG, pOVar7 == (OLKKAIFGGAK_o *)0x0)) {
      bVar11 = false;
                    /* try { // try from 0359a0c0 to 0369a0c3 has its CatchHandler @ 0359a0d4 */
    }
    else {
      method_00 = IFCJAOGIPJE;
      NGKBNOEJLPH__NPFGMAOAAED(__this_00,pOVar7,IFCJAOGIPJE,method);
      pSVar8 = (IFCJAOGIPJE->fields).MPLCPGJEHPG;
      if (pSVar8 == (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) goto LAB_0359a0fc;
                    /* try { // try from 03599f94 to 0369a043 has its CatchHandler @ 03599f94
                       catch() { ... } // from try @ 03599f94 with catch @ 03599f94
                       catch() { ... } // from try @ 0359a080 with catch @ 03599f94
                       catch() { ... } // from try @ 0359a0c4 with catch @ 03599f94
                       catch() { ... } // from try @ 0359a0cc with catch @ 03599f94
                       catch() { ... } // from try @ 0359a0f4 with catch @ 03599f94
                       catch() { ... } // from try @ 0359a134 with catch @ 03599f94 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)pSVar8,
                 Method_System_Collections_Generic_List<OIGAJAKPPEO>_GetEnumerator__);
      bVar11 = false;
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_70,
                                Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_MoveNext__
                               ), pIVar3 = local_70.fields._current, bVar4) {
        if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar9 = local_70.fields._current[0x29].klass;
        if (((pIVar9 != (Il2CppClass *)0x0) && (pIVar9->vtable[2].method != (MethodInfo *)0x0)) &&
           ((bVar4 = NGKBNOEJLPH__JNLBJPDBFPP
                               (__this,(ECENNHNBAME_o *)pIVar9->vtable[2].methodPtr,
                                (MethodInfo *)method_00), ACCIHBHMFPN != 0 || (bVar4)))) {
          if (pIVar3[0x29].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar4 = NGKBNOEJLPH__DFDGPADDMDE
                            (__this,(ECENNHNBAME_o *)(pIVar3[0x29].klass)->vtable[2].methodPtr,
                             (MethodInfo *)method_00);
          if ((ACCIHBHMFPN != 1) || (bVar4)) {
            pOVar7 = (__this->fields).KOHECBJAFKG;
            if (pOVar7 == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0359a0f0 with catch @ 0359a11c */
              FUN_01bab8c8();
            }
            __this_01 = (pOVar7->fields).HMIAFJALFCJ;
            if (__this_01 == (GBJGJEGPHKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 0359a044 to 0369a04b has its CatchHandler @ 0359a0d8 */
            pIVar5 = GBJGJEGPHKD__ILECMJOENMK(__this_01,(MethodInfo *)0x0);
            if (pIVar5 == (IEFEBEDLHNN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pCVar10 = (pIVar5->fields).CNMHHKAMGPI;
            if (pCVar10 == (CNDPAJOLKFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (pIVar3[0x25].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            fVar13 = (pCVar10->fields).super.OHHDBINAJCB;
            __this_02 = GBJGJEGPHKD__HMAAHELNECD
                                  ((GBJGJEGPHKD_o *)pIVar3[0x25].klass,(MethodInfo *)0x0);
            if (__this_02 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            method_00 = Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__;
                    /* try { // try from 0359a070 to 0369a07f has its CatchHandler @ 0359a0d0 */
            pIVar6 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,0,
                                (MethodInfo_26E4ADC *)
                                Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
            if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 0359a080 to 0369a0bf has its CatchHandler @ 03599f94 */
            if (pIVar6[3].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (pIVar3[0x29].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            fVar12 = *(float *)((long)pIVar6[3].monitor + 0x10);
            iVar2 = *(int *)((long)&((pIVar3[0x29].klass)->_1).this_arg.data + 4);
            iVar1 = -iVar2;
            if (fVar13 - fVar12 < 0.0) {
              iVar1 = iVar2;
            }
            if ((iVar1 < 0) || (ABS(fVar12 - fVar13) < 100.0)) {
              bVar11 = true;
            }
          }
        }
      }
                    /* try { // try from 0359a0c4 to 0369a0c7 has its CatchHandler @ 03599f94 */
                    /* try { // try from 0359a0c8 to 0369a0cb has its CatchHandler @ 0359a0cc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0359a0c8 with catch @ 0359a0cc
                       try { // try from 0359a0cc to 0369a0ef has its CatchHandler @ 03599f94 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0359a070 with catch @ 0359a0d0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0359a0c0 with catch @ 0359a0d4
                        */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__)
      ;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0359a044 with catch @ 0359a0d8
                        */
                    /* try { // try from 0359a0f0 to 0369a0f3 has its CatchHandler @ 0359a11c */
                    /* try { // try from 0359a0f4 to 0369a12b has its CatchHandler @ 03599f94 */
    return bVar11;
  }
LAB_0359a0fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

