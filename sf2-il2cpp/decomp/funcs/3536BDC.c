// EPFMFHDGMCE$$LLEFFBHJAHK @ RVA 0x3536BDC

void EPFMFHDGMCE__LLEFFBHJAHK
               (EPFMFHDGMCE_o *__this,EPFMFHDGMCE_JGKNDMCIPBN_o *LDJFHDMLJMO,MethodInfo *method)

{
  int iVar1;
  int32_t JLAFGLDIFOC;
  uint uVar2;
  int32_t ACCIHBHMFPN;
  long lVar3;
  System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *__this_00;
  EANNACPOJFA_o *pEVar4;
  EPFMFHDGMCE_o *__this_01;
  HEFOANCOHDC_o *EIKFGOCCOIE;
  JLGNBOILFLN_o *__this_02;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar5;
  MethodInfo *method_00;
  JLGNBOILFLN_array *pJVar6;
  int index;
  
  if ((DAT_04568a95 & 1) == 0) {
    FUN_01bab630(&JLGNBOILFLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_get_Item__);
    DAT_04568a95 = 1;
  }
  if (LDJFHDMLJMO != (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0) {
    __this_00 = EPFMFHDGMCE_JGKNDMCIPBN__BKHAHFOIGAC(LDJFHDMLJMO,2,method);
    pEVar4 = EPFMFHDGMCE__FLCAGIJMPKA(__this,(LDJFHDMLJMO->fields).NOPGBJNLFHM,method);
    if (__this_00 != (System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *)0x0) {
      if (0 < (__this_00->fields)._size) {
        index = 0;
        do {
          method_00 = Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_get_Item__;
          __this_01 = (EPFMFHDGMCE_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,index,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_get_Item__
                                );
          if (__this_01 == (EPFMFHDGMCE_o *)0x0) goto LAB_03636df4;
          EIKFGOCCOIE = EPFMFHDGMCE__HDEDNKMEFDN
                                  (__this_01,(System_String_o *)(__this_01->fields).JMPJKOKFJMN,
                                   method_00);
          if (EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) {
            iVar1 = *(int *)&(__this_01->fields).IMFGEOBBNNA;
            JLAFGLDIFOC = *(int32_t *)&(__this_01->fields).GCHAMOPMNHF;
            ACCIHBHMFPN = (uint)(iVar1 == 2) << 1;
            if (iVar1 == 1) {
              ACCIHBHMFPN = 1;
            }
            __this_02 = (JLGNBOILFLN_o *)thunk_FUN_01bda818(JLGNBOILFLN_TypeInfo);
            JLGNBOILFLN___ctor(__this_02,EIKFGOCCOIE,JLAFGLDIFOC,3,ACCIHBHMFPN,(MethodInfo *)0x0);
            lVar3 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
            pSVar5 = (__this->fields).GCHAMOPMNHF;
            if (pSVar5 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) goto LAB_03636df4;
            pJVar6 = (pSVar5->fields)._items;
            (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
            if (pJVar6 == (JLGNBOILFLN_array *)0x0) goto LAB_03636df4;
            uVar2 = (pSVar5->fields)._size;
                    /* try { // try from 03636d24 to 03736d2b has its CatchHandler @ 03636e30 */
            if (uVar2 < (uint)pJVar6->max_length) {
              (pSVar5->fields)._size = uVar2 + 1;
              pJVar6->m_Items[(int)uVar2] = __this_02;
                    /* try { // try from 03636d40 to 03736d47 has its CatchHandler @ 03636e28 */
              thunk_FUN_01c20e04(pJVar6->m_Items + (int)uVar2,__this_02);
              lVar3 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
            }
            else {
                    /* try { // try from 03636d50 to 03736d57 has its CatchHandler @ 03636e20 */
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar5,
                         (Il2CppObject *)__this_02,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
              ;
              lVar3 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
            }
            Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__ = lVar3;
            if (pEVar4 != (EANNACPOJFA_o *)0x0) {
                    /* try { // try from 03636d64 to 03736d6f has its CatchHandler @ 03636e18 */
              pSVar5 = (pEVar4->fields).GJBLBEALOBO;
              if (pSVar5 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)
              goto LAB_03636df4;
              pJVar6 = (pSVar5->fields)._items;
              (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
              if (pJVar6 == (JLGNBOILFLN_array *)0x0) goto LAB_03636df4;
              uVar2 = (pSVar5->fields)._size;
              if (uVar2 < (uint)pJVar6->max_length) {
                (pSVar5->fields)._size = uVar2 + 1;
                pJVar6->m_Items[(int)uVar2] = __this_02;
                thunk_FUN_01c20e04(pJVar6->m_Items + (int)uVar2,__this_02);
                    /* try { // try from 03636db0 to 03736dd3 has its CatchHandler @ 03636e1c */
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar5,
                           (Il2CppObject *)__this_02,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          index = index + 1;
                    /* try { // try from 03636dd4 to 03736dff has its CatchHandler @ 03636b64 */
        } while (index < (__this_00->fields)._size);
      }
      return;
    }
  }
LAB_03636df4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

