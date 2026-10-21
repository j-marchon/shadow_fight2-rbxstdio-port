// TypeDefIndex 2333
// Namespace: 
// public class FIBPEPMPJDI : ILGLOCBJFEG
// Fields:
//   private FIBPEPMPJDI.MJJKGFMEOAN OEMKHNGBKDA; // 0x38
//   private List<ILGLOCBJFEG> KPFGHBEKJIM; // 0x40

// ===== public override void RandomizeObscuredVars()  [RVA 0x331FD68]
// FIBPEPMPJDI$$RandomizeObscuredVars @ RVA 0x331FD68

void FIBPEPMPJDI__RandomizeObscuredVars(FIBPEPMPJDI_o *__this,MethodInfo *method)

{
  System_Action_ILGLOCBJFEG__o **ppSVar1;
  System_Collections_Generic_List_ILGLOCBJFEG__o *__this_00;
  System_Action_ILGLOCBJFEG__o *action;
  
                    /* try { // try from 0341fd7c to 0351fd83 has its CatchHandler @ 0341fde8 */
  if ((DAT_0456783f & 1) == 0) {
                    /* try { // try from 0341fd90 to 0351fd9b has its CatchHandler @ 0341fde0 */
    FUN_01bab630(&System_Action<ILGLOCBJFEG>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ILGLOCBJFEG>_ForEach__);
    FUN_01bab630(&Method_FIBPEPMPJDI_<>c_NBNIOBMFCOB__);
    FUN_01bab630(&FIBPEPMPJDI_<>c_TypeInfo);
                    /* try { // try from 0341fdbc to 0351fdc3 has its CatchHandler @ 0341fe8c */
    DAT_0456783f = 1;
  }
  ILGLOCBJFEG__RandomizeObscuredVars((ILGLOCBJFEG_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).KPFGHBEKJIM;
                    /* try { // try from 0341fdd8 to 0351fddb has its CatchHandler @ 0341fde4 */
                    /* try { // try from 0341fddc to 0351fdf7 has its CatchHandler @ 0341fc90 */
  if ((FIBPEPMPJDI_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0341fd90 with catch @ 0341fde0 */
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 0341fdd8 with catch @ 0341fde4 */
  }
                    /* catch() { ... } // from try @ 0341fd7c with catch @ 0341fde8 */
  action = FIBPEPMPJDI_<>c_TypeInfo->static_fields->__9__6_0;
  if (action == (System_Action_ILGLOCBJFEG__o *)0x0) {
                    /* try { // try from 0341fdf8 to 0351fdfb has its CatchHandler @ 0341fe74 */
    if ((FIBPEPMPJDI_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0341fdfc to 0351fe47 has its CatchHandler @ 0341fc90 */
      thunk_FUN_01ba7564();
    }
    action = (System_Action_ILGLOCBJFEG__o *)thunk_FUN_01bda818(System_Action<ILGLOCBJFEG>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &FIBPEPMPJDI_<>c_TypeInfo->static_fields->__9__6_0;
    *ppSVar1 = action;
                    /* try { // try from 0341fe48 to 0351fe63 has its CatchHandler @ 0341fef4 */
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_ILGLOCBJFEG__o *)0x0) {
                    /* try { // try from 0341fe64 to 0351fe67 has its CatchHandler @ 0341fe88 */
                    /* try { // try from 0341fe68 to 0351fe6f has its CatchHandler @ 0341fe80 */
                    /* try { // try from 0341fe70 to 0351fe9f has its CatchHandler @ 0341fc90 */
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<ILGLOCBJFEG>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0341fdf8 with catch @ 0341fe74 */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x331FE78]
// FIBPEPMPJDI$$.ctor @ RVA 0x331FE78

void FIBPEPMPJDI___ctor(FIBPEPMPJDI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ILGLOCBJFEG__o *__this_00;
  System_Collections_Generic_List_ILGLOCBJFEG__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 0341fe68 with catch @ 0341fe80 */
                    /* catch() { ... } // from try @ 0341fd60 with catch @ 0341fe84 */
                    /* catch() { ... } // from try @ 0341fe64 with catch @ 0341fe88 */
                    /* catch() { ... } // from try @ 0341fdbc with catch @ 0341fe8c */
                    /* catch() { ... } // from try @ 0341fd44 with catch @ 0341fe90 */
                    /* try { // try from 0341fea0 to 0351fea3 has its CatchHandler @ 0341fed0 */
  if ((DAT_04567840 & 1) == 0) {
                    /* try { // try from 0341fea4 to 0351fed7 has its CatchHandler @ 0341fc90 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ILGLOCBJFEG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ILGLOCBJFEG>_TypeInfo);
    DAT_04567840 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ILGLOCBJFEG__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ILGLOCBJFEG>_TypeInfo,method);
                    /* catch() { ... } // from try @ 0341fea0 with catch @ 0341fed0 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ILGLOCBJFEG>__ctor__);
  ppSVar1 = &(__this->fields).KPFGHBEKJIM;
                    /* try { // try from 0341fed8 to 0351fedf has its CatchHandler @ 0341fef4 */
  *ppSVar1 = __this_00;
                    /* try { // try from 0341fee0 to 0351feeb has its CatchHandler @ 0341fc90 */
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 0341feec to 0351fef3 has its CatchHandler @ 0341fef4 */
  ILGLOCBJFEG___ctor((ILGLOCBJFEG_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0341fe48 with catch @ 0341fef4
                       catch() { ... } // from try @ 0341fed8 with catch @ 0341fef4
                       catch() { ... } // from try @ 0341feec with catch @ 0341fef4 */
                    /* try { // try from 0341fef8 to 0352008f has its CatchHandler @ 0341fef8
                       catch() { ... } // from try @ 0341fef8 with catch @ 0341fef8
                       catch() { ... } // from try @ 03420140 with catch @ 0341fef8
                       catch() { ... } // from try @ 0342019c with catch @ 0341fef8
                       catch() { ... } // from try @ 034201d4 with catch @ 0341fef8
                       catch() { ... } // from try @ 0342021c with catch @ 0341fef8 */
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,0xe,(MethodInfo *)0x0);
  return;
}


// ===== public override bool EPBENPDCBFE(Model BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x331FF10]
// FIBPEPMPJDI$$EPBENPDCBFE @ RVA 0x331FF10

bool FIBPEPMPJDI__EPBENPDCBFE
               (FIBPEPMPJDI_o *__this,Model_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  System_Collections_Generic_List_ILGLOCBJFEG__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567841 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ILGLOCBJFEG>_GetEnumerator__);
    DAT_04567841 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (Model_o *)0x0) {
    bVar3 = 0;
  }
  else {
    __this_00 = (__this->fields).KPFGHBEKJIM;
    if (__this_00 == (System_Collections_Generic_List_ILGLOCBJFEG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<ILGLOCBJFEG>_GetEnumerator__);
    do {
      bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_MoveNext__);
      pIVar2 = local_48.fields._current;
      if (!bVar4) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_Dispose__);
        bVar3 = (__this->fields).OEMKHNGBKDA != 1;
        goto LAB_03420054;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar5 = (*(local_48.fields._current)->klass->vtable[6].methodPtr)
                        (local_48.fields._current,BCKBBGCOMJD,FPEHEJBLCAO,
                         (local_48.fields._current)->klass->vtable[6].method);
      iVar1 = (__this->fields).OEMKHNGBKDA;
      bVar5 = bVar5 ^ *(char *)&pIVar2[1].klass != '\0';
      bVar3 = iVar1 != 2 | bVar5;
    } while (((iVar1 == 1 & bVar5) == 0) && (iVar1 != 2 || (bVar5 & 1) != 0));
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<ILGLOCBJFEG>_Dispose__);
  }
LAB_03420054:
  return (bool)(bVar3 & 1);
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x33200F0]
// FIBPEPMPJDI$$HNIHOIAMDPC @ RVA 0x33200F0

void FIBPEPMPJDI__HNIHOIAMDPC
               (FIBPEPMPJDI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *__this_01;
  System_Collections_Generic_List_ILGLOCBJFEG__o *pSVar2;
  int32_t iVar3;
  System_Collections_Generic_List_ILGLOCBJFEG__o **ppSVar4;
  
                    /* try { // try from 03420108 to 0352011f has its CatchHandler @ 034201a0 */
  if ((DAT_04567842 & 1) == 0) {
    FUN_01bab630(&StringLiteral_2948/*"And"*/);
    FUN_01bab630(&StringLiteral_9975/*"Or"*/);
                    /* try { // try from 03420124 to 0352012f has its CatchHandler @ 0342019c */
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
                    /* try { // try from 03420134 to 0352013f has its CatchHandler @ 034201a4 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 03420140 to 03520193 has its CatchHandler @ 0341fef8 */
    DAT_04567842 = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  (__this->fields).OEMKHNGBKDA = 0;
  if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
LAB_03420210:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00 = (System_Xml_XmlAttributeCollection_o *)
              (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                        (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03420210;
  LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                          (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
                    /* try { // try from 03420194 to 03520197 has its CatchHandler @ 034201ac */
                    /* try { // try from 03420198 to 0352019b has its CatchHandler @ 034201a8 */
  __this_01 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03420124 with catch @ 0342019c
                       try { // try from 0342019c to 035201cf has its CatchHandler @ 0341fef8 */
  if (__this_01 == (System_String_o *)0x0) goto LAB_03420210;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03420108 with catch @ 034201a0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03420134 with catch @ 034201a4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03420198 with catch @ 034201a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03420194 with catch @ 034201ac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034200e4 with catch @ 034201b0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034200d4 with catch @ 034201b4
                        */
  bVar1 = System_String__Equals(__this_01,StringLiteral_9975/*"Or"*/,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03420090 with catch @ 034201b8
                        */
  if (bVar1) {
    iVar3 = 1;
  }
  else {
                    /* try { // try from 034201d0 to 035201d3 has its CatchHandler @ 03420204 */
                    /* try { // try from 034201d4 to 03520213 has its CatchHandler @ 0341fef8 */
    bVar1 = System_String__Equals(__this_01,StringLiteral_2948/*"And"*/,(MethodInfo *)0x0);
    if (!bVar1) goto LAB_034201e8;
    iVar3 = 2;
  }
  (__this->fields).OEMKHNGBKDA = iVar3;
LAB_034201e8:
  pSVar2 = ILGLOCBJFEG__EOHMFJFFFIN
                     (AHDGNOJPPIB,(__this->fields).super.super._MEFGNAIILBJ_k__BackingField,
                      (MethodInfo *)0x0);
  ppSVar4 = &(__this->fields).KPFGHBEKJIM;
  *ppSVar4 = pSVar2;
                    /* catch() { ... } // from try @ 034201d0 with catch @ 03420204 */
  thunk_FUN_01c20e04(ppSVar4,pSVar2);
  return;
}

