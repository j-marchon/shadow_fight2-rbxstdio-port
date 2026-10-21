// FCJBEKHDLAF$$JLKMNGHIKDG @ RVA 0x33E3A50

void FCJBEKHDLAF__JLKMNGHIKDG(FCJBEKHDLAF_o *__this,bool CNBALBGPDHM,MethodInfo *method)

{
  Il2CppObject *GANEIBPLOIA;
  bool bVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  MMDDDDFHOLG_o *__this_01;
  IPPEHAJADOO_o *__this_02;
  BMMAPANJCEC_o *__this_03;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567ed5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__,
                 CNBALBGPDHM);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
                    /* try { // try from 034e3aa8 to 035e3acb has its CatchHandler @ 034e3ca0 */
    FUN_01bab630(&PNCLBBMPHKB_TypeInfo);
    DAT_04567ed5 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).IILLHHPGGKA;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* try { // try from 034e3ad0 to 035e3ad7 has its CatchHandler @ 034e3afc */
                    /* try { // try from 034e3adc to 035e3ae7 has its CatchHandler @ 034e3b08 */
                    /* try { // try from 034e3aec to 035e3aef has its CatchHandler @ 034e3af4 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
                    /* try { // try from 034e3af0 to 035e3b1f has its CatchHandler @ 034e3544 */
                    /* catch() { ... } // from try @ 034e3aec with catch @ 034e3af4 */
                    /* catch() { ... } // from try @ 034e3998 with catch @ 034e3af8 */
    local_50.fields._list = local_68.fields._list;
                    /* catch() { ... } // from try @ 034e3ad0 with catch @ 034e3afc */
    local_50.fields._current = local_68.fields._current;
    while( true ) {
                    /* catch() { ... } // from try @ 034e38c4 with catch @ 034e3b00 */
                    /* catch() { ... } // from try @ 034e3868 with catch @ 034e3b04 */
                    /* catch() { ... } // from try @ 034e3adc with catch @ 034e3b08 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
      GANEIBPLOIA = local_50.fields._current;
                    /* catch() { ... } // from try @ 034e3900 with catch @ 034e3b0c */
      if (!bVar1) break;
      if ((OLKKAIFGGAK_o *)local_50.fields._current == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 034e3b20 to 035e3b23 has its CatchHandler @ 034e3c90 */
      OLKKAIFGGAK__MEGMHJGGNDL((OLKKAIFGGAK_o *)local_50.fields._current,(MethodInfo *)0x0);
                    /* try { // try from 034e3b24 to 035e3bdb has its CatchHandler @ 034e3544 */
      if (((OLKKAIFGGAK_Fields *)((long)GANEIBPLOIA + 0x10))->NFMBPIPEKGF != (OLKKAIFGGAK_o *)0x0) {
        FCJBEKHDLAF__NPOJECEDEPD(__this,(OLKKAIFGGAK_o *)GANEIBPLOIA,method);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    __this_01 = (__this->fields).POEGCOJFMDB;
    if (__this_01 != (MMDDDDFHOLG_o *)0x0) {
      MMDDDDFHOLG__DGLJCGNHLIG(__this_01,(MethodInfo *)0x0);
      __this_02 = (__this->fields).JJPMCDACBFG;
      if (__this_02 != (IPPEHAJADOO_o *)0x0) {
        IPPEHAJADOO__DGLJCGNHLIG(__this_02,(MethodInfo *)0x0);
        FCJBEKHDLAF__PKCCGFBBOFM(__this,method_00);
        __this_03 = (__this->fields).HBMCNPFFCHJ;
        if (__this_03 != (BMMAPANJCEC_o *)0x0) {
          BMMAPANJCEC__NDNPGAKJLHM(__this_03,(MethodInfo *)0x0);
          if ((PNCLBBMPHKB_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          PNCLBBMPHKB__BMFDCIPBPAN((MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

