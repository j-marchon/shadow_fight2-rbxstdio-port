// TypeDefIndex 2547
// Namespace: 
// public class AKADDLNNLKH
// Fields:
//   private readonly Action<bool> HGGGOMEBMEN; // 0x10
//   private readonly XmlNode FJFDMMDMMGE; // 0x18
//   private readonly List<HOGPIBHKJDL> INIAKIIBBHK; // 0x20

// ===== public void .ctor(XmlNode AHDGNOJPPIB, Action<bool> JKJLJMONMHJ)  [RVA 0x33975E0]
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
  GameUtils_MACDOBFPDPP_o *pMVar6;
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
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
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
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar6 = GameUtils_TypeInfo->static_fields->JIKLPLFKEDI;
  if ((pMVar6 == (GameUtils_MACDOBFPDPP_o *)0x0) ||
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
                (pSVar5,StringLiteral_1567/*"0"*/,(pSVar5->klass->vtable)._10_set_Value.method);
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


// ===== public void JBBNCCODBHL(HGLELMDNMMA ODHOLHPKBAG, int CJNHFNHJHPE)  [RVA 0x3397934]
// AKADDLNNLKH$$JBBNCCODBHL @ RVA 0x3397934

void AKADDLNNLKH__JBBNCCODBHL
               (AKADDLNNLKH_o *__this,HGLELMDNMMA_o *ODHOLHPKBAG,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  int iVar1;
  HOGPIBHKJDL_o *pHVar2;
  
                    /* try { // try from 03497948 to 0359794b has its CatchHandler @ 03497988 */
  pHVar2 = AKADDLNNLKH__PKFOJKHFKKL(__this,ODHOLHPKBAG,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
                    /* try { // try from 0349794c to 0359794f has its CatchHandler @ 03497974 */
  iVar1 = 0;
  if (pHVar2 != (HOGPIBHKJDL_o *)0x0) {
                    /* try { // try from 03497950 to 03597957 has its CatchHandler @ 03497990 */
                    /* try { // try from 03497958 to 0359795f has its CatchHandler @ 0349797c */
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pHVar2->fields)._PKGCKALOMOF_k__BackingField.fields,(MethodInfo *)0x0);
  }
                    /* try { // try from 03497960 to 035979ab has its CatchHandler @ 034975a4 */
                    /* catch() { ... } // from try @ 0349789c with catch @ 03497964 */
                    /* catch() { ... } // from try @ 034976fc with catch @ 03497968 */
                    /* catch() { ... } // from try @ 034978f4 with catch @ 0349796c */
                    /* catch() { ... } // from try @ 03497754 with catch @ 03497970 */
                    /* catch() { ... } // from try @ 0349794c with catch @ 03497974 */
  AKADDLNNLKH__POPGCEMGADA(__this,ODHOLHPKBAG,iVar1 + CJNHFNHJHPE,method);
  return;
}


// ===== public int CBGJMMDIFGA(HGLELMDNMMA ODHOLHPKBAG)  [RVA 0x3397C20]
// AKADDLNNLKH$$CBGJMMDIFGA @ RVA 0x3397C20

int32_t AKADDLNNLKH__CBGJMMDIFGA
                  (AKADDLNNLKH_o *__this,HGLELMDNMMA_o *ODHOLHPKBAG,MethodInfo *method)

