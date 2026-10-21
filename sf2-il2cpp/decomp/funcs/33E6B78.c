// FCJBEKHDLAF$$KENPEBLGMIN @ RVA 0x33E6B78

void FCJBEKHDLAF__KENPEBLGMIN(FCJBEKHDLAF_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  Il2CppObject *IGMNBGIAGGK;
  bool bVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  Il2CppObject *pIVar2;
  MMDDDDFHOLG_o *__this_01;
  IPPEHAJADOO_o *__this_02;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar3;
  bool_conflict bVar4;
  OLKKAIFGGAK_EAOIGPODIAI_o *pOVar5;
  Il2CppObject **ppIVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar7;
  int32_t local_7c;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567ef5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e6b5c with catch @ 034e6bc4
                        */
    FUN_01bab630(&LJJOOIHCCEP_HEJHMMBJODB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
                    /* try { // try from 034e6bdc to 035e6bdf has its CatchHandler @ 034e6c00 */
                    /* try { // try from 034e6be0 to 035e6c07 has its CatchHandler @ 034e6aa8 */
    DAT_04567ef5 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (ACCIHBHMFPN == 3) {
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar3 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if (pNVar3 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) goto LAB_034e6dc4;
    bVar4 = false;
LAB_034e6c78:
    (pNVar3->fields).GADNEKIHBNO = bVar4;
  }
  else if (ACCIHBHMFPN == 2) {
                    /* catch() { ... } // from try @ 034e6bdc with catch @ 034e6c00 */
    if (DAT_04565c84 == '\0') {
                    /* try { // try from 034e6c08 to 035e6c0f has its CatchHandler @ 034e6c24 */
                    /* try { // try from 034e6c10 to 035e6c1b has its CatchHandler @ 034e6aa8 */
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
                    /* try { // try from 034e6c1c to 035e6c23 has its CatchHandler @ 034e6c24 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034e6c08 with catch @ 034e6c24
                       catch(type#2 @ 00000000) { ... } // from try @ 034e6c1c with catch @ 034e6c24
                        */
                    /* try { // try from 034e6c28 to 035e6cbf has its CatchHandler @ 034e6c28
                       catch() { ... } // from try @ 034e6c28 with catch @ 034e6c28
                       catch() { ... } // from try @ 034e6cc8 with catch @ 034e6c28
                       catch() { ... } // from try @ 034e6d0c with catch @ 034e6c28
                       catch() { ... } // from try @ 034e6d30 with catch @ 034e6c28
                       catch() { ... } // from try @ 034e6d60 with catch @ 034e6c28 */
    pNVar3 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if (pNVar3 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) goto LAB_034e6dc4;
    bVar4 = true;
    goto LAB_034e6c78;
  }
  __this_00 = (__this->fields).IILLHHPGGKA;
  (__this->fields).PEELENPNLHJ = ACCIHBHMFPN;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
                    /* try { // try from 034e6cc0 to 035e6cc7 has its CatchHandler @ 034e6d14 */
    local_60.fields._current = local_78.fields._current;
    while( true ) {
                    /* try { // try from 034e6cc8 to 035e6d07 has its CatchHandler @ 034e6c28 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
      IGMNBGIAGGK = local_60.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
                    /* try { // try from 034e6dac to 035e6e43 has its CatchHandler @ 034e6dac
                       catch() { ... } // from try @ 034e6dac with catch @ 034e6dac
                       catch() { ... } // from try @ 034e6e4c with catch @ 034e6dac
                       catch() { ... } // from try @ 034e6eac with catch @ 034e6dac
                       catch() { ... } // from try @ 034e6ee4 with catch @ 034e6dac */
        return;
      }
      if ((OLKKAIFGGAK_o *)local_60.fields._current == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pOVar5 = ((OLKKAIFGGAK_Fields *)((long)local_60.fields._current + 0x10))->PDCHNCOIHHA;
      local_78.fields._list._0_4_ = ACCIHBHMFPN;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(LJJOOIHCCEP_HEJHMMBJODB_TypeInfo,&local_78);
      if (pOVar5 == (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ppIVar6 = &(pOVar5->fields).KOANCCDDBDA;
      *ppIVar6 = pIVar2;
      thunk_FUN_01c20e04(ppIVar6);
                    /* try { // try from 034e6d08 to 035e6d0b has its CatchHandler @ 034e6d10 */
                    /* try { // try from 034e6d0c to 035e6d2b has its CatchHandler @ 034e6c28 */
      CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        (ACCIHBHMFPN,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e6d08 with catch @ 034e6d10
                        */
      (((OLKKAIFGGAK_Fields *)((long)IGMNBGIAGGK + 0x10))->LGKFKNGIPDM).fields = CVar7;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e6cc0 with catch @ 034e6d14
                        */
      __this_01 = (__this->fields).POEGCOJFMDB;
      if (__this_01 == (MMDDDDFHOLG_o *)0x0) break;
                    /* try { // try from 034e6d2c to 035e6d2f has its CatchHandler @ 034e6d50 */
                    /* try { // try from 034e6d30 to 035e6d57 has its CatchHandler @ 034e6c28 */
      MMDDDDFHOLG__CFEOMJALMBB
                (__this_01,(OLKKAIFGGAK_o *)IGMNBGIAGGK,1,false,(NJPBBPOABKP_o *)0x0,
                 (MethodInfo *)0x0);
      pOVar5 = ((OLKKAIFGGAK_Fields *)((long)IGMNBGIAGGK + 0x10))->PDCHNCOIHHA;
      local_7c = ACCIHBHMFPN;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(LJJOOIHCCEP_HEJHMMBJODB_TypeInfo,&local_7c);
      if (pOVar5 == (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ppIVar6 = &(pOVar5->fields).KOANCCDDBDA;
                    /* catch() { ... } // from try @ 034e6d2c with catch @ 034e6d50 */
      *ppIVar6 = pIVar2;
                    /* try { // try from 034e6d58 to 035e6d5f has its CatchHandler @ 034e6d74 */
      thunk_FUN_01c20e04(ppIVar6);
                    /* try { // try from 034e6d60 to 035e6d6b has its CatchHandler @ 034e6c28 */
      CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        (ACCIHBHMFPN,(MethodInfo *)0x0);
      (((OLKKAIFGGAK_Fields *)((long)IGMNBGIAGGK + 0x10))->LGKFKNGIPDM).fields = CVar7;
                    /* try { // try from 034e6d6c to 035e6d73 has its CatchHandler @ 034e6d74 */
      __this_02 = (__this->fields).JJPMCDACBFG;
      if (__this_02 == (IPPEHAJADOO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034e6d58 with catch @ 034e6d74
                       catch(type#2 @ 00000000) { ... } // from try @ 034e6d6c with catch @ 034e6d74
                        */
      IPPEHAJADOO__BKBHKFCCKDO
                (__this_02,1,((OLKKAIFGGAK_Fields *)((long)IGMNBGIAGGK + 0x10))->PDCHNCOIHHA,false,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_034e6dc4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

