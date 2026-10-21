// TypeDefIndex 2224
// Namespace: 
// public class OANGEOLKMJG
// Fields:
//   private List<EAAHMDAMHNI> KDIMDBHMBEM; // 0x10
//   private List<ObscuredString> FMFKGEJLDGO; // 0x18
//   private ObscuredInt PJHOEIFNOHM; // 0x20

// ===== public bool DGCODECJJCC()  [RVA 0x32EDCD0]
// OANGEOLKMJG$$DGCODECJJCC @ RVA 0x32EDCD0

bool OANGEOLKMJG__DGCODECJJCC(OANGEOLKMJG_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  byte bVar3;
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_00;
  MethodInfo *extraout_x1;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 033edce0 to 034edce7 has its CatchHandler @ 033ee00c */
  if ((DAT_04567659 & 1) == 0) {
                    /* try { // try from 033edcf0 to 034edcf7 has its CatchHandler @ 033edff0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
                    /* try { // try from 033edcf8 to 034edcff has its CatchHandler @ 033ee008 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
                    /* try { // try from 033edd04 to 034edd17 has its CatchHandler @ 033edfc8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    DAT_04567659 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
                    /* try { // try from 033edd28 to 034edd2f has its CatchHandler @ 033edfcc */
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 == (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
                    /* try { // try from 033edd38 to 034edd3f has its CatchHandler @ 033edfc0 */
                    /* try { // try from 033edd40 to 034edd4f has its CatchHandler @ 033edfbc */
                    /* try { // try from 033edd50 to 034edd57 has its CatchHandler @ 033edfd0 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
  do {
                    /* try { // try from 033edd60 to 034edd6f has its CatchHandler @ 033edfb8 */
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
    pIVar1 = local_38.fields._current;
    if (!bVar2) {
      iVar4 = 7;
      goto LAB_033edda0;
    }
    if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 033edd74 to 034edd87 has its CatchHandler @ 033edfb4 */
    bVar3 = (*(local_38.fields._current)->klass->vtable[4].methodPtr)
                      (local_38.fields._current,(local_38.fields._current)->klass->vtable[4].method)
    ;
  } while (((bVar3 ^ *(char *)&pIVar1[1].monitor != '\0') & 1) != 0);
  iVar4 = 6;
                    /* try { // try from 033edd98 to 034edd9f has its CatchHandler @ 033edff8 */
LAB_033edda0:
                    /* try { // try from 033edda8 to 034eddaf has its CatchHandler @ 033ee004 */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
                    /* try { // try from 033eddb0 to 034eddcf has its CatchHandler @ 033ee018 */
  return iVar4 != 6;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x32EDE50]
// OANGEOLKMJG$$RandomizeObscuredVars @ RVA 0x32EDE50

void OANGEOLKMJG__RandomizeObscuredVars(OANGEOLKMJG_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_00;
  System_Collections_Generic_List_ObscuredString__o *__this_01;
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456765a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ObscuredString>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
    DAT_0456765a = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_90,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    local_60.fields._index = local_90.fields._index;
    local_60.fields._version = local_90.fields._version;
    local_60.fields._list = local_90.fields._list;
    local_60.fields._current = local_90.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__
                             ), bVar1) {
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033ede0c with catch @ 033edfdc */
        FUN_01bab8c8();
      }
      (*(local_60.fields._current)->klass->vtable[7].methodPtr)
                (local_60.fields._current,(local_60.fields._current)->klass->vtable[7].method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
    __this_02.fields.fakeValue = 0;
    __this_02.fields.fakeValueActive = false;
    __this_02.fields.inited = false;
    __this_02.fields._14_2_ = 0;
    __this_02.fields._0_8_ = &(__this->fields).PJHOEIFNOHM;
                    /* try { // try from 033edf78 to 034edf7f has its CatchHandler @ 033ee01c */
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_02,in_x2);
                    /* try { // try from 033edf80 to 034edf83 has its CatchHandler @ 033ed47c */
    __this_01 = (__this->fields).FMFKGEJLDGO;
                    /* try { // try from 033edf84 to 034edf87 has its CatchHandler @ 033ee000 */
    if (__this_01 != (System_Collections_Generic_List_ObscuredString__o *)0x0) {
                    /* try { // try from 033edf88 to 034edf8b has its CatchHandler @ 033edffc */
                    /* try { // try from 033edf8c to 034edf8f has its CatchHandler @ 033edff4 */
                    /* try { // try from 033edf90 to 034edf93 has its CatchHandler @ 033edfe0 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<ObscuredString>_GetEnumerator__);
      while( true ) {
                    /* try { // try from 033edf94 to 034edf97 has its CatchHandler @ 033edfd4 */
                    /* try { // try from 033edf98 to 034edf9b has its CatchHandler @ 033edfc4 */
                    /* try { // try from 033edf9c to 034edfa3 has its CatchHandler @ 033ed47c */
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_78,
                           Method_System_Collections_Generic_List_Enumerator<ObscuredString>_MoveNext__
                          );
        if (!bVar1) {
                    /* catch() { ... } // from try @ 033edd60 with catch @ 033edfb8 */
                    /* catch() { ... } // from try @ 033edd40 with catch @ 033edfbc */
                    /* catch() { ... } // from try @ 033edd38 with catch @ 033edfc0 */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_78,
                     Method_System_Collections_Generic_List_Enumerator<ObscuredString>_Dispose__);
                    /* catch() { ... } // from try @ 033edf98 with catch @ 033edfc4 */
                    /* catch() { ... } // from try @ 033edd04 with catch @ 033edfc8 */
                    /* catch() { ... } // from try @ 033edd28 with catch @ 033edfcc */
                    /* catch() { ... } // from try @ 033edd50 with catch @ 033edfd0 */
                    /* catch() { ... } // from try @ 033edf94 with catch @ 033edfd4 */
                    /* catch() { ... } // from try @ 033eddf4 with catch @ 033edfd8 */
          return;
        }
                    /* try { // try from 033edfa4 to 034edfa7 has its CatchHandler @ 033edfb0 */
                    /* try { // try from 033edfa8 to 034ee03f has its CatchHandler @ 033ed47c */
        if ((CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)local_78.fields._current ==
            (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)0x0) break;
                    /* catch() { ... } // from try @ 033edfa4 with catch @ 033edfb0 */
        CodeStage_AntiCheat_ObscuredTypes_ObscuredString__GPJJDLBJOAL
                  ((CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)local_78.fields._current,
                   (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033edd74 with catch @ 033edfb4 */
      }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033edf90 with catch @ 033edfe0 */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033ede18 with catch @ 033edfe4 */
  FUN_01bab8c8();
}