{
  int32_t iVar1;
  HOGPIBHKJDL_o *pHVar2;
  
  pHVar2 = AKADDLNNLKH__PKFOJKHFKKL(__this,ODHOLHPKBAG,method);
  if (pHVar2 != (HOGPIBHKJDL_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pHVar2->fields)._PKGCKALOMOF_k__BackingField.fields,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


// ===== public HOGPIBHKJDL PKFOJKHFKKL(HGLELMDNMMA ODHOLHPKBAG)  [RVA 0x3397978]
// AKADDLNNLKH$$PKFOJKHFKKL @ RVA 0x3397978

HOGPIBHKJDL_o *
AKADDLNNLKH__PKFOJKHFKKL(AKADDLNNLKH_o *__this,HGLELMDNMMA_o *ODHOLHPKBAG,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  HOGPIBHKJDL_o *pHVar1;
  System_Collections_Generic_List_HOGPIBHKJDL__o *source;
  
                    /* catch() { ... } // from try @ 0349787c with catch @ 03497978 */
                    /* catch() { ... } // from try @ 03497958 with catch @ 0349797c */
                    /* catch() { ... } // from try @ 034978a0 with catch @ 03497980 */
                    /* catch() { ... } // from try @ 03497870 with catch @ 03497984 */
                    /* catch() { ... } // from try @ 03497948 with catch @ 03497988 */
                    /* catch() { ... } // from try @ 034976dc with catch @ 0349798c */
                    /* catch() { ... } // from try @ 03497950 with catch @ 03497990 */
                    /* catch() { ... } // from try @ 03497700 with catch @ 03497994 */
                    /* catch() { ... } // from try @ 034976d0 with catch @ 03497998 */
                    /* catch() { ... } // from try @ 03497854 with catch @ 0349799c */
  if ((DAT_04567c5f & 1) == 0) {
                    /* try { // try from 034979ac to 035979af has its CatchHandler @ 034979d0 */
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<HOGPIBHKJDL>__);
                    /* try { // try from 034979b0 to 035979d7 has its CatchHandler @ 034975a4 */
    FUN_01bab630(&System_Func<HOGPIBHKJDL,_bool>_TypeInfo);
    FUN_01bab630(&Method_AKADDLNNLKH_HFCNADHICNL_EKNHGIKDLKN__);
                    /* catch() { ... } // from try @ 034979ac with catch @ 034979d0 */
    FUN_01bab630(&AKADDLNNLKH_HFCNADHICNL_TypeInfo);
                    /* try { // try from 034979d8 to 035979eb has its CatchHandler @ 03497a48 */
    DAT_04567c5f = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(AKADDLNNLKH_HFCNADHICNL_TypeInfo);
                    /* catch() { ... } // from try @ 034976b4 with catch @ 034979ec
                       try { // try from 034979ec to 035979fb has its CatchHandler @ 034975a4 */
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
                    /* try { // try from 034979fc to 035979ff has its CatchHandler @ 03497a24 */
                    /* try { // try from 03497a00 to 03597a2b has its CatchHandler @ 034975a4 */
    __this_00[1].klass = (Il2CppClass *)ODHOLHPKBAG;
    thunk_FUN_01c20e04(__this_00 + 1,ODHOLHPKBAG);
    source = (__this->fields).INIAKIIBBHK;
                    /* catch() { ... } // from try @ 034979fc with catch @ 03497a24 */
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(System_Func<HOGPIBHKJDL,_bool>_TypeInfo);
                    /* try { // try from 03497a2c to 03597a33 has its CatchHandler @ 03497a48 */
                    /* try { // try from 03497a34 to 03597a3f has its CatchHandler @ 034975a4 */
    System_Func<object,_bool>___ctor();
                    /* try { // try from 03497a40 to 03597a47 has its CatchHandler @ 03497a48 */
                    /* catch() { ... } // from try @ 034979d8 with catch @ 03497a48
                       catch() { ... } // from try @ 03497a2c with catch @ 03497a48
                       catch() { ... } // from try @ 03497a40 with catch @ 03497a48 */
    pHVar1 = (HOGPIBHKJDL_o *)
             System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                        Method_System_Linq_Enumerable_FirstOrDefault<HOGPIBHKJDL>__);
    return pHVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JBBNCCODBHL(string KGLJICLJHEL, int CJNHFNHJHPE)  [RVA 0x3397C50]
// AKADDLNNLKH$$JBBNCCODBHL @ RVA 0x3397C50

void AKADDLNNLKH__JBBNCCODBHL
               (AKADDLNNLKH_o *__this,System_String_o *KGLJICLJHEL,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  GameUtils_MACDOBFPDPP_o *__this_00;
  HGLELMDNMMA_o *ODHOLHPKBAG;
  
  if ((DAT_04567c60 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04567c60 = 1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = GameUtils_TypeInfo->static_fields->JIKLPLFKEDI;
  if (__this_00 != (GameUtils_MACDOBFPDPP_o *)0x0) {
    ODHOLHPKBAG = GameUtils_MACDOBFPDPP__HNCMGLINNDO(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
    if (ODHOLHPKBAG != (HGLELMDNMMA_o *)0x0) {
      AKADDLNNLKH__JBBNCCODBHL(__this,ODHOLHPKBAG,CJNHFNHJHPE,method);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CBGJMMDIFGA(string KGLJICLJHEL)  [RVA 0x3397CF0]
// AKADDLNNLKH$$CBGJMMDIFGA @ RVA 0x3397CF0

int32_t AKADDLNNLKH__CBGJMMDIFGA
                  (AKADDLNNLKH_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  int32_t iVar1;
  HOGPIBHKJDL_o *pHVar2;
  
  pHVar2 = AKADDLNNLKH__PKFOJKHFKKL(__this,KGLJICLJHEL,method);
  if (pHVar2 != (HOGPIBHKJDL_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pHVar2->fields)._PKGCKALOMOF_k__BackingField.fields,(MethodInfo *)0x0);
    return iVar1;
  }
  return 0;
}


// ===== public bool EGFMIDAKOFH(string KGLJICLJHEL)  [RVA 0x3397E84]
// AKADDLNNLKH$$EGFMIDAKOFH @ RVA 0x3397E84

bool AKADDLNNLKH__EGFMIDAKOFH(AKADDLNNLKH_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  HOGPIBHKJDL_o *pHVar1;
  
  pHVar1 = AKADDLNNLKH__PKFOJKHFKKL(__this,KGLJICLJHEL,method);
  return pHVar1 != (HOGPIBHKJDL_o *)0x0;
}


// ===== public HOGPIBHKJDL PKFOJKHFKKL(string KGLJICLJHEL)  [RVA 0x3397D18]
// AKADDLNNLKH$$PKFOJKHFKKL @ RVA 0x3397D18

HOGPIBHKJDL_o *
AKADDLNNLKH__PKFOJKHFKKL(AKADDLNNLKH_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HOGPIBHKJDL__o *__this_00;
  HGLELMDNMMA_o *pHVar2;
  HOGPIBHKJDL_o *pHVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567c61 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOGPIBHKJDL>_Dispose__);
                    /* try { // try from 03497d4c to 03597d53 has its CatchHandler @ 03497db4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOGPIBHKJDL>_MoveNext__);
                    /* try { // try from 03497d5c to 03597d67 has its CatchHandler @ 03497db0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOGPIBHKJDL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOGPIBHKJDL>_GetEnumerator__);
    DAT_04567c61 = 1;
  }
                    /* try { // try from 03497d74 to 03597d7b has its CatchHandler @ 03497dac */
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 03497d7c to 03597d9f has its CatchHandler @ 03497c14 */
  __this_00 = (__this->fields).INIAKIIBBHK;
  if (__this_00 == (System_Collections_Generic_List_HOGPIBHKJDL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03497da0 to 03597da3 has its CatchHandler @ 03497da8 */
                    /* try { // try from 03497da4 to 03597dcb has its CatchHandler @ 03497c14 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOGPIBHKJDL>_GetEnumerator__);
  do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03497da0 with catch @ 03497da8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03497d74 with catch @ 03497dac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03497d5c with catch @ 03497db0
                        */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<HOGPIBHKJDL>_MoveNext__);
    pHVar3 = (HOGPIBHKJDL_o *)local_48.fields._current;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03497d4c with catch @ 03497db4
                        */
    if (!bVar1) {
      pHVar3 = (HOGPIBHKJDL_o *)0x0;
      break;
    }
    if ((HOGPIBHKJDL_o *)local_48.fields._current == (HOGPIBHKJDL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar2 = ((HOGPIBHKJDL_Fields *)((long)local_48.fields._current + 0x10))->
             _IHKLCENNHPI_k__BackingField;
    if (pHVar2 == (HGLELMDNMMA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03497e0c to 03597e13 has its CatchHandler @ 03497e14 */
      FUN_01bab8c8();
    }
                    /* try { // try from 03497dcc to 03597dcf has its CatchHandler @ 03497df0 */
                    /* try { // try from 03497dd0 to 03597df7 has its CatchHandler @ 03497c14 */
    bVar1 = System_String__op_Equality
                      ((pHVar2->fields)._COIPKAKHDFP_k__BackingField,KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<HOGPIBHKJDL>_Dispose__);
                    /* catch() { ... } // from try @ 03497dcc with catch @ 03497df0 */
                    /* try { // try from 03497df8 to 03597dff has its CatchHandler @ 03497e14 */
                    /* try { // try from 03497e00 to 03597e0b has its CatchHandler @ 03497c14 */
  return pHVar3;
}


// ===== private void POPGCEMGADA(HGLELMDNMMA ODHOLHPKBAG, int CJNHFNHJHPE)  [RVA 0x3397A60]
// AKADDLNNLKH$$POPGCEMGADA @ RVA 0x3397A60

void AKADDLNNLKH__POPGCEMGADA
               (AKADDLNNLKH_o *__this,HGLELMDNMMA_o *ODHOLHPKBAG,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  int32_t JCIDLNABHMN;
  int32_t iVar1;
  uint uVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  undefined2 uVar5;
  int32_t iVar6;
  long lVar7;
  bool bVar8;
  HOGPIBHKJDL_o *__this_00;
  System_Collections_Generic_List_HOGPIBHKJDL__o *__this_01;
  System_Xml_XmlAttribute_o *pSVar9;
  MethodInfo *method_00;
  HOGPIBHKJDL_array *pHVar10;
  HGLELMDNMMA_o *pHVar11;
  System_Action_bool__o *pSVar12;
  System_String_o *pSVar13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar14;
  int32_t local_24;
  
  method_00 = (MethodInfo *)(ulong)(uint)CJNHFNHJHPE;
  if ((DAT_04567c62 & 1) == 0) {
    FUN_01bab630(&HOGPIBHKJDL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOGPIBHKJDL>_Add__);
    DAT_04567c62 = 1;
  }
  if (ODHOLHPKBAG == (HGLELMDNMMA_o *)0x0) goto LAB_03497c1c;
  iVar1 = (ODHOLHPKBAG->fields)._MJMMFOPIGCL_k__BackingField;
  if (CJNHFNHJHPE <= iVar1) {
    iVar1 = CJNHFNHJHPE;
  }
  JCIDLNABHMN = 0;
  if (-1 < CJNHFNHJHPE) {
    JCIDLNABHMN = iVar1;
  }
  local_24 = JCIDLNABHMN;
  __this_00 = AKADDLNNLKH__PKFOJKHFKKL(__this,ODHOLHPKBAG,method_00);
  if (__this_00 == (HOGPIBHKJDL_o *)0x0) {
    __this_00 = (HOGPIBHKJDL_o *)thunk_FUN_01bda818(HOGPIBHKJDL_TypeInfo);
    HOGPIBHKJDL___ctor(__this_00,ODHOLHPKBAG,JCIDLNABHMN,(MethodInfo *)0x0);
    lVar7 = Method_System_Collections_Generic_List<HOGPIBHKJDL>_Add__;
    __this_01 = (__this->fields).INIAKIIBBHK;
    if (__this_01 == (System_Collections_Generic_List_HOGPIBHKJDL__o *)0x0) goto LAB_03497c1c;
    pHVar10 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pHVar10 == (HOGPIBHKJDL_array *)0x0) goto LAB_03497c1c;
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pHVar10->max_length) {
      (__this_01->fields)._size = uVar2 + 1;
      pHVar10->m_Items[(int)uVar2] = __this_00;
      thunk_FUN_01c20e04(pHVar10->m_Items + (int)uVar2,__this_00);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
    if (__this_00 == (HOGPIBHKJDL_o *)0x0) goto LAB_03497c1c;
  }
  bVar3 = (__this_00->fields)._PKGCKALOMOF_k__BackingField.fields.fakeValueActive;
  bVar4 = (__this_00->fields)._PKGCKALOMOF_k__BackingField.fields.inited;
  uVar5 = *(undefined2 *)&(__this_00->fields)._PKGCKALOMOF_k__BackingField.fields.field_0xe;
  iVar1 = (__this_00->fields)._PKGCKALOMOF_k__BackingField.fields.currentCryptoKey;
  iVar6 = (__this_00->fields)._PKGCKALOMOF_k__BackingField.fields.hiddenValue;
  (__this_00->fields)._LJGJEGHMFAM_k__BackingField.fields.fakeValue =
       (__this_00->fields)._PKGCKALOMOF_k__BackingField.fields.fakeValue;
  (__this_00->fields)._LJGJEGHMFAM_k__BackingField.fields.fakeValueActive = bVar3;
  (__this_00->fields)._LJGJEGHMFAM_k__BackingField.fields.inited = bVar4;
  *(undefined2 *)&(__this_00->fields)._LJGJEGHMFAM_k__BackingField.fields.field_0xe = uVar5;
  (__this_00->fields)._LJGJEGHMFAM_k__BackingField.fields.currentCryptoKey = iVar1;
  (__this_00->fields)._LJGJEGHMFAM_k__BackingField.fields.hiddenValue = iVar6;
  CVar14 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(JCIDLNABHMN,(MethodInfo *)0x0)
  ;
  pHVar11 = (__this_00->fields)._IHKLCENNHPI_k__BackingField;
  (__this_00->fields)._PKGCKALOMOF_k__BackingField.fields = CVar14;
  if (pHVar11 != (HGLELMDNMMA_o *)0x0) {
    pSVar13 = (pHVar11->fields)._COIPKAKHDFP_k__BackingField;
    pSVar9 = EIABCPKDEBD__NHPDFFAIJMF((__this->fields).FJFDMMDMMGE,pSVar13,(MethodInfo *)0x0);
    bVar8 = EIABCPKDEBD__OBECCOPBADO(pSVar9,(MethodInfo *)0x0);
    if (bVar8) {
      EIABCPKDEBD__HBGAGFJBGKD((__this->fields).FJFDMMDMMGE,pSVar13,(MethodInfo *)0x0);
    }
    pSVar9 = EIABCPKDEBD__NHPDFFAIJMF((__this->fields).FJFDMMDMMGE,pSVar13,(MethodInfo *)0x0);
    pSVar13 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    if (pSVar9 != (System_Xml_XmlAttribute_o *)0x0) {
      (*(pSVar9->klass->vtable)._10_set_Value.methodPtr)
                (pSVar9,pSVar13,(pSVar9->klass->vtable)._10_set_Value.method);
      pSVar12 = (__this->fields).HGGGOMEBMEN;
      if (pSVar12 != (System_Action_bool__o *)0x0) {
        (*(code *)(pSVar12->fields).super.super.invoke_impl)
                  ((pSVar12->fields).super.super.method_code,0,(pSVar12->fields).super.super.method)
        ;
                    /* try { // try from 03497c14 to 03597d4b has its CatchHandler @ 03497c14
                       catch() { ... } // from try @ 03497c14 with catch @ 03497c14
                       catch() { ... } // from try @ 03497d7c with catch @ 03497c14
                       catch() { ... } // from try @ 03497da4 with catch @ 03497c14
                       catch() { ... } // from try @ 03497dd0 with catch @ 03497c14
                       catch() { ... } // from try @ 03497e00 with catch @ 03497c14 */
        return;
      }
    }
  }
LAB_03497c1c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void POPGCEMGADA(string KGLJICLJHEL, int CJNHFNHJHPE)  [RVA 0x3397E9C]
// AKADDLNNLKH$$POPGCEMGADA @ RVA 0x3397E9C

void AKADDLNNLKH__POPGCEMGADA
               (AKADDLNNLKH_o *__this,System_String_o *KGLJICLJHEL,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  GameUtils_MACDOBFPDPP_o *__this_00;
  HGLELMDNMMA_o *ODHOLHPKBAG;
  
  if ((DAT_04567c63 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04567c63 = 1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = GameUtils_TypeInfo->static_fields->JIKLPLFKEDI;
  if (__this_00 != (GameUtils_MACDOBFPDPP_o *)0x0) {
    ODHOLHPKBAG = GameUtils_MACDOBFPDPP__HNCMGLINNDO(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
    AKADDLNNLKH__POPGCEMGADA(__this,ODHOLHPKBAG,CJNHFNHJHPE,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

