// LDHBHPILNMA$$MCHEGMJNJKM @ RVA 0x31A079C

void LDHBHPILNMA__MCHEGMJNJKM(OLKKAIFGGAK_o *BCKBBGCOMJD,bool AFBFJKELDIJ,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *item;
  byte bVar4;
  bool bVar5;
  int32_t iVar6;
  PJKHAJKEHEL_o *pPVar7;
  FCJBEKHDLAF_o *__this;
  NJPBHDMCLIN_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar8;
  System_Collections_Generic_List_ABNLGBHKOCE__o *__this_01;
  ulong uVar9;
  OLKKAIFGGAK_o *pOVar10;
  ABNLGBHKOCE_JBMHDDKONHC_o *pAVar11;
  ABNLGBHKOCE_array *pAVar12;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar13;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar14;
  System_Collections_Generic_List_ABNLGBHKOCE__o *__this_02;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar15;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar16;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566adc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_get_Current__);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
    FUN_01bab630(&NJPBHDMCLIN_TypeInfo);
    DAT_04566adc = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
     (pPVar7 = (BCKBBGCOMJD->fields).FAPMJJBOFEF, pPVar7 != (PJKHAJKEHEL_o *)0x0)) {
    if (AFBFJKELDIJ) {
      pSVar14 = (pPVar7->fields).INGEFFGPJPB;
    }
    else {
      pSVar14 = PJKHAJKEHEL__BMDDFABHHCA(pPVar7,(MethodInfo *)0x0);
    }
    pOVar10 = (BCKBBGCOMJD->fields).BPJMMBGIMNC;
    if ((pOVar10 == (OLKKAIFGGAK_o *)0x0) ||
       (pPVar7 = (pOVar10->fields).FAPMJJBOFEF, pPVar7 == (PJKHAJKEHEL_o *)0x0)) {
      pSVar15 = (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0;
    }
    else if (AFBFJKELDIJ) {
      pSVar15 = (pPVar7->fields).INGEFFGPJPB;
    }
    else {
      pSVar15 = PJKHAJKEHEL__BMDDFABHHCA(pPVar7,(MethodInfo *)0x0);
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO == (FCJBEKHDLAF_o *)0x0) {
      iVar6 = 0;
    }
    else {
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
      if (__this == (FCJBEKHDLAF_o *)0x0) goto LAB_032a0b4c;
      iVar6 = FCJBEKHDLAF__IHMLDBDLJON(__this,(MethodInfo *)0x0);
    }
    __this_02 = (BCKBBGCOMJD->fields).MEECHCPNHMP;
    if (__this_02 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
      iVar1 = (__this_02->fields)._size;
      (__this_02->fields)._size = 0;
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(__this_02->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      __this_00 = (NJPBHDMCLIN_o *)thunk_FUN_01bda818(NJPBHDMCLIN_TypeInfo);
      NJPBHDMCLIN___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (NJPBHDMCLIN_o *)0x0) {
        (__this_00->fields).GGIGKNJPODI = BCKBBGCOMJD;
        thunk_FUN_01c20e04(&__this_00->fields,BCKBBGCOMJD);
        pPVar7 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
        if (pPVar7 != (PJKHAJKEHEL_o *)0x0) {
          pSVar8 = PJKHAJKEHEL__OIPAIAJGCDA(pPVar7,(MethodInfo *)0x0);
          ppSVar16 = &(__this_00->fields).GFBNJPMOEKD;
          *ppSVar16 = pSVar8;
          thunk_FUN_01c20e04(ppSVar16,pSVar8);
          bVar4 = (*(BCKBBGCOMJD->klass->vtable)._9_EEMIOBINNJG.methodPtr)
                            (BCKBBGCOMJD,(BCKBBGCOMJD->klass->vtable)._9_EEMIOBINNJG.method);
          (__this_00->fields).ANOKHPAKKON = (bool_conflict)(bVar4 & 1);
          pPVar7 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
          if (pPVar7 != (PJKHAJKEHEL_o *)0x0) {
            iVar1 = (pPVar7->fields).HLPLAKCBINK;
            ppSVar13 = &(__this_00->fields).OOFILGKHDDI;
            *ppSVar13 = pSVar14;
            (__this_00->fields).HLPLAKCBINK = iVar1;
            thunk_FUN_01c20e04(ppSVar13,pSVar14);
            (__this_00->fields).GIIIBDMEPDK = pSVar15;
            thunk_FUN_01c20e04(&(__this_00->fields).GIIIBDMEPDK,pSVar15);
            (__this_00->fields).COALAGILPBO = iVar6;
            if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_01 = LDHBHPILNMA_TypeInfo->static_fields->MHKDMKDBMBE;
            if (__this_01 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                         Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
              local_60.fields._index = local_78.fields._index;
              local_60.fields._version = local_78.fields._version;
              local_60.fields._list = local_78.fields._list;
              local_60.fields._current = local_78.fields._current;
              while( true ) {
                bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (&local_60,
                                   Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__
                                  );
                item = local_60.fields._current;
                if (!bVar5) {
                  System_Collections_Generic_List_Enumerator<object>__Dispose
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__
                            );
                  return;
                }
                if ((ABNLGBHKOCE_o *)local_60.fields._current == (ABNLGBHKOCE_o *)0x0) break;
                pAVar11 = ((ABNLGBHKOCE_Fields *)((long)local_60.fields._current + 0x10))->
                          CKNFEFFGHLC;
                if (pAVar11 == (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar9 = (*(((ABNLGBHKOCE_c *)(local_60.fields._current)->klass)->vtable).
                          _4_PCPBHJGAOOH.methodPtr)
                                  (local_60.fields._current,__this_00,(pAVar11->fields).KFLHLLDPBIC,
                                   0,(((ABNLGBHKOCE_c *)(local_60.fields._current)->klass)->vtable).
                                     _4_PCPBHJGAOOH.method);
                lVar3 = Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__;
                if ((uVar9 & 1) != 0) {
                  pAVar12 = (__this_02->fields)._items;
                  (__this_02->fields)._version = (__this_02->fields)._version + 1;
                  if (pAVar12 == (ABNLGBHKOCE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  uVar2 = (__this_02->fields)._size;
                  if (uVar2 < (uint)pAVar12->max_length) {
                    (__this_02->fields)._size = uVar2 + 1;
                    pAVar12->m_Items[(int)uVar2] = (ABNLGBHKOCE_o *)item;
                    thunk_FUN_01c20e04(pAVar12->m_Items + (int)uVar2,item);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_02,item,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
        }
      }
    }
  }
LAB_032a0b4c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