// ===== public int FPLGFNJEMDP()  [RVA 0x32EE0C4]
// OANGEOLKMJG$$FPLGFNJEMDP @ RVA 0x32EE0C4

int32_t OANGEOLKMJG__FPLGFNJEMDP(OANGEOLKMJG_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
                    /* try { // try from 033ee0d0 to 034ee0db has its CatchHandler @ 033ed47c */
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).PJHOEIFNOHM.fields,(MethodInfo *)0x0);
  return iVar1;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x32EE0D4]
// OANGEOLKMJG$$HNIHOIAMDPC @ RVA 0x32EE0D4

/* WARNING: Removing unreachable block (ram,0x033ee878) */
/* WARNING: Removing unreachable block (ram,0x033ee67c) */
/* WARNING: Removing unreachable block (ram,0x033ee868) */

void OANGEOLKMJG__HNIHOIAMDPC
               (OANGEOLKMJG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t CJNHFNHJHPE;
  int iVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  System_String_array *arg0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *item;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  System_Xml_XmlNode_o *IIBFFEPEHPF;
  EAAHMDAMHNI_o *item_00;
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_00;
  ulong uVar11;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *pCVar12;
  long lVar13;
  EAAHMDAMHNI_array *pEVar14;
  int *piVar15;
  System_Collections_Generic_List_ObscuredString__o *__this_01;
  ulong uVar16;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar17;
  
                    /* try { // try from 033ee0dc to 034ee0e3 has its CatchHandler @ 033ee0e4 */
                    /* catch() { ... } // from try @ 033ee060 with catch @ 033ee0e4
                       catch() { ... } // from try @ 033ee0dc with catch @ 033ee0e4 */
                    /* try { // try from 033ee0e8 to 034ee22b has its CatchHandler @ 033ee0e8
                       catch() { ... } // from try @ 033ee0e8 with catch @ 033ee0e8
                       catch() { ... } // from try @ 033ee31c with catch @ 033ee0e8
                       catch() { ... } // from try @ 033ee3d8 with catch @ 033ee0e8
                       catch() { ... } // from try @ 033ee3e0 with catch @ 033ee0e8
                       catch() { ... } // from try @ 033ee4a8 with catch @ 033ee0e8 */
  if ((DAT_0456765b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>_Add__);
    FUN_01bab630(&System_Xml_XmlElement_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_15439/*"[ConditionalAnimation] ConditionalDecisions for animations {0} doesn't have conditions"*/);
    FUN_01bab630(&StringLiteral_4577/*"Conditions"*/);
    FUN_01bab630(&StringLiteral_10470/*"Priority"*/);
    FUN_01bab630(&StringLiteral_9344/*"Names"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456765b = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar5,StringLiteral_9344/*"Names"*/,(MethodInfo *)0x0);
    pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    if ((pSVar7 != (System_String_o *)0x0) &&
       (arg0 = System_String__Split(pSVar7,0x7c,0,(MethodInfo *)0x0),
       arg0 != (System_String_array *)0x0)) {
      if (0 < (int)arg0->max_length) {
        uVar16 = 0;
        uVar11 = arg0->max_length & 0xffffffff;
        do {
          if (uVar11 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          __this_01 = (__this->fields).FMFKGEJLDGO;
                    /* try { // try from 033ee22c to 034ee253 has its CatchHandler @ 033ee408 */
          item = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                           (arg0->m_Items[uVar16],(MethodInfo *)0x0);
          lVar13 = Method_System_Collections_Generic_List<ObscuredString>_Add__;
          if (__this_01 == (System_Collections_Generic_List_ObscuredString__o *)0x0)
          goto LAB_033ee828;
          pCVar12 = (__this_01->fields)._items;
          (__this_01->fields)._version = (__this_01->fields)._version + 1;
          if (pCVar12 == (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_array *)0x0)
          goto LAB_033ee828;
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pCVar12->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pCVar12->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04();
          }
          else {
                    /* try { // try from 033ee288 to 034ee2b3 has its CatchHandler @ 033ee404 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          uVar2 = (uint)arg0->max_length;
          uVar11 = (ulong)uVar2;
          uVar16 = uVar16 + 1;
        } while ((long)uVar16 < (long)(int)uVar2);
      }
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_10470/*"Priority"*/,(MethodInfo *)0x0);
        CJNHFNHJHPE = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
        CVar17 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                 CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                           (CJNHFNHJHPE,(MethodInfo *)0x0);
        (__this->fields).PJHOEIFNOHM.fields = CVar17;
                    /* try { // try from 033ee2ec to 034ee2f7 has its CatchHandler @ 033ee3f4 */
        plVar8 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
        if (plVar8 != (long *)0x0) {
                    /* try { // try from 033ee304 to 034ee30b has its CatchHandler @ 033ee3f8 */
          iVar4 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
          if (iVar4 < 1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee634 with catch @ 033ee72c
                        */
            pSVar7 = System_String__Format(StringLiteral_15439/*"[ConditionalAnimation] ConditionalDecisions for animations {0} doesn't have conditions"*/,&arg0->obj,(MethodInfo *)0x0);
                    /* try { // try from 033ee744 to 034ee747 has its CatchHandler @ 033ee770 */
                    /* try { // try from 033ee748 to 034ee77f has its CatchHandler @ 033ee558 */
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
                    /* catch() { ... } // from try @ 033ee744 with catch @ 033ee770 */
                    /* try { // try from 033ee780 to 034ee787 has its CatchHandler @ 033ee79c */
                    /* try { // try from 033ee788 to 034ee793 has its CatchHandler @ 033ee558 */
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
            return;
          }
                    /* try { // try from 033ee310 to 034ee31b has its CatchHandler @ 033ee3fc */
                    /* try { // try from 033ee31c to 034ee3c7 has its CatchHandler @ 033ee0e8 */
          plVar8 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                     (AHDGNOJPPIB,
                                      (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
          if (plVar8 != (long *)0x0) {
            plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0))
            ;
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              lVar13 = *plVar8;
              uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar16 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_033ee3b8;
                  }
                  uVar16 = uVar16 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar16 != 0);
              }
              puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ee3b8:
              uVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
              if ((uVar16 & 1) == 0) {
                plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
                if (plVar8 == (long *)0x0) {
                  return;
                }
                lVar13 = *plVar8;
                uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar16 == 0) goto LAB_033ee71c;
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                goto LAB_033ee704;
              }
                    /* try { // try from 033ee3c8 to 034ee3cf has its CatchHandler @ 033ee400 */
              lVar13 = *plVar8;
                    /* try { // try from 033ee3d0 to 034ee3d3 has its CatchHandler @ 033ee3f0 */
              uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                    /* try { // try from 033ee3d4 to 034ee3d7 has its CatchHandler @ 033ee3ec */
              if (uVar16 != 0) {
                    /* try { // try from 033ee3d8 to 034ee3db has its CatchHandler @ 033ee0e8 */
                    /* try { // try from 033ee3dc to 034ee3df has its CatchHandler @ 033ee3e8 */
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                    /* try { // try from 033ee3e0 to 034ee41f has its CatchHandler @ 033ee0e8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee3dc with catch @ 033ee3e8
                        */
                  if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee22c with catch @ 033ee408
                        */
                    puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                    goto LAB_033ee418;
                  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee3d4 with catch @ 033ee3ec
                        */
                  uVar16 = uVar16 - 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee3d0 with catch @ 033ee3f0
                        */
                  piVar15 = piVar15 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee2ec with catch @ 033ee3f4
                        */
                } while (uVar16 != 0);
              }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee304 with catch @ 033ee3f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee310 with catch @ 033ee3fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee3c8 with catch @ 033ee400
                        */
              puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee288 with catch @ 033ee404
                        */
LAB_033ee418:
                    /* try { // try from 033ee420 to 034ee423 has its CatchHandler @ 033ee430 */
              plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
                    /* catch() { ... } // from try @ 033ee420 with catch @ 033ee430 */
              bVar1 = (System_Xml_XmlElement_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033ee440 to 034ee4a7 has its CatchHandler @ 033ee4bc */
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(System_Xml_XmlElement_c **)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8)
                  != System_Xml_XmlElement_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(plVar10);
              }
              pSVar7 = (System_String_o *)
                       (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
              bVar3 = System_String__op_Equality(pSVar7,StringLiteral_4577/*"Conditions"*/,(MethodInfo *)0x0);
              if (bVar3) {
                plVar10 = (long *)(**(code **)(*plVar10 + 0x208))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x210));
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                plVar10 = (long *)(**(code **)(*plVar10 + 0x1b8))
                                            (plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
LAB_033ee4a4:
                lVar13 = *plVar10;
                    /* try { // try from 033ee4a8 to 034ee4b3 has its CatchHandler @ 033ee0e8 */
                uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar16 != 0) {
                    /* try { // try from 033ee4b4 to 034ee4bb has its CatchHandler @ 033ee4bc */
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ee440 with catch @ 033ee4bc
                       catch(type#2 @ 00000000) { ... } // from try @ 033ee4b4 with catch @ 033ee4bc
                        */
                    if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_033ee4f0;
                    }
                    uVar16 = uVar16 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar16 != 0);
                }
                puVar9 = (undefined8 *)
                         FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ee4f0:
                uVar16 = (*(code *)*puVar9)(plVar10,puVar9[1]);
                if ((uVar16 & 1) != 0) {
                  lVar13 = *plVar10;
                  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar16 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                      if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                          System_Collections_IEnumerator_TypeInfo) {
                        puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                        goto LAB_033ee550;
                      }
                      uVar16 = uVar16 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar9 = (undefined8 *)
                           FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,1);
