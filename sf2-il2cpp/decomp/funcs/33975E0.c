// AKADDLNNLKH$$.ctor @ RVA 0x33975E0

void AKADDLNNLKH___ctor(AKADDLNNLKH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
                       System_Action_bool__o *JKJLJMONMHJ,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *GJFBMHMOMED;
  bool bVar3;
  int32_t JCIDLNABHMN;
  System_Collections_Generic_List_HOGPIBHKJDL__o *pSVar4;
  System_Collections_Generic_List_HGLELMDNMMA__o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Xml_XmlAttribute_o *pSVar5;
  HOGPIBHKJDL_o *__this_01;
  MGNPHCAAEIO_MACDOBFPDPP_o *pMVar6;
  HOGPIBHKJDL_array *pHVar7;
  System_Xml_XmlNode_o **ppSVar8;
  System_Collections_Generic_List_HOGPIBHKJDL__o **ppSVar9;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567c5e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HGLELMDNMMA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HGLELMDNMMA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HGLELMDNMMA>_get_Current__);
    FUN_01bab630(&HOGPIBHKJDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOGPIBHKJDL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HGLELMDNMMA>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOGPIBHKJDL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HOGPIBHKJDL>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04567c5e = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
                    /* try { // try from 034976b4 to 035976bb has its CatchHandler @ 034979ec */
  local_80.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (System_Collections_Generic_List_HOGPIBHKJDL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HOGPIBHKJDL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<HOGPIBHKJDL>__ctor__);
  ppSVar9 = &(__this->fields).INIAKIIBBHK;
  *ppSVar9 = pSVar4;
                    /* try { // try from 034976d0 to 035976d7 has its CatchHandler @ 03497998 */
  thunk_FUN_01c20e04(ppSVar9,pSVar4);
                    /* try { // try from 034976dc to 035976eb has its CatchHandler @ 0349798c */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).HGGGOMEBMEN = JKJLJMONMHJ;
  thunk_FUN_01c20e04(&__this->fields,JKJLJMONMHJ);
  ppSVar8 = &(__this->fields).FJFDMMDMMGE;
  *ppSVar8 = AHDGNOJPPIB;
                    /* try { // try from 034976fc to 035976ff has its CatchHandler @ 03497968 */
                    /* try { // try from 03497700 to 0359770f has its CatchHandler @ 03497994 */
  thunk_FUN_01c20e04(ppSVar8,AHDGNOJPPIB);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar6 = MGNPHCAAEIO_TypeInfo->static_fields->JIKLPLFKEDI;
  if ((pMVar6 == (MGNPHCAAEIO_MACDOBFPDPP_o *)0x0) ||
     (__this_00 = (pMVar6->fields).GFBNJPMOEKD,
     __this_00 == (System_Collections_Generic_List_HGLELMDNMMA__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03497754 to 03597777 has its CatchHandler @ 03497970 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HGLELMDNMMA>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
                    /* try { // try from 03497778 to 03597853 has its CatchHandler @ 034975a4 */
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<HGLELMDNMMA>_MoveNext__);
    GJFBMHMOMED = local_80.fields._current;
    if (!bVar3) {
                    /* try { // try from 03497870 to 03597877 has its CatchHandler @ 03497984 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<HGLELMDNMMA>_Dispose__)
      ;
                    /* try { // try from 0349787c to 0359788b has its CatchHandler @ 03497978 */
      return;
    }
    if ((HGLELMDNMMA_o *)local_80.fields._current == (HGLELMDNMMA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034978a0 to 035978af has its CatchHandler @ 03497980 */
      FUN_01bab8c8();
    }
    LBJNDMNEJJB = EIABCPKDEBD__NHPDFFAIJMF
                            (*ppSVar8,((HGLELMDNMMA_Fields *)((long)local_80.fields._current + 0x10)
                                      )->_COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    bVar3 = EIABCPKDEBD__OBECCOPBADO(LBJNDMNEJJB,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar5 = EIABCPKDEBD__HBGAGFJBGKD
                         (*ppSVar8,((HGLELMDNMMA_Fields *)((long)GJFBMHMOMED + 0x10))->
                                   _COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(pSVar5->klass->vtable)._10_set_Value.methodPtr)
                (pSVar5,StringLiteral_1567,(pSVar5->klass->vtable)._10_set_Value.method);
    }
    pSVar4 = *ppSVar9;
    JCIDLNABHMN = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
    __this_01 = (HOGPIBHKJDL_o *)thunk_FUN_01bda818(HOGPIBHKJDL_TypeInfo);
    HOGPIBHKJDL___ctor(__this_01,(HGLELMDNMMA_o *)GJFBMHMOMED,JCIDLNABHMN,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<HOGPIBHKJDL>_Add__;
    if (pSVar4 == (System_Collections_Generic_List_HOGPIBHKJDL__o *)0x0) break;
    pHVar7 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pHVar7 == (HOGPIBHKJDL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0349789c to 0359789f has its CatchHandler @ 03497964 */
      FUN_01bab8c8();
    }
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pHVar7->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pHVar7->m_Items[(int)uVar1] = __this_01;
      thunk_FUN_01c20e04(pHVar7->m_Items + (int)uVar1,__this_01);
    }
    else {
                    /* try { // try from 03497854 to 0359785b has its CatchHandler @ 0349799c */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this_01,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

