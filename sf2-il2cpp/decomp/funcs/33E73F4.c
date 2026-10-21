// FCJBEKHDLAF$$ILNOJCFNNHP @ RVA 0x33E73F4

void FCJBEKHDLAF__ILNOJCFNNHP(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  uint length;
  bool bVar1;
  OLKKAIFGGAK_o *pOVar2;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_x2;
  MethodInfo *pMVar4;
  OLKKAIFGGAK_o **ppOVar5;
  int iVar6;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 034e7410 to 035e743b has its CatchHandler @ 034e75a8 */
  if ((DAT_04567edf & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<OLKKAIFGGAK>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_04567edf = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  ppOVar5 = &(__this->fields).LAMENNMGPBN;
                    /* try { // try from 034e7478 to 035e74eb has its CatchHandler @ 034e75b4 */
  FCJBEKHDLAF__PJGJIAGADOM(__this,*ppOVar5,in_x2);
  pMVar4 = Method_DJNBJHPDKDP_OFNFOGHFDML<OLKKAIFGGAK>__;
  DJNBJHPDKDP__OFNFOGHFDML<object>
            ((System_Collections_Generic_List_T__o *)(__this->fields).NCPKMPACJNP,
             (Il2CppObject *)*ppOVar5,
             (MethodInfo_1E833E4 *)Method_DJNBJHPDKDP_OFNFOGHFDML<OLKKAIFGGAK>__);
  FCJBEKHDLAF__PKCCGFBBOFM(__this,method_00);
  pOVar2 = FCJBEKHDLAF__OCJCMHLABBF(__this,(__this->fields).KCHOEJOHIMM,pMVar4);
  *ppOVar5 = pOVar2;
  thunk_FUN_01c20e04(ppOVar5,pOVar2);
  FCJBEKHDLAF__HDHNCDJLPMF(__this,*ppOVar5,pMVar4);
  FCJBEKHDLAF__JIIMNEEGEMG(__this,*ppOVar5,pMVar4);
  pSVar3 = (__this->fields).IILLHHPGGKA;
  if (pSVar3 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* try { // try from 034e74ec to 035e757f has its CatchHandler @ 034e720c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    iVar6 = 0;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
      if (!bVar1) break;
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034e7594 to 035e7597 has its CatchHandler @ 034e75a0 */
        FUN_01bab8c8();
      }
      *(int *)&local_48.fields._current[0x12].klass = iVar6;
      iVar6 = iVar6 + 1;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    pSVar3 = (__this->fields).AGOBPAPPBEM;
    if (pSVar3 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      length = (pSVar3->fields)._size;
      pMVar4 = (MethodInfo *)(ulong)length;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      method_01 = extraout_x1;
      if (0 < (int)length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
        method_01 = extraout_x1_00;
      }
      FCJBEKHDLAF__PKCCGFBBOFM(__this,method_01);
      FCJBEKHDLAF__JLKMNGHIKDG(__this,false,pMVar4);
      FCJBEKHDLAF__EJPACOMGKAD(__this,method_02);
      (__this->fields).HDKGGAKCPAM = true;
                    /* try { // try from 034e7580 to 035e7587 has its CatchHandler @ 034e75a4 */
                    /* try { // try from 034e7588 to 035e758f has its CatchHandler @ 034e75b0 */
                    /* try { // try from 034e7590 to 035e7593 has its CatchHandler @ 034e720c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034e7598 to 035e75c3 has its CatchHandler @ 034e720c */
  FUN_01bab8c8();
}