LAB_033ee550:
                    /* try { // try from 033ee558 to 034ee633 has its CatchHandler @ 033ee558
                       catch() { ... } // from try @ 033ee558 with catch @ 033ee558
                       catch() { ... } // from try @ 033ee67c with catch @ 033ee558
                       catch() { ... } // from try @ 033ee710 with catch @ 033ee558
                       catch() { ... } // from try @ 033ee718 with catch @ 033ee558
                       catch() { ... } // from try @ 033ee748 with catch @ 033ee558
                       catch() { ... } // from try @ 033ee788 with catch @ 033ee558 */
                  IIBFFEPEHPF = (System_Xml_XmlNode_o *)(*(code *)*puVar9)(plVar10,puVar9[1]);
                  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
                    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    if (((IIBFFEPEHPF->klass->_2).naturalAligment < bVar1) ||
                       ((IIBFFEPEHPF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01babc64();
                    }
                  }
                  item_00 = EAAHMDAMHNI__JCCANOCMAKD(IIBFFEPEHPF,(MethodInfo *)0x0);
                  lVar13 = Method_System_Collections_Generic_List<EAAHMDAMHNI>_Add__;
                  __this_00 = (__this->fields).KDIMDBHMBEM;
                  if (__this_00 == (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pEVar14 = (__this_00->fields)._items;
                  (__this_00->fields)._version = (__this_00->fields)._version + 1;
                  if (pEVar14 == (EAAHMDAMHNI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  uVar2 = (__this_00->fields)._size;
                  if (uVar2 < (uint)pEVar14->max_length) {
                    (__this_00->fields)._size = uVar2 + 1;
                    pEVar14->m_Items[(int)uVar2] = item_00;
                    thunk_FUN_01c20e04(pEVar14->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               (Il2CppObject *)item_00,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                  }
                  goto LAB_033ee4a4;
                }
                plVar10 = (long *)thunk_FUN_01bda71c(plVar10,System_IDisposable_TypeInfo);
                if (plVar10 != (long *)0x0) {
                  lVar13 = *plVar10;
                  uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
                  if (uVar16 != 0) {
                    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                    do {
                    /* try { // try from 033ee634 to 034ee63b has its CatchHandler @ 033ee72c */
                      if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 033ee654 to 034ee65b has its CatchHandler @ 033ee720 */
                        puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                        goto LAB_033ee660;
                      }
                      uVar16 = uVar16 - 1;
                      piVar15 = piVar15 + 4;
                    } while (uVar16 != 0);
                  }
                  puVar9 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_033ee660:
                  (*(code *)*puVar9)(plVar10,puVar9[1]);
                }
              }
            } while( true );
          }
        }
      }
    }
  }
