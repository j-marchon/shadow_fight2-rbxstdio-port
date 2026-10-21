// FCJBEKHDLAF$$JIIMNEEGEMG @ RVA 0x33E36EC

/* WARNING: Removing unreachable block (ram,0x034e38fc) */

void FCJBEKHDLAF__JIIMNEEGEMG(FCJBEKHDLAF_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  OIGAJAKPPEO_o *GANEIBPLOIA;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_02;
  MethodInfo *method_00;
  IIMNGGHGKOD_c *method_01;
  System_Collections_Generic_List_IENLNOEDCFF__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567eef & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
                    /* try { // try from 034e374c to 035e375b has its CatchHandler @ 034e3cec */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_get_Current__);
                    /* try { // try from 034e376c to 035e3773 has its CatchHandler @ 034e3cb4 */
    FUN_01bab630(&HDHBGBEEKDM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
                    /* try { // try from 034e3784 to 035e378b has its CatchHandler @ 034e3cb8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Remove__);
                    /* try { // try from 034e3798 to 035e37b7 has its CatchHandler @ 034e3ce8 */
    DAT_04567eef = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) ||
     (__this_00 = (BCKBBGCOMJD->fields).OOBBJEDHHKM,
     __this_00 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034e37c4 to 035e37cb has its CatchHandler @ 034e3ccc */
                    /* try { // try from 034e37dc to 035e37e3 has its CatchHandler @ 034e3cd0 */
                    /* try { // try from 034e37f0 to 035e380b has its CatchHandler @ 034e3ce4 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  while( true ) {
                    /* try { // try from 034e3818 to 035e381f has its CatchHandler @ 034e3cac */
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__)
      ;
      FCJBEKHDLAF__PKCCGFBBOFM(__this,method_00);
      return;
    }
    if ((IIMNGGHGKOD_o *)local_80.fields._current == (IIMNGGHGKOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 034e382c to 035e382f has its CatchHandler @ 034e3cb0 */
    pSVar5 = (((IIMNGGHGKOD_o *)((long)local_80.fields._current + 0x48))->fields).KDIMDBHMBEM;
    if (pSVar5 == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = *(System_Collections_Generic_List_object__o **)&pSVar5[1].fields._size;
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,__this_01,
               Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__
                             ), pIVar2 = local_a0.fields._current, bVar3) {
                    /* try { // try from 034e3868 to 035e388f has its CatchHandler @ 034e3b04 */
      if ((IIMNGGHGKOD_o *)local_a0.fields._current == (IIMNGGHGKOD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034e3900 to 035e3957 has its CatchHandler @ 034e3b0c */
        FUN_01bab8c8();
      }
      iVar4 = IIMNGGHGKOD__NHGGBEACKBD((IIMNGGHGKOD_o *)local_a0.fields._current,(MethodInfo *)0x0);
      if (iVar4 == 0) {
        bVar1 = (HDHBGBEEKDM_TypeInfo->_2).naturalAligment;
        if (((((IIMNGGHGKOD_c *)pIVar2->klass)->_2).naturalAligment < bVar1) ||
           ((((IIMNGGHGKOD_c *)pIVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)HDHBGBEEKDM_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pIVar2);
        }
        method_01 = ((IIMNGGHGKOD_o *)((long)pIVar2 + 0x48))->klass;
        GANEIBPLOIA = OLKKAIFGGAK__KDGMEMONODJ
                                (BCKBBGCOMJD,
                                 *(System_Collections_Generic_List_NJPIKDFEOCN__o **)
                                  &(((IIMNGGHGKOD_o *)((long)pIVar2 + 0x48))->fields).JDNKKGPNHPB.
                                   fields.fakeValue,(System_String_o *)method_01,
                                 *(System_String_o **)
                                  &(((IIMNGGHGKOD_o *)((long)pIVar2 + 0x48))->fields).JDNKKGPNHPB.
                                   fields,(MethodInfo *)0x0);
                    /* try { // try from 034e38c4 to 035e38ef has its CatchHandler @ 034e3b00 */
        FCJBEKHDLAF__NPOJECEDEPD(__this,(OLKKAIFGGAK_o *)GANEIBPLOIA,(MethodInfo *)method_01);
        __this_02 = (__this->fields).AGOBPAPPBEM;
        if (__this_02 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)__this_02,
                   (Il2CppObject *)GANEIBPLOIA,
                   Method_System_Collections_Generic_List<OLKKAIFGGAK>_Remove__);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034e39d4 to 035e3a43 has its CatchHandler @ 034e3cf0 */
  FUN_01bab8c8();
}

