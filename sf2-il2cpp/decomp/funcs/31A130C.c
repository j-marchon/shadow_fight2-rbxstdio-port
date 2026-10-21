// LDHBHPILNMA$$DABMJCDGKOE @ RVA 0x31A130C

void LDHBHPILNMA__DABMJCDGKOE
               (System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD,
               System_Collections_Generic_List_HOOAAGABMBL__o *GHAAKPDHIJJ,bool JKOABLAJGMF,
               System_Collections_Generic_List_string__o *GMFNKJMHPKC,int32_t NCNNIIJIELC,
               System_Collections_Generic_List_HEFOANCOHDC__o *KKDACKFFHOH,
               System_Collections_Generic_List_HEFOANCOHDC__o *KKNJIIJGIPH,int32_t ECBKFDPPPOB,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  NJPBHDMCLIN_o *__this_01;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar4;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_02;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar5;
  ECENNHNBAME_array *pEVar6;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar7;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 032a1314 to 033a1523 has its CatchHandler @ 032a1314
                       catch() { ... } // from try @ 032a1314 with catch @ 032a1314
                       catch() { ... } // from try @ 032a159c with catch @ 032a1314
                       catch() { ... } // from try @ 032a1604 with catch @ 032a1314
                       catch() { ... } // from try @ 032a1630 with catch @ 032a1314
                       catch() { ... } // from try @ 032a1660 with catch @ 032a1314 */
  if ((DAT_04566ae7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&LDHBHPILNMA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
    FUN_01bab630(&NJPBHDMCLIN_TypeInfo);
    DAT_04566ae7 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
  __this_01 = (NJPBHDMCLIN_o *)thunk_FUN_01bda818(NJPBHDMCLIN_TypeInfo);
  NJPBHDMCLIN___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (NJPBHDMCLIN_o *)0x0) {
    ppSVar4 = &(__this_01->fields).GFBNJPMOEKD;
    *ppSVar4 = GHAAKPDHIJJ;
    thunk_FUN_01c20e04(ppSVar4,GHAAKPDHIJJ);
    ppSVar7 = &(__this_01->fields).OOFILGKHDDI;
    *ppSVar7 = KKDACKFFHOH;
    (__this_01->fields).ANOKHPAKKON = JKOABLAJGMF;
    (__this_01->fields).HLPLAKCBINK = NCNNIIJIELC;
    thunk_FUN_01c20e04(ppSVar7,KKDACKFFHOH);
    (__this_01->fields).GIIIBDMEPDK = KKNJIIJGIPH;
    thunk_FUN_01c20e04(&(__this_01->fields).GIIIBDMEPDK,KKNJIIJGIPH);
    (__this_01->fields).COALAGILPBO = ECBKFDPPPOB;
    if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = LDHBHPILNMA_TypeInfo->static_fields->HDGPEJOPPOB;
    if (__this_02 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                            );
          __this = local_80.fields._current;
          if (!bVar3) {
                    /* try { // try from 032a1578 to 033a159b has its CatchHandler @ 032a160c */
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
            return;
          }
          if ((ECENNHNBAME_o *)local_80.fields._current == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032a159c to 033a15fb has its CatchHandler @ 032a1314 */
            FUN_01bab8c8();
          }
          pEVar5 = ((ECENNHNBAME_Fields *)((long)local_80.fields._current + 0x10))->DMGLMCBIAGL;
          if (pEVar5 == (ECENNHNBAME_HJPFANEPGJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar3 = ECENNHNBAME__PCPBHJGAOOH
                            ((ECENNHNBAME_o *)local_80.fields._current,__this_01,
                             (pEVar5->fields).KFLHLLDPBIC,(KJFPGDFNFCL_o *)0x0,(MethodInfo *)0x0);
        } while ((!bVar3) ||
                ((GMFNKJMHPKC != (System_Collections_Generic_List_string__o *)0x0 &&
                 (bVar3 = ECENNHNBAME__FINLPLHJDHN
                                    ((ECENNHNBAME_o *)__this,GMFNKJMHPKC,(MethodInfo *)0x0), bVar3))
                ));
        lVar2 = Method_System_Collections_Generic_List<ECENNHNBAME>_Add__;
        if (ELAGKBMJCOD == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pEVar6 = (ELAGKBMJCOD->fields)._items;
        (ELAGKBMJCOD->fields)._version = (ELAGKBMJCOD->fields)._version + 1;
                    /* try { // try from 032a1524 to 033a152b has its CatchHandler @ 032a1610 */
        if (pEVar6 == (ECENNHNBAME_array *)0x0) break;
        uVar1 = (ELAGKBMJCOD->fields)._size;
                    /* try { // try from 032a1534 to 033a153b has its CatchHandler @ 032a1608 */
        if (uVar1 < (uint)pEVar6->max_length) {
          (ELAGKBMJCOD->fields)._size = uVar1 + 1;
          pEVar6->m_Items[(int)uVar1] = (ECENNHNBAME_o *)__this;
          thunk_FUN_01c20e04(pEVar6->m_Items + (int)uVar1,__this);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,__this,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

