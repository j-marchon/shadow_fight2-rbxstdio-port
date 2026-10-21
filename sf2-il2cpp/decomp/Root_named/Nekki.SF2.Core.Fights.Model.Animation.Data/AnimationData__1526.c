// Original name: Nekki.SF2.Core.Fights.Model.Animation.Data.AnimationData  (obfuscated LDHBHPILNMA)
// TypeDefIndex 1526
// Namespace: 
// public static class AnimationData
// Fields:
//   private static Dictionary<string, TemplateAnimation> ICLBNEKDHIO; // 0x0
//   private static readonly Dictionary<string, InfoAnimation> EJNINLMPAAO; // 0x8
//   public static readonly List<InfoAnimation> HDGPEJOPPOB; // 0x10
//   public static readonly List<ABNLGBHKOCE> MHKDMKDBMBE; // 0x18
//   private static readonly HashSet<string> KDDGJMCPJNA; // 0x20
//   private static readonly List<KCLPNDAPADO> GLNEIGKMPDC; // 0x28

// ===== public static void JMOLDDKBHLC(Model BCKBBGCOMJD, bool AFBFJKELDIJ)  [RVA 0x319FBB0]
// AnimationData$$JMOLDDKBHLC @ RVA 0x319FBB0

void AnimationData__JMOLDDKBHLC(Model_o *BCKBBGCOMJD,bool AFBFJKELDIJ,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this;
  byte bVar3;
  bool bVar4;
  int32_t iVar5;
  ModelParameters_o *pPVar6;
  Fight_o *pFVar7;
  System_Collections_Generic_List_object__o *__this_00;
  NJPBHDMCLIN_o *__this_01;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar8;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar9;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar10;
  System_Collections_Generic_List_string__o *EOLHDEHOFHL;
  Model_o *pOVar11;
  ModelParameters_o **ppPVar12;
  InfoAnimation_HJPFANEPGJF_o *pEVar13;
  InfoAnimation_array *pEVar14;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar15;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar16;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar17;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566ad8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_get_Current__);
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ConditionAnimation>_TypeInfo);
    FUN_01bab630(&NJPBHDMCLIN_TypeInfo);
    DAT_04566ad8 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (BCKBBGCOMJD == (Model_o *)0x0) goto LAB_0329fff4;
  pOVar11 = (BCKBBGCOMJD->fields).BPJMMBGIMNC;
  if (pOVar11 == (Model_o *)0x0) {
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&Fight_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar7 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
    if (pFVar7 != (Fight_o *)0x0) {
      ppPVar12 = &(pFVar7->fields).JEDELFOBLEN;
      goto LAB_0329fcd0;
    }
LAB_0329fce4:
    pSVar16 = (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0;
  }
  else {
    ppPVar12 = &(pOVar11->fields).FAPMJJBOFEF;
LAB_0329fcd0:
    pPVar6 = *ppPVar12;
    if (pPVar6 == (ModelParameters_o *)0x0) goto LAB_0329fce4;
    if (AFBFJKELDIJ) {
      pSVar16 = (pPVar6->fields).INGEFFGPJPB;
    }
    else {
      pSVar16 = ModelParameters__BMDDFABHHCA(pPVar6,(MethodInfo *)0x0);
    }
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (Fight_TypeInfo->static_fields->IGABFCCGLCO == (Fight_o *)0x0) {
    iVar5 = 0;
  }
  else {
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0329fd50 to 0339fe7f has its CatchHandler @ 0329fd50
                       catch() { ... } // from try @ 0329fd50 with catch @ 0329fd50
                       catch() { ... } // from try @ 0329ffdc with catch @ 0329fd50
                       catch() { ... } // from try @ 032a0084 with catch @ 0329fd50
                       catch() { ... } // from try @ 032a008c with catch @ 0329fd50
                       catch() { ... } // from try @ 032a014c with catch @ 0329fd50 */
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&Fight_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar7 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
    if (pFVar7 == (Fight_o *)0x0) goto LAB_0329fff4;
    iVar5 = Fight__IHMLDBDLJON(pFVar7,(MethodInfo *)0x0);
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ConditionAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<ConditionAnimation>__ctor__);
  __this_01 = (NJPBHDMCLIN_o *)thunk_FUN_01bda818(NJPBHDMCLIN_TypeInfo);
  NJPBHDMCLIN___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (NJPBHDMCLIN_o *)0x0) {
    (__this_01->fields).GGIGKNJPODI = BCKBBGCOMJD;
    thunk_FUN_01c20e04(&__this_01->fields,BCKBBGCOMJD);
    pPVar6 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
    if (pPVar6 != (ModelParameters_o *)0x0) {
      pSVar8 = (System_Collections_Generic_List_HOOAAGABMBL__o *)
               (*(pPVar6->klass->vtable)._5_ACBMLHJIFMD.methodPtr)
                         (pPVar6,(pPVar6->klass->vtable)._5_ACBMLHJIFMD.method);
      ppSVar17 = &(__this_01->fields).GFBNJPMOEKD;
      *ppSVar17 = pSVar8;
      thunk_FUN_01c20e04(ppSVar17,pSVar8);
      bVar3 = (*(BCKBBGCOMJD->klass->vtable)._9_EEMIOBINNJG.methodPtr)
                        (BCKBBGCOMJD,(BCKBBGCOMJD->klass->vtable)._9_EEMIOBINNJG.method);
      (__this_01->fields).ANOKHPAKKON = (bool_conflict)(bVar3 & 1);
      pPVar6 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
      if (pPVar6 != (ModelParameters_o *)0x0) {
        (__this_01->fields).HLPLAKCBINK = (pPVar6->fields).HLPLAKCBINK;
        pOVar11 = Model__IPJMKMJAIMK(BCKBBGCOMJD,(MethodInfo *)0x0);
        if ((pOVar11 != (Model_o *)0x0) &&
           (pPVar6 = (pOVar11->fields).FAPMJJBOFEF, pPVar6 != (ModelParameters_o *)0x0)) {
          if (AFBFJKELDIJ) {
            pSVar10 = (pPVar6->fields).INGEFFGPJPB;
          }
          else {
            pSVar10 = ModelParameters__BMDDFABHHCA(pPVar6,(MethodInfo *)0x0);
          }
          ppSVar15 = &(__this_01->fields).OOFILGKHDDI;
          *ppSVar15 = pSVar10;
                    /* try { // try from 0329fe80 to 0339fea7 has its CatchHandler @ 032a00b0 */
          thunk_FUN_01c20e04(ppSVar15);
          (__this_01->fields).GIIIBDMEPDK = pSVar16;
          thunk_FUN_01c20e04(&(__this_01->fields).GIIIBDMEPDK,pSVar16);
          (__this_01->fields).COALAGILPBO = iVar5;
          if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar9 = AnimationData_TypeInfo->static_fields->HDGPEJOPPOB;
          if (pSVar9 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* try { // try from 0329fedc to 0339ff07 has its CatchHandler @ 032a00ac */
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_78,(System_Collections_Generic_List_object__o *)pSVar9,
                       Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
            local_60.fields._index = local_78.fields._index;
            local_60.fields._version = local_78.fields._version;
            local_60.fields._list = local_78.fields._list;
            local_60.fields._current = local_78.fields._current;
            while( true ) {
              do {
                do {
                  bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (&local_60,
                                     Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__
                                    );
                  __this = local_60.fields._current;
                  if (!bVar4) {
                    System_Collections_Generic_List_Enumerator<object>__Dispose
                              (&local_60,
                               Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__
                              );
                    /* try { // try from 0329ffdc to 033a006f has its CatchHandler @ 0329fd50 */
                    return;
                  }
                  if ((InfoAnimation_o *)local_60.fields._current == (InfoAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  pEVar13 = ((InfoAnimation_Fields *)((long)local_60.fields._current + 0x10))->
                            DMGLMCBIAGL;
                  if (pEVar13 == (InfoAnimation_HJPFANEPGJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  bVar4 = InfoAnimation__PCPBHJGAOOH
                                    ((InfoAnimation_o *)local_60.fields._current,__this_01,
                                     (pEVar13->fields).KFLHLLDPBIC,(EventAnimation_o *)0x0,
                                     (MethodInfo *)0x0);
                } while (!bVar4);
                pPVar6 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
                if (pPVar6 == (ModelParameters_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                EOLHDEHOFHL = (pPVar6->fields).ODHIGGJOPEK;
                    /* try { // try from 0329ff40 to 0339ff4f has its CatchHandler @ 032a00b8 */
              } while ((EOLHDEHOFHL != (System_Collections_Generic_List_string__o *)0x0) &&
                      (bVar4 = InfoAnimation__FINLPLHJDHN
                                         ((InfoAnimation_o *)__this,EOLHDEHOFHL,(MethodInfo *)0x0),
                      bVar4));
              lVar2 = Method_System_Collections_Generic_List<InfoAnimation>_Add__;
                    /* try { // try from 0329ff54 to 0339ff63 has its CatchHandler @ 032a0098 */
              pSVar9 = (BCKBBGCOMJD->fields).OOBBJEDHHKM;
              if (pSVar9 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pEVar14 = (pSVar9->fields)._items;
                    /* try { // try from 0329ff64 to 0339ff6f has its CatchHandler @ 032a00a4 */
              (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
              if (pEVar14 == (InfoAnimation_array *)0x0) break;
              uVar1 = (pSVar9->fields)._size;
              if (uVar1 < (uint)pEVar14->max_length) {
                (pSVar9->fields)._size = uVar1 + 1;
                pEVar14->m_Items[(int)uVar1] = (InfoAnimation_o *)__this;
                thunk_FUN_01c20e04(pEVar14->m_Items + (int)uVar1,__this);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar9,__this,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    /* try { // try from 0329ffb8 to 0339ffdb has its CatchHandler @ 032a00a0 */
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
      }
    }
  }
LAB_0329fff4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void HEIKABHBFDI(List<ActionAnimation> DLOFGOGAGAA)  [RVA 0x31A0078]
// AnimationData$$HEIKABHBFDI @ RVA 0x31A0078

void AnimationData__HEIKABHBFDI
               (System_Collections_Generic_List_IIMNGGHGKOD__o *DLOFGOGAGAA,MethodInfo *method)

{
  bool bVar1;
  undefined1 auVar2 [16];
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = DLOFGOGAGAA;
                    /* try { // try from 032a0078 to 033a007b has its CatchHandler @ 032a00b4 */
                    /* try { // try from 032a007c to 033a007f has its CatchHandler @ 032a009c */
                    /* try { // try from 032a0080 to 033a0083 has its CatchHandler @ 032a00b4 */
                    /* try { // try from 032a0084 to 033a0087 has its CatchHandler @ 0329fd50 */
                    /* try { // try from 032a0088 to 033a008b has its CatchHandler @ 032a0094 */
                    /* try { // try from 032a008c to 033a00c7 has its CatchHandler @ 0329fd50 */
  if ((DAT_04566ad9 & 1) == 0) {
                    /* catch() { ... } // from try @ 032a0088 with catch @ 032a0094 */
                    /* catch() { ... } // from try @ 0329ff54 with catch @ 032a0098 */
                    /* catch() { ... } // from try @ 032a007c with catch @ 032a009c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_Dispose__);
                    /* catch() { ... } // from try @ 0329ffb8 with catch @ 032a00a0 */
                    /* catch() { ... } // from try @ 0329ff64 with catch @ 032a00a4 */
                    /* catch() { ... } // from try @ 032a0070 with catch @ 032a00a8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_MoveNext__);
                    /* catch() { ... } // from try @ 0329fedc with catch @ 032a00ac */
                    /* catch() { ... } // from try @ 0329fe80 with catch @ 032a00b0 */
                    /* catch() { ... } // from try @ 032a0078 with catch @ 032a00b4
                       catch() { ... } // from try @ 032a0080 with catch @ 032a00b4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_get_Current__);
                    /* catch() { ... } // from try @ 0329ff40 with catch @ 032a00b8 */
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<ActionAnimation>_GetEnumerator__);
                    /* try { // try from 032a00c8 to 033a00cb has its CatchHandler @ 032a00dc */
    DAT_04566ad9 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if (DLOFGOGAGAA != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0) {
                    /* catch() { ... } // from try @ 032a00c8 with catch @ 032a00dc */
                    /* try { // try from 032a00e4 to 033a014b has its CatchHandler @ 032a0160 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)DLOFGOGAGAA,
               Method_System_Collections_Generic_List<ActionAnimation>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<ActionAnimation>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      (*(local_38.fields._current)->klass->vtable[4].methodPtr)
                (local_38.fields._current,(local_38.fields._current)->klass->vtable[4].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public static void OMJCGAIOEHB(List<string> FPEHEJBLCAO, List<InfoAnimation> KENFFDHLNDA)  [RVA 0x31A01C8]
// AnimationData$$OMJCGAIOEHB @ RVA 0x31A01C8

void AnimationData__OMJCGAIOEHB
               (System_Collections_Generic_List_string__o *FPEHEJBLCAO,
               System_Collections_Generic_List_ECENNHNBAME__o *KENFFDHLNDA,MethodInfo *method)

{
  System_String_o *KGLJICLJHEL;
  MethodInfo *method_00;
  int index;
  
  if ((DAT_04566ada & 1) == 0) {
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_04566ada = 1;
  }
  if (FPEHEJBLCAO != (System_Collections_Generic_List_string__o *)0x0) {
    if (0 < (FPEHEJBLCAO->fields)._size) {
      index = 0;
      do {
        method_00 = Method_System_Collections_Generic_List<string>_get_Item__;
        KGLJICLJHEL = (System_String_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)FPEHEJBLCAO,index,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<string>_get_Item__);
        if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(AnimationData_TypeInfo);
        }
        AnimationData__CADFKPKODCI(KGLJICLJHEL,KENFFDHLNDA,method_00);
        index = index + 1;
      } while (index < (FPEHEJBLCAO->fields)._size);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void BKCFPHNEONL()  [RVA 0x31A03E4]
// AnimationData$$BKCFPHNEONL @ RVA 0x31A03E4

void AnimationData__BKCFPHNEONL(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *KHIINLPNKPC;
  System_Collections_Generic_List_KCLPNDAPADO__o *LKHHJJJFHGN;
  System_Collections_Generic_List_ABNLGBHKOCE__o *AIEIIIHLDPO;
  Il2CppObject *value;
  bool bVar1;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  AnimationData_c *method_00;
  AnimationData_StaticFields *pLVar3;
  System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *JAGLGJNPPHA;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566adb & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_TryAdd__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_get_Current__);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    DAT_04566adb = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pLVar3 = AnimationData_TypeInfo->static_fields;
  JAGLGJNPPHA = pLVar3->ICLBNEKDHIO;
  KHIINLPNKPC = pLVar3->KDDGJMCPJNA;
  LKHHJJJFHGN = pLVar3->GLNEIGKMPDC;
  pSVar2 = pLVar3->HDGPEJOPPOB;
  AIEIIIHLDPO = pLVar3->MHKDMKDBMBE;
  if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MovesCompiler__HNIHOIAMDPC(pSVar2,KHIINLPNKPC,JAGLGJNPPHA,LKHHJJJFHGN,AIEIIIHLDPO,(MethodInfo *)0x0)
  ;
  pSVar2 = AnimationData_TypeInfo->static_fields->HDGPEJOPPOB;
  if (pSVar2 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
      value = local_60.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
        method_00 = AnimationData_TypeInfo;
        if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (AnimationData_c *)thunk_FUN_01ba7564();
        }
        AnimationData__PEEPFDGHBCB((MethodInfo *)method_00);
        return;
      }
      if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (value == (Il2CppObject *)0x0) break;
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               AnimationData_TypeInfo->static_fields->EJNINLMPAAO;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_Dictionary<object,_object>__TryAdd
                (__this,value[6].monitor,value,
                 Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_TryAdd__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void MCHEGMJNJKM(Model BCKBBGCOMJD, bool AFBFJKELDIJ)  [RVA 0x31A079C]
// AnimationData$$MCHEGMJNJKM @ RVA 0x31A079C

void AnimationData__MCHEGMJNJKM(Model_o *BCKBBGCOMJD,bool AFBFJKELDIJ,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *item;
  byte bVar4;
  bool bVar5;
  int32_t iVar6;
  ModelParameters_o *pPVar7;
  Fight_o *__this;
  NJPBHDMCLIN_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *pSVar8;
  System_Collections_Generic_List_ABNLGBHKOCE__o *__this_01;
  ulong uVar9;
  Model_o *pOVar10;
  ABNLGBHKOCE_JBMHDDKONHC_o *pAVar11;
  ABNLGBHKOCE_array *pAVar12;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar13;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar14;
  System_Collections_Generic_List_ABNLGBHKOCE__o *__this_02;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar15;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar16;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566adc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_get_Current__);
    FUN_01bab630(&Fight_TypeInfo);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
    FUN_01bab630(&NJPBHDMCLIN_TypeInfo);
    DAT_04566adc = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((BCKBBGCOMJD != (Model_o *)0x0) &&
     (pPVar7 = (BCKBBGCOMJD->fields).FAPMJJBOFEF, pPVar7 != (ModelParameters_o *)0x0)) {
    if (AFBFJKELDIJ) {
      pSVar14 = (pPVar7->fields).INGEFFGPJPB;
    }
    else {
      pSVar14 = ModelParameters__BMDDFABHHCA(pPVar7,(MethodInfo *)0x0);
    }
    pOVar10 = (BCKBBGCOMJD->fields).BPJMMBGIMNC;
    if ((pOVar10 == (Model_o *)0x0) ||
       (pPVar7 = (pOVar10->fields).FAPMJJBOFEF, pPVar7 == (ModelParameters_o *)0x0)) {
      pSVar15 = (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0;
    }
    else if (AFBFJKELDIJ) {
      pSVar15 = (pPVar7->fields).INGEFFGPJPB;
    }
    else {
      pSVar15 = ModelParameters__BMDDFABHHCA(pPVar7,(MethodInfo *)0x0);
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&Fight_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (Fight_TypeInfo->static_fields->IGABFCCGLCO == (Fight_o *)0x0) {
      iVar6 = 0;
    }
    else {
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&Fight_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = Fight_TypeInfo->static_fields->IGABFCCGLCO;
      if (__this == (Fight_o *)0x0) goto LAB_032a0b4c;
      iVar6 = Fight__IHMLDBDLJON(__this,(MethodInfo *)0x0);
    }
    __this_02 = (BCKBBGCOMJD->fields).MEECHCPNHMP;
    if (__this_02 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
      iVar1 = (__this_02->fields)._size;
      (__this_02->fields)._size = 0;
      (__this_02->fields)._version = (__this_02->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(__this_02->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      __this_00 = (NJPBHDMCLIN_o *)thunk_FUN_01bda818(NJPBHDMCLIN_TypeInfo);
      NJPBHDMCLIN___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (NJPBHDMCLIN_o *)0x0) {
        (__this_00->fields).GGIGKNJPODI = BCKBBGCOMJD;
        thunk_FUN_01c20e04(&__this_00->fields,BCKBBGCOMJD);
        pPVar7 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
        if (pPVar7 != (ModelParameters_o *)0x0) {
          pSVar8 = ModelParameters__OIPAIAJGCDA(pPVar7,(MethodInfo *)0x0);
          ppSVar16 = &(__this_00->fields).GFBNJPMOEKD;
          *ppSVar16 = pSVar8;
          thunk_FUN_01c20e04(ppSVar16,pSVar8);
          bVar4 = (*(BCKBBGCOMJD->klass->vtable)._9_EEMIOBINNJG.methodPtr)
                            (BCKBBGCOMJD,(BCKBBGCOMJD->klass->vtable)._9_EEMIOBINNJG.method);
          (__this_00->fields).ANOKHPAKKON = (bool_conflict)(bVar4 & 1);
          pPVar7 = (BCKBBGCOMJD->fields).FAPMJJBOFEF;
          if (pPVar7 != (ModelParameters_o *)0x0) {
            iVar1 = (pPVar7->fields).HLPLAKCBINK;
            ppSVar13 = &(__this_00->fields).OOFILGKHDDI;
            *ppSVar13 = pSVar14;
            (__this_00->fields).HLPLAKCBINK = iVar1;
            thunk_FUN_01c20e04(ppSVar13,pSVar14);
            (__this_00->fields).GIIIBDMEPDK = pSVar15;
            thunk_FUN_01c20e04(&(__this_00->fields).GIIIBDMEPDK,pSVar15);
            (__this_00->fields).COALAGILPBO = iVar6;
            if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_01 = AnimationData_TypeInfo->static_fields->MHKDMKDBMBE;
            if (__this_01 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                         Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
              local_60.fields._index = local_78.fields._index;
              local_60.fields._version = local_78.fields._version;
              local_60.fields._list = local_78.fields._list;
              local_60.fields._current = local_78.fields._current;
              while( true ) {
                bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (&local_60,
                                   Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__
                                  );
                item = local_60.fields._current;
                if (!bVar5) {
                  System_Collections_Generic_List_Enumerator<object>__Dispose
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__
                            );
                  return;
                }
                if ((ABNLGBHKOCE_o *)local_60.fields._current == (ABNLGBHKOCE_o *)0x0) break;
                pAVar11 = ((ABNLGBHKOCE_Fields *)((long)local_60.fields._current + 0x10))->
                          CKNFEFFGHLC;
                if (pAVar11 == (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar9 = (*(((ABNLGBHKOCE_c *)(local_60.fields._current)->klass)->vtable).
                          _4_PCPBHJGAOOH.methodPtr)
                                  (local_60.fields._current,__this_00,(pAVar11->fields).KFLHLLDPBIC,
                                   0,(((ABNLGBHKOCE_c *)(local_60.fields._current)->klass)->vtable).
                                     _4_PCPBHJGAOOH.method);
                lVar3 = Method_System_Collections_Generic_List<ABNLGBHKOCE>_Add__;
                if ((uVar9 & 1) != 0) {
                  pAVar12 = (__this_02->fields)._items;
                  (__this_02->fields)._version = (__this_02->fields)._version + 1;
                  if (pAVar12 == (ABNLGBHKOCE_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  uVar2 = (__this_02->fields)._size;
                  if (uVar2 < (uint)pAVar12->max_length) {
                    (__this_02->fields)._size = uVar2 + 1;
                    pAVar12->m_Items[(int)uVar2] = (ABNLGBHKOCE_o *)item;
                    thunk_FUN_01c20e04(pAVar12->m_Items + (int)uVar2,item);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_02,item,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
        }
      }
    }
  }
LAB_032a0b4c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void JMEMNAFMMKF(List<string> PFDNCKLLMBL, List<InfoAnimation> NKDIGHIIOGN)  [RVA 0x31A0BC8]
// AnimationData$$JMEMNAFMMKF @ RVA 0x31A0BC8

/* WARNING: Removing unreachable block (ram,0x032a0e9c) */

void AnimationData__JMEMNAFMMKF
               (System_Collections_Generic_List_string__o *PFDNCKLLMBL,
               System_Collections_Generic_List_ECENNHNBAME__o *NKDIGHIIOGN,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  Il2CppClass *pIVar5;
  System_String_array *pSVar6;
  System_String_o *value;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566add & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    DAT_04566add = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if (NKDIGHIIOGN == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    NKDIGHIIOGN = AnimationData_TypeInfo->static_fields->HDGPEJOPPOB;
    if (NKDIGHIIOGN == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)NKDIGHIIOGN,
             Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  do {
    do {
      do {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__
                          );
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
          return;
        }
        if ((System_String_o *)local_80.fields._current == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (((System_String_o *)((long)local_80.fields._current + 0x78))->klass ==
            (System_String_c *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar5 = (((System_String_o *)((long)local_80.fields._current + 0x78))->klass->_1).
                 declaringType;
        if (pIVar5 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while (((*(int *)&(pIVar5->_1).name != 1) ||
               (*(int *)((long)&(pIVar5->_1).castClass + 4) != 1)) ||
              (*(int *)((long)&(pIVar5->_1).name + 4) != 4));
      value = (pIVar5->_1).this_arg.data;
      bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    } while (bVar3);
    if (PFDNCKLLMBL == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)PFDNCKLLMBL,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      if (!bVar3) break;
      bVar4 = System_String__op_Equality
                        ((System_String_o *)local_a0.fields._current,value,(MethodInfo *)0x0);
    } while (!bVar4);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (!bVar3) {
      pSVar6 = (PFDNCKLLMBL->fields)._items;
      (PFDNCKLLMBL->fields)._version = (PFDNCKLLMBL->fields)._version + 1;
      if (pSVar6 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = (PFDNCKLLMBL->fields)._size;
      if (uVar1 < (uint)pSVar6->max_length) {
        (PFDNCKLLMBL->fields)._size = uVar1 + 1;
        pSVar6->m_Items[(int)uVar1] = value;
        thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,value);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)PFDNCKLLMBL,(Il2CppObject *)value,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
}


// ===== public static void HCJKEAKOFEP(List<KCLPNDAPADO> LKHHJJJFHGN, List<HOOAAGABMBL> GHAAKPDHIJJ, bool JKOABLAJGMF = False, List<string> GMFNKJMHPKC, List<PerkInfoItem> GJBLBEALOBO, DNKALCKOJKC NCNNIIJIELC = 10)  [RVA 0x31A0F68]
// AnimationData$$HCJKEAKOFEP @ RVA 0x31A0F68

/* WARNING: Removing unreachable block (ram,0x032a11e8) */
/* WARNING: Type propagation algorithm not settling */

void AnimationData__HCJKEAKOFEP
               (System_Collections_Generic_List_KCLPNDAPADO__o *LKHHJJJFHGN,
               System_Collections_Generic_List_HOOAAGABMBL__o *GHAAKPDHIJJ,bool JKOABLAJGMF,
               System_Collections_Generic_List_string__o *GMFNKJMHPKC,
               System_Collections_Generic_List_HEFOANCOHDC__o *GJBLBEALOBO,int32_t NCNNIIJIELC,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this;
  KCLPNDAPADO_array *pKVar4;
  MethodInfo *in_stack_ffffffffffffff40;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566ade & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_get_Current__);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<InfoAnimation>_TypeInfo);
    DAT_04566ade = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  ELAGKBMJCOD = (System_Collections_Generic_List_ECENNHNBAME__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<InfoAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
             Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
  if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  AnimationData__DABMJCDGKOE
            (ELAGKBMJCOD,GHAAKPDHIJJ,JKOABLAJGMF,GMFNKJMHPKC,NCNNIIJIELC,GJBLBEALOBO,
             (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0,0,in_stack_ffffffffffffff40);
  __this = AnimationData_TypeInfo->static_fields->GLNEIGKMPDC;
  if (__this == (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<KCLPNDAPADO>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_MoveNext__);
    item = local_80.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_Dispose__)
      ;
      return;
    }
    if (ELAGKBMJCOD == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
               Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__
                             ), lVar2 = Method_System_Collections_Generic_List<KCLPNDAPADO>_Add__,
          bVar3) {
      if ((InfoAnimation_o *)item == (InfoAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(InfoAnimation_o **)
           &(((InfoAnimation_Fields *)((long)item + 0x10))->EAFPDFHFBOM).fields.hiddenValue ==
          (InfoAnimation_o *)local_a0.fields._current) {
        if (LKHHJJJFHGN == (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pKVar4 = (LKHHJJJFHGN->fields)._items;
        (LKHHJJJFHGN->fields)._version = (LKHHJJJFHGN->fields)._version + 1;
        if (pKVar4 == (KCLPNDAPADO_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (LKHHJJJFHGN->fields)._size;
        if (uVar1 < (uint)pKVar4->max_length) {
          (LKHHJJJFHGN->fields)._size = uVar1 + 1;
          pKVar4->m_Items[(int)uVar1] = (KCLPNDAPADO_o *)item;
          thunk_FUN_01c20e04(pKVar4->m_Items + (int)uVar1,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)LKHHJJJFHGN,item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
  } while( true );
}


// ===== public static List<KCLPNDAPADO> JAAEFCDAMOA()  [RVA 0x31A162C]
// AnimationData$$JAAEFCDAMOA @ RVA 0x31A162C

System_Collections_Generic_List_KCLPNDAPADO__o * AnimationData__JAAEFCDAMOA(MethodInfo *method)

{
                    /* try { // try from 032a162c to 033a162f has its CatchHandler @ 032a1650 */
                    /* try { // try from 032a1630 to 033a1657 has its CatchHandler @ 032a1314 */
  if ((DAT_04566adf & 1) == 0) {
                    /* catch() { ... } // from try @ 032a162c with catch @ 032a1650 */
    FUN_01bab630(&AnimationData_TypeInfo);
                    /* try { // try from 032a1658 to 033a165f has its CatchHandler @ 032a1674 */
    DAT_04566adf = 1;
  }
                    /* try { // try from 032a1660 to 033a166b has its CatchHandler @ 032a1314 */
  if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 032a166c to 033a1673 has its CatchHandler @ 032a1674 */
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032a1658 with catch @ 032a1674
                       catch(type#2 @ 00000000) { ... } // from try @ 032a166c with catch @ 032a1674
                        */
  return AnimationData_TypeInfo->static_fields->GLNEIGKMPDC;
}


// ===== public static TemplateAnimation CCNAGCKPEHD(string KGLJICLJHEL)  [RVA 0x31A1684]
// AnimationData$$CCNAGCKPEHD @ RVA 0x31A1684

TemplateAnimation_o * AnimationData__CCNAGCKPEHD(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  TemplateAnimation_o *pFVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ae0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_get_Item__);
    FUN_01bab630(&AnimationData_TypeInfo);
    DAT_04566ae0 = 1;
    method = extraout_x1;
  }
  if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AnimationData_TypeInfo,method);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           AnimationData_TypeInfo->static_fields->ICLBNEKDHIO;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_ContainsKey__
                      );
    if (!bVar1) {
      return (TemplateAnimation_o *)0x0;
    }
    if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             AnimationData_TypeInfo->static_fields->ICLBNEKDHIO;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pFVar3 = (TemplateAnimation_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                          Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_get_Item__
                         );
      return pFVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void PEEPFDGHBCB()  [RVA 0x31A061C]
// AnimationData$$PEEPFDGHBCB @ RVA 0x31A061C

void AnimationData__PEEPFDGHBCB(MethodInfo *method)

{
  Il2CppObject *NLEBDPHNIDI;
  bool bVar1;
  System_Collections_Generic_List_ECENNHNBAME__o *__this;
  MethodInfo *in_x2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566ae1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_get_Current__);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    DAT_04566ae1 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = AnimationData_TypeInfo->static_fields->HDGPEJOPPOB;
  if (__this != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__
                             ), NLEBDPHNIDI = local_48.fields._current, bVar1) {
      if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      AnimationData__EOEKFLFBGDF
                ((InfoAnimation_o *)NLEBDPHNIDI,AnimationData_TypeInfo->static_fields->HDGPEJOPPOB,in_x2
                );
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void EOEKFLFBGDF(InfoAnimation NLEBDPHNIDI, List<InfoAnimation> ELAGKBMJCOD)  [RVA 0x31A1758]
// AnimationData$$EOEKFLFBGDF @ RVA 0x31A1758

/* WARNING: Removing unreachable block (ram,0x032a1b88) */
/* WARNING: Removing unreachable block (ram,0x032a1acc) */
/* WARNING: Removing unreachable block (ram,0x032a19a4) */
/* WARNING: Removing unreachable block (ram,0x032a1a2c) */

void AnimationData__EOEKFLFBGDF
               (InfoAnimation_o *NLEBDPHNIDI,
               System_Collections_Generic_List_ECENNHNBAME__o *ELAGKBMJCOD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_Collections_Generic_List_GBKCLIFGIFN__o *__this_00;
  System_Collections_Generic_List_GBKCLIFGIFN__o *__this_01;
  KeyData_o *__this_02;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_03;
  InfoAnimation_DNGAEDAAIJE_o *pEVar7;
  InfoAnimation_array *pEVar8;
  KeyData_o *JOIIFEDGBGK;
  System_Collections_Generic_List_Enumerator_T__o local_d8;
  System_Collections_Generic_List_Enumerator_T__o local_c0;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566ae2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionKeys>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionKeys>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ConditionKeys>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionKeys>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionKeys>_get_Count__);
    DAT_04566ae2 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  local_c0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c0.fields._index = 0;
  local_c0.fields._version = 0;
  local_c0.fields._current = (Il2CppObject *)0x0;
  if ((NLEBDPHNIDI != (InfoAnimation_o *)0x0) &&
     (__this_00 = InfoAnimation__NAPDMHMCLML(NLEBDPHNIDI,(MethodInfo *)0x0),
     __this_00 != (System_Collections_Generic_List_GBKCLIFGIFN__o *)0x0)) {
    if (0 < (__this_00->fields)._size) {
      if (ELAGKBMJCOD == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) goto LAB_032a1b90;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_d8,(System_Collections_Generic_List_object__o *)ELAGKBMJCOD,
                 Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
      local_80.fields._index = local_d8.fields._index;
      local_80.fields._version = local_d8.fields._version;
      local_80.fields._list = local_d8.fields._list;
      local_80.fields._current = local_d8.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__
                               ), __this = local_80.fields._current, bVar3) {
        iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (NLEBDPHNIDI->fields).EAFPDFHFBOM.fields,(MethodInfo *)0x0);
        if ((InfoAnimation_o *)__this == (InfoAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (((InfoAnimation_Fields *)((long)__this + 0x10))->EAFPDFHFBOM).fields,
                           (MethodInfo *)0x0);
        if (iVar5 < iVar6) {
          __this_01 = InfoAnimation__NAPDMHMCLML((InfoAnimation_o *)__this,(MethodInfo *)0x0);
          if (__this_01 == (System_Collections_Generic_List_GBKCLIFGIFN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (0 < (__this_01->fields)._size) {
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_d8,(System_Collections_Generic_List_object__o *)__this_00,
                       Method_System_Collections_Generic_List<ConditionKeys>_GetEnumerator__);
            local_a0.fields._index = local_d8.fields._index;
            local_a0.fields._version = local_d8.fields._version;
            local_a0.fields._list = local_d8.fields._list;
                    /* try { // try from 032a1910 to 033a1a43 has its CatchHandler @ 032a1910
                       catch() { ... } // from try @ 032a1910 with catch @ 032a1910
                       catch() { ... } // from try @ 032a1b0c with catch @ 032a1910
                       catch() { ... } // from try @ 032a1ba0 with catch @ 032a1910
                       catch() { ... } // from try @ 032a1ba8 with catch @ 032a1910
                       catch() { ... } // from try @ 032a1c54 with catch @ 032a1910 */
            local_a0.fields._current = local_d8.fields._current;
            do {
              bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (&local_a0,
                                 Method_System_Collections_Generic_List_Enumerator<ConditionKeys>_MoveNext__
                                );
              if (!bVar3) {
                bVar3 = false;
                goto LAB_032a1a08;
              }
              if ((InfoAnimation_o *)local_a0.fields._current == (InfoAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              JOIIFEDGBGK = *(KeyData_o **)
                             &(((InfoAnimation_Fields *)((long)local_a0.fields._current + 0x10))->
                              FECCBIOBKAF).fields.hiddenValue;
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_d8,(System_Collections_Generic_List_object__o *)__this_01,
                         Method_System_Collections_Generic_List<ConditionKeys>_GetEnumerator__);
              local_c0.fields._index = local_d8.fields._index;
              local_c0.fields._version = local_d8.fields._version;
              local_c0.fields._list = local_d8.fields._list;
              local_c0.fields._current = local_d8.fields._current;
              do {
                bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (&local_c0,
                                   Method_System_Collections_Generic_List_Enumerator<ConditionKeys>_MoveNext__
                                  );
                if (!bVar3) break;
                if ((InfoAnimation_o *)local_c0.fields._current == (InfoAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                __this_02 = *(KeyData_o **)
                             &(((InfoAnimation_Fields *)((long)local_c0.fields._current + 0x10))->
                              FECCBIOBKAF).fields.hiddenValue;
                if (__this_02 == (KeyData_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar4 = KeyData__CENALFGNMKJ(__this_02,JOIIFEDGBGK,(MethodInfo *)0x0);
              } while (!bVar4);
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_c0,
                         Method_System_Collections_Generic_List_Enumerator<ConditionKeys>_Dispose__);
            } while (!bVar3);
            bVar3 = true;
LAB_032a1a08:
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_a0,
                       Method_System_Collections_Generic_List_Enumerator<ConditionKeys>_Dispose__);
            lVar2 = Method_System_Collections_Generic_List<InfoAnimation>_Add__;
            if (bVar3) {
              pEVar7 = (NLEBDPHNIDI->fields).ANMFJDOLEKO;
              if (pEVar7 == (InfoAnimation_DNGAEDAAIJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032a1b98 to 033a1b9f has its CatchHandler @ 032a1bb8 */
                FUN_01bab8c8();
              }
              __this_03 = (pEVar7->fields).PCGACGNHJHF;
              if (__this_03 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
                    /* try { // try from 032a1a44 to 033a1a6b has its CatchHandler @ 032a1bc0 */
              pEVar8 = (__this_03->fields)._items;
              (__this_03->fields)._version = (__this_03->fields)._version + 1;
              if (pEVar8 == (InfoAnimation_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar1 = (__this_03->fields)._size;
              if (uVar1 < (uint)pEVar8->max_length) {
                (__this_03->fields)._size = uVar1 + 1;
                pEVar8->m_Items[(int)uVar1] = (InfoAnimation_o *)__this;
                thunk_FUN_01c20e04(pEVar8->m_Items + (int)uVar1,__this);
              }
              else {
                    /* try { // try from 032a1aa0 to 033a1acb has its CatchHandler @ 032a1bbc */
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_03,__this,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__)
      ;
    }
    return;
  }
LAB_032a1b90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int GFHGGEHHOGC()  [RVA 0x31A1C58]
// AnimationData$$GFHGGEHHOGC @ RVA 0x31A1C58

int32_t AnimationData__GFHGGEHHOGC(MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar1;
  
                    /* try { // try from 032a1c60 to 033a1c67 has its CatchHandler @ 032a1c68 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032a1bec with catch @ 032a1c68
                       catch(type#2 @ 00000000) { ... } // from try @ 032a1c60 with catch @ 032a1c68
                        */
  if ((DAT_04566ae3 & 1) == 0) {
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_get_Count__);
    DAT_04566ae3 = 1;
  }
  if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = AnimationData_TypeInfo->static_fields->HDGPEJOPPOB;
  if (pSVar1 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x31A1CC8]
// AnimationData$$.cctor @ RVA 0x31A1CC8

void AnimationData___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__ECENNHNBAME__o **ppSVar2;
  System_Collections_Generic_List_ECENNHNBAME__o *__this;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar3;
  System_Collections_Generic_List_ABNLGBHKOCE__o *__this_00;
  System_Collections_Generic_List_ABNLGBHKOCE__o **ppSVar4;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_HashSet_string__o **ppSVar5;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_02;
  System_Collections_Generic_List_KCLPNDAPADO__o **ppSVar6;
  
  if ((DAT_04566ae4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ABNLGBHKOCE>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<KCLPNDAPADO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<InfoAnimation>_TypeInfo);
    DAT_04566ae4 = 1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>__ctor__);
  AnimationData_TypeInfo->static_fields->ICLBNEKDHIO =
       (System_Collections_Generic_Dictionary_string__FCFGGKLDBFJ__o *)pSVar1;
  thunk_FUN_01c20e04(AnimationData_TypeInfo->static_fields,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>__ctor__);
  ppSVar2 = &AnimationData_TypeInfo->static_fields->EJNINLMPAAO;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__ECENNHNBAME__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this = (System_Collections_Generic_List_ECENNHNBAME__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<InfoAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<InfoAnimation>__ctor__);
  ppSVar3 = &AnimationData_TypeInfo->static_fields->HDGPEJOPPOB;
  *ppSVar3 = __this;
  thunk_FUN_01c20e04(ppSVar3,__this);
  __this_00 = (System_Collections_Generic_List_ABNLGBHKOCE__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ABNLGBHKOCE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ABNLGBHKOCE>__ctor__);
  ppSVar4 = &AnimationData_TypeInfo->static_fields->MHKDMKDBMBE;
  *ppSVar4 = __this_00;
  thunk_FUN_01c20e04(ppSVar4,__this_00);
  __this_01 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_01,Method_System_Collections_Generic_HashSet<string>__ctor__);
  ppSVar5 = &AnimationData_TypeInfo->static_fields->KDDGJMCPJNA;
  *ppSVar5 = (System_Collections_Generic_HashSet_string__o *)__this_01;
  thunk_FUN_01c20e04(ppSVar5,__this_01);
  __this_02 = (System_Collections_Generic_List_KCLPNDAPADO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KCLPNDAPADO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<KCLPNDAPADO>__ctor__);
  ppSVar6 = &AnimationData_TypeInfo->static_fields->GLNEIGKMPDC;
  *ppSVar6 = __this_02;
  thunk_FUN_01c20e04(ppSVar6,__this_02);
  return;
}


// ===== public static InfoAnimation PBHNEKEPDEL(HOOAAGABMBL IFDOANCFKJD)  [RVA 0x31A1F08]
// AnimationData$$PBHNEKEPDEL @ RVA 0x31A1F08

InfoAnimation_o * AnimationData__PBHNEKEPDEL(HOOAAGABMBL_o *IFDOANCFKJD,MethodInfo *method)

{
  Il2CppObject *item;
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_ECENNHNBAME__o *__this;
  InfoAnimation_o *pEVar3;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_String_o *value;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566ae5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_get_Current__);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&StringLiteral_12339/*"StanceIdle"*/);
    FUN_01bab630(&StringLiteral_12338/*"Stance"*/);
    DAT_04566ae5 = 1;
    method = extraout_x1;
  }
  item = StringLiteral_12338/*"Stance"*/;
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (IFDOANCFKJD == (HOOAAGABMBL_o *)0x0) {
LAB_032a20b4:
    if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar3 = AnimationData__CCBEONOLBID(StringLiteral_12339/*"StanceIdle"*/,true,in_x2);
  }
  else {
    value = (IFDOANCFKJD->fields)._COIPKAKHDFP_k__BackingField;
    if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AnimationData_TypeInfo,method);
    }
    __this = AnimationData_TypeInfo->static_fields->HDGPEJOPPOB;
    if (__this == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
LAB_032a201c:
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
      pEVar3 = (InfoAnimation_o *)local_70.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
        goto LAB_032a20b4;
      }
      if ((InfoAnimation_o *)local_70.fields._current == (InfoAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = ((InfoAnimation_Fields *)((long)local_70.fields._current + 0x10))->GMNNFJNKIAN;
      if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00 = ((InfoAnimation_Fields *)((long)local_70.fields._current + 0x10))->
                  _AHFPJJKEANI_k__BackingField;
      if ((__this_01->fields)._size == 0) {
        bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (!bVar1) {
          if ((__this_01->fields)._size != 0) goto LAB_032a2048;
          goto LAB_032a201c;
        }
      }
      else {
LAB_032a2048:
        in_x2 = Method_System_Collections_Generic_List<string>_IndexOf__;
        iVar2 = System_Collections_Generic_List<object>__IndexOf
                          ((System_Collections_Generic_List_object__o *)__this_01,
                           (Il2CppObject *)value,
                           (MethodInfo_26E5A4C *)
                           Method_System_Collections_Generic_List<string>_IndexOf__);
        if (iVar2 == -1) goto LAB_032a201c;
      }
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      in_x2 = Method_System_Collections_Generic_List<string>_IndexOf__;
      iVar2 = System_Collections_Generic_List<object>__IndexOf
                        ((System_Collections_Generic_List_object__o *)__this_00,item,
                         (MethodInfo_26E5A4C *)
                         Method_System_Collections_Generic_List<string>_IndexOf__);
    } while (iVar2 == -1);
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
  }
  return pEVar3;
}


// ===== public static void CADFKPKODCI(string KGLJICLJHEL, List<InfoAnimation> KENFFDHLNDA)  [RVA 0x31A0298]
// AnimationData$$CADFKPKODCI @ RVA 0x31A0298

void AnimationData__CADFKPKODCI
               (System_String_o *KGLJICLJHEL,
               System_Collections_Generic_List_ECENNHNBAME__o *KENFFDHLNDA,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Il2CppObject *pIVar4;
  
  if ((DAT_04566ae6 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<InfoAnimation>__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_get_Item__);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_get_Count__);
    DAT_04566ae6 = 1;
  }
  if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           AnimationData_TypeInfo->static_fields->ICLBNEKDHIO;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_ContainsKey__
                      );
    if (!bVar2) {
      return;
    }
    if (KENFFDHLNDA != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
      iVar1 = (KENFFDHLNDA->fields)._size;
      if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               AnimationData_TypeInfo->static_fields->ICLBNEKDHIO;
      if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                              Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_get_Item__
                             ), pIVar4 != (Il2CppObject *)0x0)) {
        if (iVar1 != 0) {
          DJNBJHPDKDP__OFNFOGHFDML<object>
                    ((System_Collections_Generic_List_T__o *)KENFFDHLNDA,pIVar4[1].monitor,
                     Method_DJNBJHPDKDP_OFNFOGHFDML<InfoAnimation>__);
          return;
        }
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)KENFFDHLNDA,
                   (System_Collections_Generic_IEnumerable_T__o *)pIVar4[1].monitor,
                   Method_System_Collections_Generic_List<InfoAnimation>_AddRange__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void DABMJCDGKOE(List<InfoAnimation> ELAGKBMJCOD, List<HOOAAGABMBL> GHAAKPDHIJJ, bool JKOABLAJGMF = False, List<string> GMFNKJMHPKC, DNKALCKOJKC NCNNIIJIELC = 10, List<PerkInfoItem> KKDACKFFHOH, List<PerkInfoItem> KKNJIIJGIPH, COALAGILPBO ECBKFDPPPOB = 0)  [RVA 0x31A130C]
// AnimationData$$DABMJCDGKOE @ RVA 0x31A130C

void AnimationData__DABMJCDGKOE
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
  InfoAnimation_HJPFANEPGJF_o *pEVar5;
  InfoAnimation_array *pEVar6;
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
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_get_Current__);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ConditionAnimation>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ConditionAnimation>_TypeInfo);
    FUN_01bab630(&NJPBHDMCLIN_TypeInfo);
    DAT_04566ae7 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ConditionAnimation>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<ConditionAnimation>__ctor__);
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
    if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = AnimationData_TypeInfo->static_fields->HDGPEJOPPOB;
    if (__this_02 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_02,
                 Method_System_Collections_Generic_List<InfoAnimation>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_MoveNext__
                            );
          __this = local_80.fields._current;
          if (!bVar3) {
                    /* try { // try from 032a1578 to 033a159b has its CatchHandler @ 032a160c */
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<InfoAnimation>_Dispose__);
            return;
          }
          if ((InfoAnimation_o *)local_80.fields._current == (InfoAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032a159c to 033a15fb has its CatchHandler @ 032a1314 */
            FUN_01bab8c8();
          }
          pEVar5 = ((InfoAnimation_Fields *)((long)local_80.fields._current + 0x10))->DMGLMCBIAGL;
          if (pEVar5 == (InfoAnimation_HJPFANEPGJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar3 = InfoAnimation__PCPBHJGAOOH
                            ((InfoAnimation_o *)local_80.fields._current,__this_01,
                             (pEVar5->fields).KFLHLLDPBIC,(EventAnimation_o *)0x0,(MethodInfo *)0x0);
        } while ((!bVar3) ||
                ((GMFNKJMHPKC != (System_Collections_Generic_List_string__o *)0x0 &&
                 (bVar3 = InfoAnimation__FINLPLHJDHN
                                    ((InfoAnimation_o *)__this,GMFNKJMHPKC,(MethodInfo *)0x0), bVar3))
                ));
        lVar2 = Method_System_Collections_Generic_List<InfoAnimation>_Add__;
        if (ELAGKBMJCOD == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pEVar6 = (ELAGKBMJCOD->fields)._items;
        (ELAGKBMJCOD->fields)._version = (ELAGKBMJCOD->fields)._version + 1;
                    /* try { // try from 032a1524 to 033a152b has its CatchHandler @ 032a1610 */
        if (pEVar6 == (InfoAnimation_array *)0x0) break;
        uVar1 = (ELAGKBMJCOD->fields)._size;
                    /* try { // try from 032a1534 to 033a153b has its CatchHandler @ 032a1608 */
        if (uVar1 < (uint)pEVar6->max_length) {
          (ELAGKBMJCOD->fields)._size = uVar1 + 1;
          pEVar6->m_Items[(int)uVar1] = (InfoAnimation_o *)__this;
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


// ===== public static InfoAnimation CCBEONOLBID(string KGLJICLJHEL, bool KBOHMEMAGIB = True)  [RVA 0x31A21B0]
// AnimationData$$CCBEONOLBID @ RVA 0x31A21B0

InfoAnimation_o *
AnimationData__CCBEONOLBID(System_String_o *KGLJICLJHEL,bool KBOHMEMAGIB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_String_o *message;
  InfoAnimation_o *local_28;
  
  if ((DAT_04566ae8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_TryGetValue__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&StringLiteral_492/*" not found"*/);
    FUN_01bab630(&StringLiteral_2969/*"Animation "*/);
    DAT_04566ae8 = 1;
  }
  local_28 = (InfoAnimation_o *)0x0;
  if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           AnimationData_TypeInfo->static_fields->EJNINLMPAAO;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_TryGetValue__
                      );
    if (!bVar1) {
      if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)
                  AnimationData_TypeInfo->static_fields->KDDGJMCPJNA;
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_032a2310;
      bVar1 = System_Collections_Generic_HashSet<object>__Contains
                        (__this_00,(Il2CppObject *)KGLJICLJHEL,
                         Method_System_Collections_Generic_HashSet<string>_Contains__);
      if (!bVar1) {
        message = System_String__Concat
                            (StringLiteral_2969/*"Animation "*/,KGLJICLJHEL,StringLiteral_492/*" not found"*/,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        if (KBOHMEMAGIB) {
          UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
        }
        else {
          UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
        }
      }
    }
    return local_28;
  }
LAB_032a2310:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void RandomizeObscuredVars()  [RVA 0x31A2314]
// AnimationData$$RandomizeObscuredVars @ RVA 0x31A2314

void AnimationData__RandomizeObscuredVars(MethodInfo *method)

{
  System_Action_ECENNHNBAME__o **ppSVar1;
  System_Action_ABNLGBHKOCE__o **ppSVar2;
  System_Collections_Generic_List_ECENNHNBAME__o *__this;
  System_Collections_Generic_List_ABNLGBHKOCE__o *__this_00;
  System_Action_ECENNHNBAME__o *action;
  System_Action_ABNLGBHKOCE__o *action_00;
  
  if ((DAT_04566ae9 & 1) == 0) {
    FUN_01bab630(&System_Action<ABNLGBHKOCE>_TypeInfo);
    FUN_01bab630(&System_Action<InfoAnimation>_TypeInfo);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_ForEach__);
    FUN_01bab630(&Method_LDHBHPILNMA_<>c_CEOPGMFFAAE__);
    FUN_01bab630(&Method_LDHBHPILNMA_<>c_MILKNFHIGIM__);
    FUN_01bab630(&AnimationData_<>c_TypeInfo);
    DAT_04566ae9 = 1;
  }
  if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AnimationData_TypeInfo);
  }
  __this = AnimationData_TypeInfo->static_fields->HDGPEJOPPOB;
  if ((AnimationData_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  action = AnimationData_<>c_TypeInfo->static_fields->__9__24_0;
  if (action == (System_Action_ECENNHNBAME__o *)0x0) {
    if ((AnimationData_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = (System_Action_ECENNHNBAME__o *)thunk_FUN_01bda818(System_Action<InfoAnimation>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &AnimationData_<>c_TypeInfo->static_fields->__9__24_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<InfoAnimation>_ForEach__);
    if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AnimationData_TypeInfo);
    }
    __this_00 = AnimationData_TypeInfo->static_fields->MHKDMKDBMBE;
    if ((AnimationData_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_00 = AnimationData_<>c_TypeInfo->static_fields->__9__24_1;
    if (action_00 == (System_Action_ABNLGBHKOCE__o *)0x0) {
      if ((AnimationData_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action_00 = (System_Action_ABNLGBHKOCE__o *)
                  thunk_FUN_01bda818(System_Action<ABNLGBHKOCE>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &AnimationData_<>c_TypeInfo->static_fields->__9__24_1;
      *ppSVar2 = action_00;
      thunk_FUN_01c20e04(ppSVar2,action_00);
    }
    if (__this_00 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Action_T__o *)action_00,
                 Method_System_Collections_Generic_List<ABNLGBHKOCE>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void EIPFMFENGKA()  [RVA 0x31A251C]
// AnimationData$$EIPFMFENGKA @ RVA 0x31A251C

void AnimationData__EIPFMFENGKA(MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  AnimationData_StaticFields *pLVar2;
  AnimationData_c *pLVar3;
  System_Collections_Generic_List_ABNLGBHKOCE__o *pSVar4;
  System_Collections_Generic_List_ECENNHNBAME__o *pSVar5;
  System_Collections_Generic_List_KCLPNDAPADO__o *pSVar6;
  
  if ((DAT_04566aea & 1) == 0) {
    FUN_01bab630(&MovesCompiler_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Clear__);
    FUN_01bab630(&InfoAnimation_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Clear__);
    FUN_01bab630(&AnimationData_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InfoAnimation>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_Clear__);
    DAT_04566aea = 1;
  }
  if ((AnimationData_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pLVar2 = AnimationData_TypeInfo->static_fields;
  pSVar5 = pLVar2->HDGPEJOPPOB;
  if (pSVar5 != (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
    iVar1 = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar1,(MethodInfo *)0x0);
      pLVar2 = AnimationData_TypeInfo->static_fields;
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)pLVar2->EJNINLMPAAO !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                ((System_Collections_Generic_Dictionary_object__object__o *)pLVar2->EJNINLMPAAO,
                 Method_System_Collections_Generic_Dictionary<string,_ECENNHNBAME>_Clear__);
      __this = (System_Collections_Generic_HashSet_object__o *)
               AnimationData_TypeInfo->static_fields->KDDGJMCPJNA;
      if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Clear
                  (__this,Method_System_Collections_Generic_HashSet<string>_Clear__);
        if ((InfoAnimation_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        InfoAnimation__OOAOCGENEPI((MethodInfo *)0x0);
        pLVar3 = AnimationData_TypeInfo;
        pSVar6 = AnimationData_TypeInfo->static_fields->GLNEIGKMPDC;
        if (pSVar6 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
          iVar1 = (pSVar6->fields)._size;
          (pSVar6->fields)._size = 0;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
            pLVar3 = AnimationData_TypeInfo;
          }
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      pLVar3->static_fields->ICLBNEKDHIO;
          if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object,_object>__Clear
                      (__this_00,
                       Method_System_Collections_Generic_Dictionary<string,_FCFGGKLDBFJ>_Clear__);
            pSVar4 = AnimationData_TypeInfo->static_fields->MHKDMKDBMBE;
            if (pSVar4 != (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
              iVar1 = (pSVar4->fields)._size;
              (pSVar4->fields)._size = 0;
              (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
              if (0 < iVar1) {
                System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar1,
                                    (MethodInfo *)0x0);
              }
              if ((MovesCompiler_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              MovesCompiler__JODGPLBHHIA((MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

