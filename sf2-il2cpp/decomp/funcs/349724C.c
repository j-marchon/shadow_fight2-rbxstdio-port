// NGKBNOEJLPH$$POOHKPDCICO @ RVA 0x349724C

bool NGKBNOEJLPH__POOHKPDCICO(NGKBNOEJLPH_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  int32_t iVar2;
  KJFPGDFNFCL_o *pKVar3;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_01;
  OLKKAIFGGAK_o *pOVar4;
  OPNFCOGALLI_o *pOVar5;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar6;
  ECENNHNBAME_KFMLLPPCPHI_o *pEVar7;
  ECENNHNBAME_DNGAEDAAIJE_o *pEVar8;
  int iVar9;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_02;
  NJPBHDMCLIN_o *AHEFOIOKDOK;
  System_Collections_Generic_List_string__o **ppSVar10;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568451 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_get_Count__);
    DAT_04568451 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pOVar4 = (__this->fields).KOHECBJAFKG;
  if ((pOVar4 != (OLKKAIFGGAK_o *)0x0) &&
     (__this_02 = (pOVar4->fields).OOBBJEDHHKM,
     __this_02 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0)) {
    bVar1 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       (Il2CppObject *)NLEBDPHNIDI,
                       Method_System_Collections_Generic_List<ECENNHNBAME>_Contains__);
    if (!bVar1) {
      return false;
    }
    pOVar4 = (__this->fields).KOHECBJAFKG;
    if (((pOVar4 != (OLKKAIFGGAK_o *)0x0) &&
        (AHEFOIOKDOK = (pOVar4->fields).FNEAAHOOHAA, AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0)) &&
       ((AHEFOIOKDOK->fields).BPEIPGJNCLC = false, NLEBDPHNIDI != (ECENNHNBAME_o *)0x0)) {
      ppSVar10 = &(AHEFOIOKDOK->fields).MPGOHFNJBLA;
      *ppSVar10 = (NLEBDPHNIDI->fields)._AHFPJJKEANI_k__BackingField;
      thunk_FUN_01c20e04(ppSVar10);
      pOVar5 = (__this->fields).LGJKGLINMGP;
      if (pOVar5 != (OPNFCOGALLI_o *)0x0) {
        iVar2 = ECENNHNBAME__BAHFNIPBBHD
                          (NLEBDPHNIDI,AHEFOIOKDOK,(pOVar5->fields).DMJAJGGGHPF,(MethodInfo *)0x0);
        (AHEFOIOKDOK->fields).FOJEHKCDKFH = iVar2;
        pEVar6 = (NLEBDPHNIDI->fields).DMGLMCBIAGL;
        if ((pEVar6 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) &&
           (pEVar7 = (pEVar6->fields).EJNDOMGCGFL, pEVar7 != (ECENNHNBAME_KFMLLPPCPHI_o *)0x0)) {
          (AHEFOIOKDOK->fields).JDNEMNOMLIC = (pEVar7->fields).ONFAKNEMEGC;
          pOVar4 = (__this->fields).KOHECBJAFKG;
          pKVar3 = ECENNHNBAME__LIKCEDBLBCD(NLEBDPHNIDI,2,(MethodInfo *)0x0);
          bVar1 = ECENNHNBAME__PCPBHJGAOOH
                            (NLEBDPHNIDI,pOVar4,
                             (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0,pKVar3,
                             (MethodInfo *)0x0);
          if (!bVar1) {
            return false;
          }
          pEVar8 = (NLEBDPHNIDI->fields).ANMFJDOLEKO;
          if ((pEVar8 != (ECENNHNBAME_DNGAEDAAIJE_o *)0x0) &&
             (__this_01 = (pEVar8->fields).PCGACGNHJHF,
             __this_01 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0)) {
            if ((__this_01->fields)._size < 1) {
              return true;
            }
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
                       Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
            local_70.fields._index = local_88.fields._index;
            local_70.fields._version = local_88.fields._version;
            local_70.fields._list = local_88.fields._list;
            local_70.fields._current = local_88.fields._current;
            do {
              do {
                bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (&local_70,
                                   Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                                  );
                __this_00 = local_70.fields._current;
                if (!bVar1) {
                  iVar9 = 4;
                  goto LAB_035974a8;
                }
                bVar1 = System_Collections_Generic_List<object>__Contains
                                  ((System_Collections_Generic_List_object__o *)__this_02,
                                   local_70.fields._current,
                                   Method_System_Collections_Generic_List<ECENNHNBAME>_Contains__);
              } while (!bVar1);
              if ((ECENNHNBAME_o *)__this_00 == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              *ppSVar10 = ((ECENNHNBAME_Fields *)((long)__this_00 + 0x10))->
                          _AHFPJJKEANI_k__BackingField;
              thunk_FUN_01c20e04(ppSVar10);
              pOVar5 = (__this->fields).LGJKGLINMGP;
              if (pOVar5 == (OPNFCOGALLI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar2 = ECENNHNBAME__BAHFNIPBBHD
                                ((ECENNHNBAME_o *)__this_00,AHEFOIOKDOK,(pOVar5->fields).DMJAJGGGHPF
                                 ,(MethodInfo *)0x0);
              (AHEFOIOKDOK->fields).FOJEHKCDKFH = iVar2;
              pEVar6 = ((ECENNHNBAME_Fields *)((long)__this_00 + 0x10))->DMGLMCBIAGL;
              if (pEVar6 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pEVar7 = (pEVar6->fields).EJNDOMGCGFL;
              if (pEVar7 == (ECENNHNBAME_KFMLLPPCPHI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              (AHEFOIOKDOK->fields).JDNEMNOMLIC = (pEVar7->fields).ONFAKNEMEGC;
              pOVar4 = (__this->fields).KOHECBJAFKG;
              pKVar3 = ECENNHNBAME__LIKCEDBLBCD(NLEBDPHNIDI,2,(MethodInfo *)0x0);
              bVar1 = ECENNHNBAME__PCPBHJGAOOH
                                ((ECENNHNBAME_o *)__this_00,pOVar4,
                                 (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0,pKVar3,
                                 (MethodInfo *)0x0);
            } while (!bVar1);
            iVar9 = 7;
LAB_035974a8:
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
            return iVar9 != 7;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

