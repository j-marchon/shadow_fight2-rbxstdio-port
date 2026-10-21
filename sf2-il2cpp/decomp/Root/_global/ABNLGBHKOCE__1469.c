// TypeDefIndex 1469
// Namespace: 
// public class ABNLGBHKOCE
// Fields:
//   public ABNLGBHKOCE.JBMHDDKONHC CKNFEFFGHLC; // 0x10
//   public string JIJLBFGKNJK; // 0x18
//   public bool DMNOONNKPKP; // 0x20

// ===== public virtual bool PCPBHJGAOOH(NJPBHDMCLIN AHEFOIOKDOK, List<IENLNOEDCFF> PBCGCHIKCOE, KJFPGDFNFCL FKDOMEBPFPF)  [RVA 0x3192638]
// ABNLGBHKOCE$$PCPBHJGAOOH @ RVA 0x3192638

bool ABNLGBHKOCE__PCPBHJGAOOH
               (ABNLGBHKOCE_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,
               System_Collections_Generic_List_IENLNOEDCFF__o *PBCGCHIKCOE,
               KJFPGDFNFCL_o *FKDOMEBPFPF,MethodInfo *method)

{
  bool bVar1;
  KJFPGDFNFCL_o **ppKVar2;
  ulong uVar3;
  ABNLGBHKOCE_JBMHDDKONHC_o *pAVar4;
  int iVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566a4a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    DAT_04566a4a = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (PBCGCHIKCOE == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    pAVar4 = (__this->fields).CKNFEFFGHLC;
    if (pAVar4 == (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) goto LAB_03292774;
    PBCGCHIKCOE = (pAVar4->fields).KPFGHBEKJIM;
  }
  if (FKDOMEBPFPF != (KJFPGDFNFCL_o *)0x0) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_03292774;
    ppKVar2 = &(AHEFOIOKDOK->fields).FKBLDBLGMIH;
    *ppKVar2 = FKDOMEBPFPF;
    thunk_FUN_01c20e04(ppKVar2,FKDOMEBPFPF);
    (FKDOMEBPFPF->fields).KPFGHBEKJIM = AHEFOIOKDOK;
    thunk_FUN_01c20e04(&FKDOMEBPFPF->fields,AHEFOIOKDOK);
  }
  if (PBCGCHIKCOE != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)PBCGCHIKCOE,
               Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
      if (!bVar1) {
        iVar5 = 8;
        goto LAB_03292748;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar3 = (*(local_48.fields._current)->klass->vtable[4].methodPtr)
                        (local_48.fields._current,AHEFOIOKDOK,
                         (local_48.fields._current)->klass->vtable[4].method);
    } while ((uVar3 & 1) != 0);
    iVar5 = 7;
LAB_03292748:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    return iVar5 != 7;
  }
LAB_03292774:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RandomizeObscuredVars()  [RVA 0x31927EC]
// ABNLGBHKOCE$$RandomizeObscuredVars @ RVA 0x31927EC

void ABNLGBHKOCE__RandomizeObscuredVars(ABNLGBHKOCE_o *__this,MethodInfo *method)

