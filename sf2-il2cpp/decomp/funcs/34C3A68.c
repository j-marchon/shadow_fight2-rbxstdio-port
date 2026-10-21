// JBGPNJEDALF$$GDFBKGCDOIL @ RVA 0x34C3A68

void JBGPNJEDALF__GDFBKGCDOIL(JBGPNJEDALF_o *__this,BCGLDKLKKDA_o *GGBBGNMJIEI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  System_Predicate_T__o *match;
  Il2CppObject *item;
  Il2CppClass *item_00;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  
  if ((DAT_04568623 & 1) == 0) {
    FUN_01bab630(&Method_DOCLKKFHECI<BCGLDKLKKDA>_DOOBINMKNBI__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_Remove__);
    FUN_01bab630(&Method_JBGPNJEDALF_PLEOOGJALMJ_MOBAFGACHLB__);
                    /* try { // try from 035c3ad0 to 036c3ad7 has its CatchHandler @ 035c3b2c */
    FUN_01bab630(&JBGPNJEDALF_PLEOOGJALMJ_TypeInfo);
                    /* try { // try from 035c3adc to 036c3ae3 has its CatchHandler @ 035c3b1c */
    FUN_01bab630(&System_Predicate<BCGLDKLKKDA>_TypeInfo);
                    /* try { // try from 035c3ae8 to 036c3aeb has its CatchHandler @ 035c3b18 */
    DAT_04568623 = 1;
  }
                    /* try { // try from 035c3af0 to 036c3af3 has its CatchHandler @ 035c3b10 */
  pIVar3 = (Il2CppObject *)thunk_FUN_01bda818(JBGPNJEDALF_PLEOOGJALMJ_TypeInfo);
                    /* try { // try from 035c3af8 to 036c3afb has its CatchHandler @ 035c3b00 */
                    /* try { // try from 035c3afc to 036c3b3f has its CatchHandler @ 035c362c */
                    /* catch() { ... } // from try @ 035c3af8 with catch @ 035c3b00 */
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035c39c4 with catch @ 035c3b04 */
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3 = pIVar3 + 1;
                    /* catch() { ... } // from try @ 035c39dc with catch @ 035c3b08 */
                    /* catch() { ... } // from try @ 035c39e8 with catch @ 035c3b0c */
                    /* catch() { ... } // from try @ 035c3af0 with catch @ 035c3b10 */
                    /* catch() { ... } // from try @ 035c39d0 with catch @ 035c3b14 */
                    /* catch() { ... } // from try @ 035c3ae8 with catch @ 035c3b18 */
                    /* catch() { ... } // from try @ 035c3adc with catch @ 035c3b1c */
    pIVar3->klass = (Il2CppClass *)GGBBGNMJIEI;
                    /* catch() { ... } // from try @ 035c39b4 with catch @ 035c3b20 */
                    /* catch() { ... } // from try @ 035c3948 with catch @ 035c3b24 */
                    /* catch() { ... } // from try @ 035c38ec with catch @ 035c3b28 */
    thunk_FUN_01c20e04(pIVar3,GGBBGNMJIEI);
                    /* catch() { ... } // from try @ 035c3ad0 with catch @ 035c3b2c */
    pSVar5 = (System_Collections_Generic_List_object__o *)
             (__this->fields).super._ADKGNPMECHK_k__BackingField;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<BCGLDKLKKDA>_TypeInfo);
                    /* try { // try from 035c3b40 to 036c3b43 has its CatchHandler @ 035c3c90 */
                    /* try { // try from 035c3b44 to 036c3bf7 has its CatchHandler @ 035c362c */
    System_Predicate<object>___ctor();
    if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
      item = System_Collections_Generic_List<object>__Find
                       (pSVar5,match,Method_System_Collections_Generic_List<BCGLDKLKKDA>_Find__);
      if (item != (Il2CppObject *)0x0) {
        pSVar5 = (System_Collections_Generic_List_object__o *)
                 (__this->fields).super._ADKGNPMECHK_k__BackingField;
        if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_035c3c0c;
        System_Collections_Generic_List<object>__Remove
                  (pSVar5,item,Method_System_Collections_Generic_List<BCGLDKLKKDA>_Remove__);
      }
      lVar2 = Method_System_Collections_Generic_List<BCGLDKLKKDA>_Add__;
      pSVar5 = (System_Collections_Generic_List_object__o *)
               (__this->fields).super._ADKGNPMECHK_k__BackingField;
      if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
        item_00 = pIVar3->klass;
        pSVar4 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pSVar4 != (System_Object_array *)0x0) {
          uVar1 = (pSVar5->fields)._size;
          if (uVar1 < (uint)pSVar4->max_length) {
            (pSVar5->fields)._size = uVar1 + 1;
            pSVar4->m_Items[(int)uVar1] = (Il2CppObject *)item_00;
            thunk_FUN_01c20e04(pSVar4->m_Items + (int)uVar1);
            return;
          }
                    /* try { // try from 035c3bf8 to 036c3c43 has its CatchHandler @ 035c3d80 */
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar5,(Il2CppObject *)item_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
LAB_035c3c0c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