LAB_033ee828:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
                    /* try { // try from 033ee710 to 034ee713 has its CatchHandler @ 033ee558 */
    uVar16 = uVar16 - 1;
                    /* try { // try from 033ee714 to 034ee717 has its CatchHandler @ 033ee71c */
    piVar15 = piVar15 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee674 with catch @ 033ee718
                       try { // try from 033ee718 to 034ee743 has its CatchHandler @ 033ee558 */
    if (uVar16 == 0) break;
LAB_033ee704:
                    /* try { // try from 033ee708 to 034ee70b has its CatchHandler @ 033ee728 */
                    /* try { // try from 033ee70c to 034ee70f has its CatchHandler @ 033ee724 */
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 033ee794 to 034ee79b has its CatchHandler @ 033ee79c */
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033ee798;
    }
  }
LAB_033ee71c:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee714 with catch @ 033ee71c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee654 with catch @ 033ee720
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee70c with catch @ 033ee724
                        */
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033ee708 with catch @ 033ee728
                        */
LAB_033ee798:
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ee780 with catch @ 033ee79c
                       catch(type#2 @ 00000000) { ... } // from try @ 033ee794 with catch @ 033ee79c
                        */
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


// ===== public void GIENGNEGHPJ(ABMJNMFPDEJ APOLFFJGBEO)  [RVA 0x32EE964]
// OANGEOLKMJG$$GIENGNEGHPJ @ RVA 0x32EE964

void OANGEOLKMJG__GIENGNEGHPJ(OANGEOLKMJG_o *__this,ABMJNMFPDEJ_o APOLFFJGBEO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456765c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    DAT_0456765c = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 != (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
                    /* try { // try from 033eea44 to 034eeb33 has its CatchHandler @ 033eea44
                       catch() { ... } // from try @ 033eea44 with catch @ 033eea44
                       catch() { ... } // from try @ 033eec30 with catch @ 033eea44
                       catch() { ... } // from try @ 033eed40 with catch @ 033eea44
                       catch() { ... } // from try @ 033eed48 with catch @ 033eea44
                       catch() { ... } // from try @ 033eedfc with catch @ 033eea44 */
        return;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      (*(local_48.fields._current)->klass->vtable[6].methodPtr)
                (local_48.fields._current,APOLFFJGBEO.fields.LHNJNJMBLJM,
                 APOLFFJGBEO.fields.EMCFCMFGPME,(local_48.fields._current)->klass->vtable[6].method)
      ;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<ObscuredString> PLBHIOPFIDJ()  [RVA 0x32EEABC]
// OANGEOLKMJG$$PLBHIOPFIDJ @ RVA 0x32EEABC

System_Collections_Generic_List_ObscuredString__o *
OANGEOLKMJG__PLBHIOPFIDJ(OANGEOLKMJG_o *__this,MethodInfo *method)

{
  return (__this->fields).FMFKGEJLDGO;
}


// ===== public void .ctor()  [RVA 0x32EEAC4]
// OANGEOLKMJG$$.ctor @ RVA 0x32EEAC4

void OANGEOLKMJG___ctor(OANGEOLKMJG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_00;
  System_Collections_Generic_List_ObscuredString__o *__this_01;
  System_Collections_Generic_List_ObscuredString__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456765d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<EAAHMDAMHNI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ObscuredString>_TypeInfo);
                    /* try { // try from 033eeb34 to 034eeb5b has its CatchHandler @ 033eed64 */
    DAT_0456765d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_EAAHMDAMHNI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EAAHMDAMHNI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EAAHMDAMHNI>__ctor__);
  (__this->fields).KDIMDBHMBEM = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_ObscuredString__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ObscuredString>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ObscuredString>__ctor__);
  ppSVar1 = &(__this->fields).FMFKGEJLDGO;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
                    /* try { // try from 033eeb90 to 034eebbb has its CatchHandler @ 033eed60 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

