// TypeDefIndex 3068
// Namespace: 
// public class JBGPNJEDALF : DOCLKKFHECI<BCGLDKLKKDA>
// Fields:

// ===== public BCGLDKLKKDA KKCADOCOFFP(string OIJKLJBGOLH)  [RVA 0x34C3760]
// JBGPNJEDALF$$KKCADOCOFFP @ RVA 0x34C3760

BCGLDKLKKDA_o *
JBGPNJEDALF__KKCADOCOFFP(JBGPNJEDALF_o *__this,System_String_o *OIJKLJBGOLH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  BCGLDKLKKDA_o *pBVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456861f & 1) == 0) {
    FUN_01bab630(&Method_DOCLKKFHECI<BCGLDKLKKDA>_DOOBINMKNBI__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_GetEnumerator__);
                    /* try { // try from 035c37c0 to 036c37e7 has its CatchHandler @ 035c3cbc */
    DAT_0456861f = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(OIJKLJBGOLH,(MethodInfo *)0x0);
  pBVar2 = (BCGLDKLKKDA_o *)0x0;
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_List_object__o *)
                (__this->fields).super._ADKGNPMECHK_k__BackingField;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,__this_00,
               Method_System_Collections_Generic_List<BCGLDKLKKDA>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_MoveNext__);
      pBVar2 = (BCGLDKLKKDA_o *)local_38.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_Dispose__);
        return (BCGLDKLKKDA_o *)0x0;
      }
      if ((BCGLDKLKKDA_o *)local_38.fields._current == (BCGLDKLKKDA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 035c381c to 036c3847 has its CatchHandler @ 035c3cb8 */
      bVar1 = BCGLDKLKKDA__JOGKAIEDLIO
                        ((BCGLDKLKKDA_o *)local_38.fields._current,OIJKLJBGOLH,(MethodInfo *)0x0);
    } while (!bVar1);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<BCGLDKLKKDA>_Dispose__);
  }
  return pBVar2;
}


// ===== public void OLGILMECDLP(List<BCGLDKLKKDA> GGBBGNMJIEI)  [RVA 0x34C38F8]
// JBGPNJEDALF$$OLGILMECDLP @ RVA 0x34C38F8

void JBGPNJEDALF__OLGILMECDLP
               (JBGPNJEDALF_o *__this,System_Collections_Generic_List_BCGLDKLKKDA__o *GGBBGNMJIEI,
               MethodInfo *method)

{
  System_Action_T__o *action;
  
  if ((DAT_04568620 & 1) == 0) {
    FUN_01bab630(&System_Action<BCGLDKLKKDA>_TypeInfo);
    FUN_01bab630(&Method_JBGPNJEDALF_GDFBKGCDOIL__);
                    /* try { // try from 035c3948 to 036c3973 has its CatchHandler @ 035c3b24 */
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>_ForEach__);
    DAT_04568620 = 1;
  }
  action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<BCGLDKLKKDA>_TypeInfo);
  System_Action<object>___ctor();
  if (GGBBGNMJIEI != (System_Collections_Generic_List_BCGLDKLKKDA__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)GGBBGNMJIEI,action,
               Method_System_Collections_Generic_List<BCGLDKLKKDA>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string HJDHGAAHOHO(BCGLDKLKKDA IKKAMAMLIKA)  [RVA 0x34C399C]
// JBGPNJEDALF$$HJDHGAAHOHO @ RVA 0x34C399C

System_String_o *
JBGPNJEDALF__HJDHGAAHOHO(JBGPNJEDALF_o *__this,BCGLDKLKKDA_o *IKKAMAMLIKA,MethodInfo *method)

{
  System_String_o *pSVar1;
  
                    /* try { // try from 035c39b4 to 036c39bb has its CatchHandler @ 035c3b20 */
  if ((DAT_04568621 & 1) == 0) {
                    /* try { // try from 035c39c4 to 036c39cb has its CatchHandler @ 035c3b04 */
    FUN_01bab630(&SF2Paths_TypeInfo);
                    /* try { // try from 035c39d0 to 036c39d7 has its CatchHandler @ 035c3b14 */
    FUN_01bab630(&StringLiteral_22364/*"{0}/{1}"*/);
    DAT_04568621 = 1;
  }
                    /* try { // try from 035c39dc to 036c39e3 has its CatchHandler @ 035c3b08 */
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035c39e8 to 036c3a37 has its CatchHandler @ 035c3b0c */
    thunk_FUN_01ba7564();
  }
  pSVar1 = SF2Paths__NBLCEHIPPHB((MethodInfo *)0x0);
  if (IKKAMAMLIKA != (BCGLDKLKKDA_o *)0x0) {
    pSVar1 = System_String__Format
                       (StringLiteral_22364/*"{0}/{1}"*/,(Il2CppObject *)pSVar1,
                        (Il2CppObject *)(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                        (MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34C3A20]
// JBGPNJEDALF$$.ctor @ RVA 0x34C3A20

void JBGPNJEDALF___ctor(JBGPNJEDALF_o *__this,MethodInfo *method)

{
  if ((DAT_04568622 & 1) == 0) {
    FUN_01bab630(&Method_DOCLKKFHECI<BCGLDKLKKDA>__ctor__);
    DAT_04568622 = 1;
  }
                    /* try { // try from 035c3a58 to 036c3ac7 has its CatchHandler @ 035c3cb4 */
  DOCLKKFHECI<object>___ctor((DOCLKKFHECI_T__o *)__this,Method_DOCLKKFHECI<BCGLDKLKKDA>__ctor__);
  return;
}


// ===== public void GDFBKGCDOIL(BCGLDKLKKDA GGBBGNMJIEI)  [RVA 0x34C3A68]
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