{
  ABNLGBHKOCE_JBMHDDKONHC_o *__this_00;
  
  __this_00 = (__this->fields).CKNFEFFGHLC;
  if (__this_00 != (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) {
    ABNLGBHKOCE_JBMHDDKONHC__RandomizeObscuredVars(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected static GBKCLIFGIFN CNBIDPCPDJN(List<IENLNOEDCFF> AHEFOIOKDOK)  [RVA 0x3192B24]
// ABNLGBHKOCE$$CNBIDPCPDJN @ RVA 0x3192B24

GBKCLIFGIFN_o *
ABNLGBHKOCE__CNBIDPCPDJN
          (System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *PFDEAPMMFAP;
  bool bVar2;
  int32_t iVar3;
  GBKCLIFGIFN_o *pGVar4;
  MethodInfo *method_00;
  undefined1 auVar5 [16];
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = AHEFOIOKDOK;
                    /* try { // try from 03292b28 to 03392b2f has its CatchHandler @ 03292c98 */
                    /* try { // try from 03292b34 to 03392b3b has its CatchHandler @ 03292c90 */
                    /* try { // try from 03292b44 to 03392b4f has its CatchHandler @ 03292c94 */
  if ((DAT_04566a4b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03292b54 to 03392b5f has its CatchHandler @ 03292c8c */
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
                    /* try { // try from 03292b98 to 03392bbb has its CatchHandler @ 03292c84 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    auVar5 = FUN_01bab630(&StringLiteral_17320/*"conditionList is null"*/);
    DAT_04566a4b = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar5._0_8_,auVar5._8_8_);
  }
                    /* try { // try from 03292bbc to 03392c57 has its CatchHandler @ 03292944 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)AHEFOIOKDOK,
             Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
LAB_03292c14:
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    PFDEAPMMFAP = local_60.fields._current;
    if (!bVar2) {
      pGVar4 = (GBKCLIFGIFN_o *)0x0;
      goto LAB_03292cc4;
    }
    if ((IENLNOEDCFF_o *)local_60.fields._current == (IENLNOEDCFF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)local_60.fields._current,(MethodInfo *)0x0);
    if (iVar3 == 8) {
      bVar1 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03292c58 to 03392c5f has its CatchHandler @ 03292ca8 */
                    /* try { // try from 03292c60 to 03392c63 has its CatchHandler @ 03292c9c */
                    /* try { // try from 03292c64 to 03392c67 has its CatchHandler @ 03292c88 */
                    /* try { // try from 03292c68 to 03392c6b has its CatchHandler @ 03292c80 */
      if (((((IENLNOEDCFF_c *)PFDEAPMMFAP->klass)->_2).naturalAligment < bVar1) ||
         ((((IENLNOEDCFF_c *)PFDEAPMMFAP->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
                    /* try { // try from 03292c6c to 03392c6f has its CatchHandler @ 03292944 */
                    /* try { // try from 03292c70 to 03392c73 has its CatchHandler @ 03292c7c */
                    /* try { // try from 03292c74 to 03392cb7 has its CatchHandler @ 03292944 */
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 03292c70 with catch @ 03292c7c */
                    /* catch() { ... } // from try @ 03292c68 with catch @ 03292c80 */
                    /* catch() { ... } // from try @ 03292b98 with catch @ 03292c84 */
        UnityEngine_Debug__LogError(StringLiteral_17320/*"conditionList is null"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03292c64 with catch @ 03292c88 */
        goto LAB_03292c14;
      }
                    /* try { // try from 03292cb8 to 03392cbb has its CatchHandler @ 03292ccc */
      pGVar4 = ABNLGBHKOCE__CNBIDPCPDJN
                         (((IENLNOEDCFF_o *)((long)PFDEAPMMFAP + 0x28))->monitor,method_00);
    }
    else {
                    /* catch() { ... } // from try @ 03292b54 with catch @ 03292c8c */
                    /* catch() { ... } // from try @ 03292b34 with catch @ 03292c90 */
                    /* catch() { ... } // from try @ 03292b44 with catch @ 03292c94 */
      if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03292b28 with catch @ 03292c98 */
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 03292c60 with catch @ 03292c9c */
                    /* catch() { ... } // from try @ 03292ac0 with catch @ 03292ca0 */
                    /* catch() { ... } // from try @ 03292a64 with catch @ 03292ca4 */
      pGVar4 = ECENNHNBAME__NBIECKIMNNK((IENLNOEDCFF_o *)PFDEAPMMFAP,(MethodInfo *)0x0);
    }
                    /* catch() { ... } // from try @ 03292c58 with catch @ 03292ca8 */
    if (pGVar4 != (GBKCLIFGIFN_o *)0x0) {
LAB_03292cc4:
                    /* catch() { ... } // from try @ 03292cb8 with catch @ 03292ccc */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__)
      ;
                    /* try { // try from 03292cd4 to 03392d3b has its CatchHandler @ 03292d50 */
      return pGVar4;
    }
  } while( true );
}


// ===== public void .ctor(XmlNode PJHODHEOHFN)  [RVA 0x3192D80]
// ABNLGBHKOCE$$.ctor @ RVA 0x3192D80

void ABNLGBHKOCE___ctor(ABNLGBHKOCE_o *__this,System_Xml_XmlNode_o *PJHODHEOHFN,MethodInfo *method)

{
  ABNLGBHKOCE_JBMHDDKONHC_o *__this_00;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_04566a4c & 1) == 0) {
    FUN_01bab630(&ABNLGBHKOCE_JBMHDDKONHC_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04566a4c = 1;
  }
  auVar3 = thunk_FUN_01bda818(ABNLGBHKOCE_JBMHDDKONHC_TypeInfo);
  __this_00 = auVar3._0_8_;
  ABNLGBHKOCE_JBMHDDKONHC___ctor(__this_00,auVar3._8_8_);
  (__this->fields).CKNFEFFGHLC = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (PJHODHEOHFN != (System_Xml_XmlNode_o *)0x0) {
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(PJHODHEOHFN->klass->vtable)._16_get_Attributes.methodPtr)
                          (PJHODHEOHFN,(PJHODHEOHFN->klass->vtable)._16_get_Attributes.method);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_01,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM
                         (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).JIJLBFGKNJK;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void AKNCABCJLII(GBJGJEGPHKD NCNGALIAHJL, bool FOFCAILEKJD, bool BHKCLMLKLNB, GBJGJEGPHKD CHBJNMMEAPG)  [RVA 0x3192FC0]
// ABNLGBHKOCE$$AKNCABCJLII @ RVA 0x3192FC0

void ABNLGBHKOCE__AKNCABCJLII
               (ABNLGBHKOCE_o *__this,GBJGJEGPHKD_o *NCNGALIAHJL,bool FOFCAILEKJD,bool BHKCLMLKLNB,
               GBJGJEGPHKD_o *CHBJNMMEAPG,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_00;
  PNGKLCHKPEO_o *__this_01;
  ABNLGBHKOCE_JBMHDDKONHC_o *pAVar5;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566a4d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_get_Current__);
    FUN_01bab630(&HDBPKHNKOGI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
    DAT_04566a4d = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pAVar5 = (__this->fields).CKNFEFFGHLC;
  if (pAVar5 != (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) {
    (*(__this->klass->vtable)._6_CEACPADMPKJ.methodPtr)
              (__this,(pAVar5->fields).KPFGHBEKJIM,NCNGALIAHJL,(ulong)FOFCAILEKJD,(ulong)BHKCLMLKLNB
               ,CHBJNMMEAPG,0,(__this->klass->vtable)._6_CEACPADMPKJ.method);
    pAVar5 = (__this->fields).CKNFEFFGHLC;
    if ((pAVar5 != (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) &&
       (__this_00 = (pAVar5->fields).NEIJJHEFLHP,
       __this_00 != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__
                          );
        pIVar2 = local_70.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
          return;
        }
        if ((IIMNGGHGKOD_o *)local_70.fields._current == (IIMNGGHGKOD_o *)0x0) break;
        iVar4 = IIMNGGHGKOD__NHGGBEACKBD
                          ((IIMNGGHGKOD_o *)local_70.fields._current,(MethodInfo *)0x0);
        if (iVar4 == 5) {
          bVar1 = (HDBPKHNKOGI_TypeInfo->_2).naturalAligment;
          if (((((IIMNGGHGKOD_c *)pIVar2->klass)->_2).naturalAligment < bVar1) ||
             ((((IIMNGGHGKOD_c *)pIVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)HDBPKHNKOGI_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pIVar2);
          }
          __this_01 = *(PNGKLCHKPEO_o **)
                       &(((IIMNGGHGKOD_o *)((long)pIVar2 + 0x48))->fields).NPGJDANOMIK;
          if (__this_01 == (PNGKLCHKPEO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          PNGKLCHKPEO__KEAKEIPABPP
                    (__this_01,NCNGALIAHJL,FOFCAILEKJD,(IEFEBEDLHNN_o *)0x0,BHKCLMLKLNB,CHBJNMMEAPG,
                     (MethodInfo *)0x0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void CEACPADMPKJ(List<IENLNOEDCFF> AHEFOIOKDOK, GBJGJEGPHKD NCNGALIAHJL, bool FOFCAILEKJD, bool BHKCLMLKLNB, GBJGJEGPHKD CHBJNMMEAPG, IEFEBEDLHNN IIBPJLKGEBP)  [RVA 0x3193214]
// ABNLGBHKOCE$$CEACPADMPKJ @ RVA 0x3193214

void ABNLGBHKOCE__CEACPADMPKJ
               (ABNLGBHKOCE_o *__this,System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK,
               GBJGJEGPHKD_o *NCNGALIAHJL,bool FOFCAILEKJD,bool BHKCLMLKLNB,
               GBJGJEGPHKD_o *CHBJNMMEAPG,IEFEBEDLHNN_o *IIBPJLKGEBP,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566a4e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EIEJHJLDGNH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    FUN_01bab630(&NBOACIABNIG_TypeInfo);
    FUN_01bab630(&StringLiteral_21286/*"subconditions is null"*/);
    FUN_01bab630(&StringLiteral_21285/*"subcondition is null"*/);
    DAT_04566a4e = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)AHEFOIOKDOK,
               Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__
                             ), __this_00 = local_80.fields._current, bVar2) {
      if ((EIEJHJLDGNH_o *)local_80.fields._current != (EIEJHJLDGNH_o *)0x0) {
        iVar3 = IENLNOEDCFF__NHGGBEACKBD
                          ((IENLNOEDCFF_o *)local_80.fields._current,(MethodInfo *)0x0);
        if (iVar3 == 2) {
          bVar1 = (EIEJHJLDGNH_TypeInfo->_2).naturalAligment;
          if (((((EIEJHJLDGNH_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
             ((((EIEJHJLDGNH_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)EIEJHJLDGNH_TypeInfo)) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_21285/*"subcondition is null"*/,(MethodInfo *)0x0);
          }
          else {
            EIEJHJLDGNH__KHKLLNFCMME
                      ((EIEJHJLDGNH_o *)__this_00,NCNGALIAHJL,FOFCAILEKJD,IIBPJLKGEBP,BHKCLMLKLNB,
                       CHBJNMMEAPG,(MethodInfo *)0x0);
          }
        }
        iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
        if (iVar3 == 0x15) {
          bVar1 = (NBOACIABNIG_TypeInfo->_2).naturalAligment;
          if (((((EIEJHJLDGNH_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
             ((((EIEJHJLDGNH_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)NBOACIABNIG_TypeInfo)) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_21285/*"subcondition is null"*/,(MethodInfo *)0x0);
          }
          else {
                    /* try { // try from 0329349c to 0339373f has its CatchHandler @ 0329349c
                       catch() { ... } // from try @ 0329349c with catch @ 0329349c
                       catch() { ... } // from try @ 03293758 with catch @ 0329349c
                       catch() { ... } // from try @ 032937c8 with catch @ 0329349c
                       catch() { ... } // from try @ 03293808 with catch @ 0329349c */
            NBOACIABNIG__KHKLLNFCMME
                      ((NBOACIABNIG_o *)__this_00,NCNGALIAHJL,FOFCAILEKJD,IIBPJLKGEBP,BHKCLMLKLNB,
                       CHBJNMMEAPG,(MethodInfo *)0x0);
          }
        }
        else {
          iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
          if (iVar3 == 8) {
            bVar1 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
            if (((((EIEJHJLDGNH_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
               ((((EIEJHJLDGNH_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogError(StringLiteral_21286/*"subconditions is null"*/,(MethodInfo *)0x0);
            }
            else {
              (*(__this->klass->vtable)._6_CEACPADMPKJ.methodPtr)
                        (__this,*(undefined8 *)
                                 &((EIEJHJLDGNH_Fields *)((long)__this_00 + 0x10))->NMEBNDDAFLJ,
                         NCNGALIAHJL,(ulong)FOFCAILEKJD,(ulong)BHKCLMLKLNB,CHBJNMMEAPG,IIBPJLKGEBP,
                         (__this->klass->vtable)._6_CEACPADMPKJ.method);
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void JBICKKIBGDI()  [RVA 0x31935B4]
// ABNLGBHKOCE$$JBICKKIBGDI @ RVA 0x31935B4

void ABNLGBHKOCE__JBICKKIBGDI(ABNLGBHKOCE_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_00;
  PNGKLCHKPEO_o *__this_01;
  MethodInfo *in_x2;
  ABNLGBHKOCE_JBMHDDKONHC_o *pAVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566a4f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_get_Current__);
    FUN_01bab630(&HDBPKHNKOGI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
    DAT_04566a4f = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pAVar5 = (__this->fields).CKNFEFFGHLC;
  if (pAVar5 != (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) {
    ABNLGBHKOCE__POFILAAGAAP(__this,(pAVar5->fields).KPFGHBEKJIM,in_x2);
    pAVar5 = (__this->fields).CKNFEFFGHLC;
    if ((pAVar5 != (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) &&
       (__this_00 = (pAVar5->fields).NEIJJHEFLHP,
       __this_00 != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<IIMNGGHGKOD>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_MoveNext__
                          );
        pIVar2 = local_50.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<IIMNGGHGKOD>_Dispose__);
          return;
        }
        if ((IIMNGGHGKOD_o *)local_50.fields._current == (IIMNGGHGKOD_o *)0x0) break;
        iVar4 = IIMNGGHGKOD__NHGGBEACKBD
                          ((IIMNGGHGKOD_o *)local_50.fields._current,(MethodInfo *)0x0);
        if (iVar4 == 5) {
          bVar1 = (HDBPKHNKOGI_TypeInfo->_2).naturalAligment;
          if (((((IIMNGGHGKOD_c *)pIVar2->klass)->_2).naturalAligment < bVar1) ||
             ((((IIMNGGHGKOD_c *)pIVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)HDBPKHNKOGI_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pIVar2);
          }
          __this_01 = *(PNGKLCHKPEO_o **)
                       &(((IIMNGGHGKOD_o *)((long)pIVar2 + 0x48))->fields).NPGJDANOMIK;
          if (__this_01 == (PNGKLCHKPEO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          PNGKLCHKPEO__NODBBDLAIHD(__this_01,(MethodInfo *)0x0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual bool PCPBHJGAOOH(OLKKAIFGGAK BCKBBGCOMJD, List<IENLNOEDCFF> PBCGCHIKCOE, KJFPGDFNFCL FKDOMEBPFPF)  [RVA 0x3193AF0]
// ABNLGBHKOCE$$PCPBHJGAOOH @ RVA 0x3193AF0

bool ABNLGBHKOCE__PCPBHJGAOOH
               (ABNLGBHKOCE_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_IENLNOEDCFF__o *PBCGCHIKCOE,
               KJFPGDFNFCL_o *FKDOMEBPFPF,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  byte bVar3;
  int32_t iVar4;
  long lVar5;
  KJFPGDFNFCL_o **ppKVar6;
  ABNLGBHKOCE_JBMHDDKONHC_o *pAVar7;
  int iVar8;
  NJPBHDMCLIN_o *pNVar9;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 03293af0 to 03393af7 has its CatchHandler @ 03293b28 */
                    /* try { // try from 03293af8 to 03393afb has its CatchHandler @ 03293b24 */
                    /* try { // try from 03293afc to 03393aff has its CatchHandler @ 03293828 */
                    /* try { // try from 03293b00 to 03393b03 has its CatchHandler @ 03293b14 */
                    /* try { // try from 03293b04 to 03393b3f has its CatchHandler @ 03293828 */
                    /* catch() { ... } // from try @ 03293a44 with catch @ 03293b0c */
                    /* catch() { ... } // from try @ 03293a38 with catch @ 03293b10 */
                    /* catch() { ... } // from try @ 03293b00 with catch @ 03293b14 */
                    /* catch() { ... } // from try @ 03293a00 with catch @ 03293b18 */
                    /* catch() { ... } // from try @ 03293a0c with catch @ 03293b1c */
                    /* catch() { ... } // from try @ 03293a1c with catch @ 03293b20 */
                    /* catch() { ... } // from try @ 03293af8 with catch @ 03293b24 */
  if ((DAT_04566a50 & 1) == 0) {
                    /* catch() { ... } // from try @ 03293af0 with catch @ 03293b28 */
                    /* catch() { ... } // from try @ 0329399c with catch @ 03293b2c */
                    /* catch() { ... } // from try @ 03293940 with catch @ 03293b30 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
                    /* try { // try from 03293b40 to 03393b43 has its CatchHandler @ 03293b54 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
                    /* catch() { ... } // from try @ 03293b40 with catch @ 03293b54 */
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
                    /* try { // try from 03293b5c to 03393bc3 has its CatchHandler @ 03293bd8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    DAT_04566a50 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((PBCGCHIKCOE == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) &&
     ((pAVar7 = (__this->fields).CKNFEFFGHLC, pAVar7 == (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0 ||
      (PBCGCHIKCOE = (pAVar7->fields).KPFGHBEKJIM,
      PBCGCHIKCOE == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)PBCGCHIKCOE,
             Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
                    /* try { // try from 03293bc4 to 03393bcf has its CatchHandler @ 03293828 */
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  do {
                    /* try { // try from 03293bd0 to 03393bd7 has its CatchHandler @ 03293bd8 */
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    __this_00 = local_80.fields._current;
                    /* catch() { ... } // from try @ 03293b5c with catch @ 03293bd8
                       catch() { ... } // from try @ 03293bd0 with catch @ 03293bd8 */
    if (!bVar2) {
      iVar8 = 0xc;
LAB_03293cd8:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__)
      ;
      return iVar8 != 7;
    }
    if ((KAFMFFDFDBL_o *)local_80.fields._current == (KAFMFFDFDBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (((KAFMFFDFDBL_Fields *)((long)local_80.fields._current + 0x10))->super).LOAFPIOGJAF;
    lVar5 = (*(((KAFMFFDFDBL_c *)(local_80.fields._current)->klass)->vtable)._6_BMADCIAHJFL.
              methodPtr)(local_80.fields._current,BCKBBGCOMJD,(ulong)uVar1,
                         (((KAFMFFDFDBL_c *)(local_80.fields._current)->klass)->vtable).
                         _6_BMADCIAHJFL.method);
    if (lVar5 == 0) {
LAB_03293ccc:
      iVar8 = 7;
      goto LAB_03293cd8;
    }
    if (FKDOMEBPFPF != (KJFPGDFNFCL_o *)0x0) {
      pNVar9 = *(NJPBHDMCLIN_o **)(lVar5 + 0x248);
      if (pNVar9 == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ppKVar6 = &(pNVar9->fields).FKBLDBLGMIH;
      *ppKVar6 = FKDOMEBPFPF;
      thunk_FUN_01c20e04(ppKVar6,FKDOMEBPFPF);
      (FKDOMEBPFPF->fields).KPFGHBEKJIM = pNVar9;
      thunk_FUN_01c20e04(&FKDOMEBPFPF->fields,pNVar9);
    }
    (*(((KAFMFFDFDBL_c *)__this_00->klass)->vtable)._5_ENEJIHFIBFM.methodPtr)
              (__this_00,1,(((KAFMFFDFDBL_c *)__this_00->klass)->vtable)._5_ENEJIHFIBFM.method);
    iVar4 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
    if (iVar4 == 8) {
      bVar3 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
      if ((bVar3 <= (((KAFMFFDFDBL_c *)__this_00->klass)->_2).naturalAligment) &&
         ((((KAFMFFDFDBL_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] ==
          (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
        if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = KAFMFFDFDBL__CFANNGPGDPJ
                          ((KAFMFFDFDBL_o *)__this_00,(BCKBBGCOMJD->fields).FNEAAHOOHAA,BCKBBGCOMJD,
                           FKDOMEBPFPF,(MethodInfo *)0x0);
        goto LAB_03293cbc;
      }
LAB_03293cc8:
      (((KAFMFFDFDBL_Fields *)((long)__this_00 + 0x10))->super).LOAFPIOGJAF = uVar1;
      goto LAB_03293ccc;
    }
    bVar3 = (*(((KAFMFFDFDBL_c *)__this_00->klass)->vtable)._4_EPBENPDCBFE.methodPtr)
                      (__this_00,*(undefined8 *)(lVar5 + 0x248),
                       (((KAFMFFDFDBL_c *)__this_00->klass)->vtable)._4_EPBENPDCBFE.method);
LAB_03293cbc:
    if ((bVar3 & 1) == 0) goto LAB_03293cc8;
    (((KAFMFFDFDBL_Fields *)((long)__this_00 + 0x10))->super).LOAFPIOGJAF = uVar1;
  } while( true );
}


// ===== public void POFILAAGAAP(List<IENLNOEDCFF> IBCCCNMHCBP)  [RVA 0x3193790]
// ABNLGBHKOCE$$POFILAAGAAP @ RVA 0x3193790

void ABNLGBHKOCE__POFILAAGAAP
               (ABNLGBHKOCE_o *__this,System_Collections_Generic_List_IENLNOEDCFF__o *IBCCCNMHCBP,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03293750 with catch @ 032937a8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03293740 with catch @ 032937ac
                        */
  if ((DAT_04566a51 & 1) == 0) {
                    /* try { // try from 032937c4 to 033937c7 has its CatchHandler @ 032937f0 */
                    /* try { // try from 032937c8 to 033937ff has its CatchHandler @ 0329349c */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EIEJHJLDGNH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
                    /* catch() { ... } // from try @ 032937c4 with catch @ 032937f0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
                    /* try { // try from 03293800 to 03393807 has its CatchHandler @ 0329381c */
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
                    /* try { // try from 03293808 to 03393813 has its CatchHandler @ 0329349c */
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
                    /* try { // try from 03293814 to 0339381b has its CatchHandler @ 0329381c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03293800 with catch @ 0329381c
                       catch(type#2 @ 00000000) { ... } // from try @ 03293814 with catch @ 0329381c
                        */
    FUN_01bab630(&NBOACIABNIG_TypeInfo);
                    /* try { // try from 03293828 to 0339393f has its CatchHandler @ 03293828
                       catch() { ... } // from try @ 03293828 with catch @ 03293828
                       catch() { ... } // from try @ 03293a50 with catch @ 03293828
                       catch() { ... } // from try @ 03293afc with catch @ 03293828
                       catch() { ... } // from try @ 03293b04 with catch @ 03293828
                       catch() { ... } // from try @ 03293bc4 with catch @ 03293828 */
    FUN_01bab630(&StringLiteral_17319/*"conditionDistance is null"*/);
    FUN_01bab630(&StringLiteral_17321/*"conditions is null"*/);
    DAT_04566a51 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (IBCCCNMHCBP != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)IBCCCNMHCBP,
               Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
      __this_00 = local_80.fields._current;
      if (!bVar2) {
                    /* try { // try from 03293a1c to 03393a27 has its CatchHandler @ 03293b20 */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
                    /* try { // try from 03293a38 to 03393a43 has its CatchHandler @ 03293b10 */
                    /* try { // try from 03293a44 to 03393a4f has its CatchHandler @ 03293b0c */
        return;
      }
      if ((EIEJHJLDGNH_o *)local_80.fields._current == (EIEJHJLDGNH_o *)0x0) break;
      iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)local_80.fields._current,(MethodInfo *)0x0);
      if (iVar3 == 2) {
        bVar1 = (EIEJHJLDGNH_TypeInfo->_2).naturalAligment;
        if (((((EIEJHJLDGNH_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
           ((((EIEJHJLDGNH_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)EIEJHJLDGNH_TypeInfo)) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_17319/*"conditionDistance is null"*/,(MethodInfo *)0x0);
        }
        else {
          EIEJHJLDGNH__JBICKKIBGDI((EIEJHJLDGNH_o *)__this_00,(MethodInfo *)0x0);
        }
      }
      else {
        iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
        if (iVar3 == 0x15) {
                    /* try { // try from 03293940 to 03393967 has its CatchHandler @ 03293b30 */
          bVar1 = (NBOACIABNIG_TypeInfo->_2).naturalAligment;
          if (((((EIEJHJLDGNH_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
             ((((EIEJHJLDGNH_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)NBOACIABNIG_TypeInfo)) {
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError(StringLiteral_17319/*"conditionDistance is null"*/,(MethodInfo *)0x0);
          }
          else {
                    /* try { // try from 03293a00 to 03393a0b has its CatchHandler @ 03293b18 */
            NBOACIABNIG__JBICKKIBGDI((NBOACIABNIG_o *)__this_00,(MethodInfo *)0x0);
          }
        }
        else {
          iVar3 = IENLNOEDCFF__NHGGBEACKBD((IENLNOEDCFF_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0329399c to 033939c7 has its CatchHandler @ 03293b2c */
          if (iVar3 == 8) {
            bVar1 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
            if (((((EIEJHJLDGNH_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
               ((((EIEJHJLDGNH_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogError(StringLiteral_17321/*"conditions is null"*/,(MethodInfo *)0x0);
            }
            else {
                    /* try { // try from 03293a0c to 03393a17 has its CatchHandler @ 03293b1c */
              ABNLGBHKOCE__POFILAAGAAP
                        (__this,*(System_Collections_Generic_List_IENLNOEDCFF__o **)
                                 &((EIEJHJLDGNH_Fields *)((long)__this_00 + 0x10))->NMEBNDDAFLJ,
                         method);
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected static void HPGNLPIBDBN(List<IENLNOEDCFF> AHEFOIOKDOK, List<GBKCLIFGIFN> PFDNCKLLMBL)  [RVA 0x3193DB0]
// ABNLGBHKOCE$$HPGNLPIBDBN @ RVA 0x3193DB0

void ABNLGBHKOCE__HPGNLPIBDBN
               (System_Collections_Generic_List_IENLNOEDCFF__o *AHEFOIOKDOK,
               System_Collections_Generic_List_GBKCLIFGIFN__o *PFDNCKLLMBL,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *PFDEAPMMFAP;
  bool bVar4;
  int32_t iVar5;
  GBKCLIFGIFN_o *item;
  GBKCLIFGIFN_array *pGVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566a52 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&ECENNHNBAME_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_get_Current__);
    FUN_01bab630(&KAFMFFDFDBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GBKCLIFGIFN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_17320/*"conditionList is null"*/);
    DAT_04566a52 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK == (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)AHEFOIOKDOK,
             Method_System_Collections_Generic_List<IENLNOEDCFF>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    do {
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_MoveNext__
                          );
        PFDEAPMMFAP = local_70.fields._current;
        if (!bVar4) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_70,
                     Method_System_Collections_Generic_List_Enumerator<IENLNOEDCFF>_Dispose__);
          return;
        }
        if ((IENLNOEDCFF_o *)local_70.fields._current == (IENLNOEDCFF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar5 = IENLNOEDCFF__NHGGBEACKBD
                          ((IENLNOEDCFF_o *)local_70.fields._current,(MethodInfo *)0x0);
        if (iVar5 != 8) break;
        bVar1 = (KAFMFFDFDBL_TypeInfo->_2).naturalAligment;
        if (((((IENLNOEDCFF_c *)PFDEAPMMFAP->klass)->_2).naturalAligment < bVar1) ||
           ((((IENLNOEDCFF_c *)PFDEAPMMFAP->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)KAFMFFDFDBL_TypeInfo)) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_17320/*"conditionList is null"*/,(MethodInfo *)0x0);
        }
        else {
          ABNLGBHKOCE__HPGNLPIBDBN
                    (((IENLNOEDCFF_o *)((long)PFDEAPMMFAP + 0x28))->monitor,PFDNCKLLMBL,method);
        }
      }
      if ((ECENNHNBAME_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      item = ECENNHNBAME__NBIECKIMNNK((IENLNOEDCFF_o *)PFDEAPMMFAP,(MethodInfo *)0x0);
      lVar3 = Method_System_Collections_Generic_List<GBKCLIFGIFN>_Add__;
    } while (item == (GBKCLIFGIFN_o *)0x0);
    if (PFDNCKLLMBL == (System_Collections_Generic_List_GBKCLIFGIFN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pGVar6 = (PFDNCKLLMBL->fields)._items;
    (PFDNCKLLMBL->fields)._version = (PFDNCKLLMBL->fields)._version + 1;
    if (pGVar6 == (GBKCLIFGIFN_array *)0x0) break;
    uVar2 = (PFDNCKLLMBL->fields)._size;
    if (uVar2 < (uint)pGVar6->max_length) {
      (PFDNCKLLMBL->fields)._size = uVar2 + 1;
      pGVar6->m_Items[(int)uVar2] = item;
      thunk_FUN_01c20e04();
    }
    else {
      method = *(MethodInfo **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)PFDNCKLLMBL,(Il2CppObject *)item,
                 (MethodInfo_26E4DAC *)method);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LLKAJAOEELF(ABNLGBHKOCE.JBMHDDKONHC NMPDBLCKDFA)  [RVA 0x3194080]
// ABNLGBHKOCE$$LLKAJAOEELF @ RVA 0x3194080

void ABNLGBHKOCE__LLKAJAOEELF
               (ABNLGBHKOCE_o *__this,ABNLGBHKOCE_JBMHDDKONHC_o *NMPDBLCKDFA,MethodInfo *method)

{
  ABNLGBHKOCE_JBMHDDKONHC_o *__this_00;
  
  __this_00 = (__this->fields).CKNFEFFGHLC;
  if (__this_00 != (ABNLGBHKOCE_JBMHDDKONHC_o *)0x0) {
    ABNLGBHKOCE_JBMHDDKONHC__HMKOGFJKKPH(__this_00,NMPDBLCKDFA,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

