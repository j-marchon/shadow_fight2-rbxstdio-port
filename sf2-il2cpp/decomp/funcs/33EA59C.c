// FCJBEKHDLAF$$CLLLPBNBKAL @ RVA 0x33EA59C

void FCJBEKHDLAF__CLLLPBNBKAL(FCJBEKHDLAF_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  PJKHAJKEHEL_o *pPVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_01;
  MMDDDDFHOLG_o *__this_02;
  KAHMAJKJMBK_o *pKVar5;
  HEFOANCOHDC_array *pHVar6;
  AFFHKININGD_o *pAVar7;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567ede & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    DAT_04567ede = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) &&
     (pPVar4 = (BCKBBGCOMJD->fields).FAPMJJBOFEF, pPVar4 != (PJKHAJKEHEL_o *)0x0)) {
    PJKHAJKEHEL__NDBIFNGNKJF(pPVar4,(MethodInfo *)0x0);
    bVar3 = OLKKAIFGGAK__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
    pKVar5 = (__this->fields).AMJGAIMHDLO;
    if (pKVar5 != (KAHMAJKJMBK_o *)0x0) {
      lVar1 = 0x20;
      if (!bVar3) {
        lVar1 = 0x28;
      }
      __this_00 = *(System_Collections_Generic_List_object__o **)((long)&pKVar5->klass + lVar1);
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_68,__this_00,
                   Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
        local_50.fields._index = local_68.fields._index;
        local_50.fields._version = local_68.fields._version;
        local_50.fields._list = local_68.fields._list;
        local_50.fields._current = local_68.fields._current;
        while( true ) {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                            );
          lVar1 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
          if (!bVar3) break;
          pPVar4 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
          if (pPVar4 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_01 = (pPVar4->fields).INGEFFGPJPB;
          if (__this_01 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pHVar6 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pHVar6 == (HEFOANCOHDC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pHVar6->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pHVar6->m_Items[(int)uVar2] = (HEFOANCOHDC_o *)local_50.fields._current;
            thunk_FUN_01c20e04(pHVar6->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,
                       local_50.fields._current,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
        bVar3 = OLKKAIFGGAK__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
        pKVar5 = (__this->fields).AMJGAIMHDLO;
        if (pKVar5 != (KAHMAJKJMBK_o *)0x0) {
          lVar1 = 0x30;
          if (!bVar3) {
            lVar1 = 0x38;
          }
          KAHMAJKJMBK__NBAKIBEGKDJ
                    (pKVar5,(BCKBBGCOMJD->fields).FAPMJJBOFEF,
                     *(System_Collections_Generic_List_CCAEOJMALLA__o **)
                      ((long)&pKVar5->klass + lVar1),(MethodInfo *)0x0);
          bVar3 = OLKKAIFGGAK__HODPOCMNNIN(BCKBBGCOMJD,(MethodInfo *)0x0);
          if (bVar3) {
            pAVar7 = (__this->fields).FBFPLEFCDOK;
            if (pAVar7 == (AFFHKININGD_o *)0x0) goto LAB_034ea7ac;
            if ((pAVar7->fields).JDNKKGPNHPB == 0x14) {
              FIKENOMMMBH__HGCLCDJJNGA(BCKBBGCOMJD,(MethodInfo *)0x0);
            }
          }
          __this_02 = (__this->fields).POEGCOJFMDB;
          if (__this_02 != (MMDDDDFHOLG_o *)0x0) {
            MMDDDDFHOLG__OCJCMHLABBF(__this_02,BCKBBGCOMJD,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_034ea7ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

