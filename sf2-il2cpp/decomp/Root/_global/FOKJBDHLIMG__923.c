// TypeDefIndex 923
// Namespace: 
// public class FOKJBDHLIMG
// Fields:
//   public readonly List<HEFOANCOHDC> FLADBMFBNIH; // 0x10
//   public readonly List<HEFOANCOHDC> CNLHOAHDHCF; // 0x18
//   public readonly List<HEFOANCOHDC> ODLBEHFGJJE; // 0x20

// ===== private HEFOANCOHDC FBBGALKOPNG(HEFOANCOHDC EIKFGOCCOIE, XmlNode AHDGNOJPPIB)  [RVA 0x309E330]
// FOKJBDHLIMG$$FBBGALKOPNG @ RVA 0x309E330

HEFOANCOHDC_o *
FOKJBDHLIMG__FBBGALKOPNG
          (FOKJBDHLIMG_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,System_Xml_XmlNode_o *AHDGNOJPPIB,
          MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlNode_o *GHKNNCLBPEO;
  HEFOANCOHDC_o *pHVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *value;
  System_String_o **ppSVar6;
  
  if ((DAT_0456612c & 1) == 0) {
    FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_11030/*"RatingEvaluation"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    __this = (FOKJBDHLIMG_o *)FUN_01bab630(&StringLiteral_5304/*"Description"*/);
    DAT_0456612c = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    GHKNNCLBPEO = (System_Xml_XmlNode_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_11876/*"Set"*/,
                             (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    __this = (FOKJBDHLIMG_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_11030/*"RatingEvaluation"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) {
      pHVar3 = HEFOANCOHDC__FAOBHLCDKJI
                         (EIKFGOCCOIE,GHKNNCLBPEO,(System_Xml_XmlNode_o *)__this,(MethodInfo *)0x0);
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      __this = (FOKJBDHLIMG_o *)0x0;
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_5304/*"Description"*/,(MethodInfo *)0x0);
        value = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        __this = (FOKJBDHLIMG_o *)0x0;
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
          iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
                    /* try { // try from 0319e478 to 0329e5db has its CatchHandler @ 0319e478
                       catch() { ... } // from try @ 0319e478 with catch @ 0319e478
                       catch() { ... } // from try @ 0319e68c with catch @ 0319e478
                       catch() { ... } // from try @ 0319e6bc with catch @ 0319e478
                       catch() { ... } // from try @ 0319e7cc with catch @ 0319e478
                       catch() { ... } // from try @ 0319e850 with catch @ 0319e478
                       catch() { ... } // from try @ 0319e880 with catch @ 0319e478 */
          bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          __this = (FOKJBDHLIMG_o *)(ulong)bVar1;
          if (bVar1) {
            if (pHVar3 != (HEFOANCOHDC_o *)0x0) {
LAB_0319e4a0:
              (pHVar3->fields).AEIJFFBOBCP = iVar2;
              return pHVar3;
            }
          }
          else if (pHVar3 != (HEFOANCOHDC_o *)0x0) {
            ppSVar6 = &(pHVar3->fields).BPCADJLKKGA;
            *ppSVar6 = value;
            thunk_FUN_01c20e04(ppSVar6,value);
            goto LAB_0319e4a0;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public HEFOANCOHDC PKLOILCMALN(string KGLJICLJHEL)  [RVA 0x309E4B8]
// FOKJBDHLIMG$$PKLOILCMALN @ RVA 0x309E4B8

HEFOANCOHDC_o *
FOKJBDHLIMG__PKLOILCMALN(FOKJBDHLIMG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  HEFOANCOHDC_o *pHVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_01;
  
  if ((DAT_0456612d & 1) == 0) {
    FUN_01bab630(&Method_FOKJBDHLIMG_ILLPIJHEPDN_KEKJBJKFEMM__);
    FUN_01bab630(&FOKJBDHLIMG_ILLPIJHEPDN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Find__);
    FUN_01bab630(&System_Predicate<HEFOANCOHDC>_TypeInfo);
    DAT_0456612d = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FOKJBDHLIMG_ILLPIJHEPDN_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(__this_00 + 1,KGLJICLJHEL);
    __this_01 = (__this->fields).ODLBEHFGJJE;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HEFOANCOHDC>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      pHVar1 = (HEFOANCOHDC_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<HEFOANCOHDC>_Find__);
      return pHVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<HEFOANCOHDC> KFHGLJOAALL(string KGLJICLJHEL)  [RVA 0x309E5A4]
// FOKJBDHLIMG$$KFHGLJOAALL @ RVA 0x309E5A4

System_Collections_Generic_List_HEFOANCOHDC__o *
FOKJBDHLIMG__KFHGLJOAALL(FOKJBDHLIMG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  
  if ((DAT_0456612e & 1) == 0) {
    FUN_01bab630(&Method_FOKJBDHLIMG_APDLBPDLCBK_IBIHEEDHDKM__);
                    /* try { // try from 0319e5dc to 0329e5e3 has its CatchHandler @ 0319e834 */
    FUN_01bab630(&FOKJBDHLIMG_APDLBPDLCBK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_FindAll__);
                    /* try { // try from 0319e5f8 to 0329e603 has its CatchHandler @ 0319e830 */
    FUN_01bab630(&System_Predicate<HEFOANCOHDC>_TypeInfo);
    DAT_0456612e = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FOKJBDHLIMG_APDLBPDLCBK_TypeInfo);
                    /* try { // try from 0319e610 to 0329e61f has its CatchHandler @ 0319e694 */
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
                    /* try { // try from 0319e628 to 0329e643 has its CatchHandler @ 0319e698 */
    __this_00[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(__this_00 + 1,KGLJICLJHEL);
    pSVar1 = (__this->fields).CNLHOAHDHCF;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HEFOANCOHDC>_TypeInfo);
                    /* try { // try from 0319e654 to 0329e65f has its CatchHandler @ 0319e820 */
    System_Predicate<object>___ctor();
    if (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* try { // try from 0319e674 to 0329e683 has its CatchHandler @ 0319e828 */
      pSVar1 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
               System_Collections_Generic_List<object>__FindAll
                         ((System_Collections_Generic_List_object__o *)pSVar1,match,
                          Method_System_Collections_Generic_List<HEFOANCOHDC>_FindAll__);
      return pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x309E690]
// FOKJBDHLIMG$$.ctor @ RVA 0x309E690

void FOKJBDHLIMG___ctor(FOKJBDHLIMG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar2;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 0319e688 with catch @ 0319e690 */
                    /* catch() { ... } // from try @ 0319e610 with catch @ 0319e694 */
                    /* catch() { ... } // from try @ 0319e628 with catch @ 0319e698 */
                    /* try { // try from 0319e6b8 to 0329e6bb has its CatchHandler @ 0319e814 */
  if ((DAT_0456612f & 1) == 0) {
                    /* try { // try from 0319e6bc to 0329e797 has its CatchHandler @ 0319e478 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    DAT_0456612f = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
  (__this->fields).FLADBMFBNIH = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
  ppSVar2 = &(__this->fields).CNLHOAHDHCF;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
  ppSVar2 = &(__this->fields).ODLBEHFGJJE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void NCOOBKBAMCI(string KGLJICLJHEL)  [RVA 0x309E760]
// FOKJBDHLIMG$$NCOOBKBAMCI @ RVA 0x309E760

void FOKJBDHLIMG__NCOOBKBAMCI(FOKJBDHLIMG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar2;
  
  if ((DAT_04566130 & 1) == 0) {
    FUN_01bab630(&Method_FOKJBDHLIMG_JDCHGALINAB_AMBDEKNFFJA__);
                    /* try { // try from 0319e798 to 0329e79f has its CatchHandler @ 0319e82c */
    FUN_01bab630(&FOKJBDHLIMG_JDCHGALINAB_TypeInfo);
                    /* try { // try from 0319e7a0 to 0329e7a3 has its CatchHandler @ 0319e824 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Find__);
                    /* try { // try from 0319e7b0 to 0329e7cb has its CatchHandler @ 0319e894 */
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
    FUN_01bab630(&System_Predicate<HEFOANCOHDC>_TypeInfo);
    DAT_04566130 = 1;
  }
                    /* try { // try from 0319e7cc to 0329e84b has its CatchHandler @ 0319e478 */
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(FOKJBDHLIMG_JDCHGALINAB_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(pIVar1 + 1,KGLJICLJHEL);
    pSVar2 = (__this->fields).ODLBEHFGJJE;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HEFOANCOHDC>_TypeInfo);
                    /* catch() { ... } // from try @ 0319e6b8 with catch @ 0319e814 */
                    /* catch() { ... } // from try @ 0319e654 with catch @ 0319e820 */
    System_Predicate<object>___ctor();
                    /* catch() { ... } // from try @ 0319e7a0 with catch @ 0319e824 */
    if (pSVar2 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* catch() { ... } // from try @ 0319e674 with catch @ 0319e828 */
                    /* catch() { ... } // from try @ 0319e798 with catch @ 0319e82c */
                    /* catch() { ... } // from try @ 0319e5f8 with catch @ 0319e830 */
                    /* catch() { ... } // from try @ 0319e5dc with catch @ 0319e834 */
      pIVar1 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)pSVar2,match,
                          Method_System_Collections_Generic_List<HEFOANCOHDC>_Find__);
      if (pIVar1 == (Il2CppObject *)0x0) {
                    /* catch() { ... } // from try @ 0319e84c with catch @ 0319e870 */
                    /* try { // try from 0319e878 to 0329e87f has its CatchHandler @ 0319e894 */
        return;
      }
      pSVar2 = (__this->fields).ODLBEHFGJJE;
                    /* try { // try from 0319e84c to 0329e84f has its CatchHandler @ 0319e870 */
      if (pSVar2 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* try { // try from 0319e850 to 0329e877 has its CatchHandler @ 0319e478 */
        System_Collections_Generic_List<object>__Remove
                  ((System_Collections_Generic_List_object__o *)pSVar2,pIVar1,
                   Method_System_Collections_Generic_List<HEFOANCOHDC>_Remove__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HEDKEHDPKAP(HEFOANCOHDC EIKFGOCCOIE, int JLAFGLDIFOC, string ONLOEDAIEOJ, string OCFNILDEHHP)  [RVA 0x309E888]
// FOKJBDHLIMG$$HEDKEHDPKAP @ RVA 0x309E888

void FOKJBDHLIMG__HEDKEHDPKAP
               (FOKJBDHLIMG_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,int32_t JLAFGLDIFOC,
               System_String_o *ONLOEDAIEOJ,System_String_o *OCFNILDEHHP,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_String_o **ppSVar4;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  HEFOANCOHDC_array *pHVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar7;
  
                    /* try { // try from 0319e88c to 0329e893 has its CatchHandler @ 0319e894 */
                    /* catch() { ... } // from try @ 0319e7b0 with catch @ 0319e894
                       catch() { ... } // from try @ 0319e878 with catch @ 0319e894
                       catch() { ... } // from try @ 0319e88c with catch @ 0319e894 */
  if ((DAT_04566131 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__);
    DAT_04566131 = 1;
  }
  bVar3 = System_String__IsNullOrEmpty(ONLOEDAIEOJ,(MethodInfo *)0x0);
  if (bVar3) {
    CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
    if (EIKFGOCCOIE == (HEFOANCOHDC_o *)0x0) goto LAB_0319e9c8;
  }
  else {
    if (EIKFGOCCOIE == (HEFOANCOHDC_o *)0x0) goto LAB_0319e9c8;
    ppSVar4 = &(EIKFGOCCOIE->fields).BPCADJLKKGA;
    *ppSVar4 = ONLOEDAIEOJ;
    thunk_FUN_01c20e04(ppSVar4,ONLOEDAIEOJ);
    CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
  }
  (EIKFGOCCOIE->fields).CHLMHEGKKNH.fields = CVar7;
  CVar6 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(JLAFGLDIFOC,(MethodInfo *)0x0);
  ppSVar4 = &(EIKFGOCCOIE->fields).JJONOCGMEMK;
  *ppSVar4 = OCFNILDEHHP;
  (EIKFGOCCOIE->fields).NOPGBJNLFHM.fields = CVar6;
  thunk_FUN_01c20e04(ppSVar4,OCFNILDEHHP);
  lVar2 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
  __this_00 = (__this->fields).CNLHOAHDHCF;
  if (__this_00 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    pHVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pHVar5 != (HEFOANCOHDC_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if ((uint)pHVar5->max_length <= uVar1) {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (Il2CppObject *)EIKFGOCCOIE,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
      (__this_00->fields)._size = uVar1 + 1;
      pHVar5->m_Items[(int)uVar1] = EIKFGOCCOIE;
      thunk_FUN_01c20e04(pHVar5->m_Items + (int)uVar1,EIKFGOCCOIE);
      return;
    }
  }
LAB_0319e9c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FBKGMIENPFK(XmlNode AHDGNOJPPIB)  [RVA 0x309E9CC]
// FOKJBDHLIMG$$FBKGMIENPFK @ RVA 0x309E9CC

/* WARNING: Removing unreachable block (ram,0x0319f140) */
/* WARNING: Removing unreachable block (ram,0x0319f130) */

void FOKJBDHLIMG__FBKGMIENPFK
               (FOKJBDHLIMG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *pSVar6;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  System_String_o *pSVar9;
  MethodInfo *ONLOEDAIEOJ;
  System_String_o *OCFNILDEHHP;
  HEFOANCOHDC_o *EIKFGOCCOIE;
  long *plVar10;
  FOKJBDHLIMG_o *__this_00;
  HEFOANCOHDC_o *pHVar11;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  MethodInfo *in_x5;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  
  if ((DAT_04566132 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9209/*"Move"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    FUN_01bab630(&StringLiteral_14589/*"UpgradeLevel"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_5304/*"Description"*/);
    DAT_04566132 = 1;
  }
  pSVar12 = (__this->fields).CNLHOAHDHCF;
  if (pSVar12 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    iVar3 = (pSVar12->fields)._size;
    (pSVar12->fields)._size = 0;
    (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
    if (0 < iVar3) {
      in_x3 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,iVar3,(MethodInfo *)0x0);
    }
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar4 != (long *)0x0)) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar13 = *plVar4;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0319eb3c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0319eb3c:
        uVar14 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar14 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar13 = *plVar4;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 == 0) goto LAB_0319f024;
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_0319f00c;
        }
        lVar13 = *plVar4;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_0319eb9c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0319eb9c:
        pSVar6 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (pSVar6 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar6->klass->_2).naturalAligment < bVar1) ||
           ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar6);
        }
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar6->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar6,(pSVar6->klass->vtable)._16_get_Attributes.method);
        if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar9 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        bVar2 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar6->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar6,(pSVar6->klass->vtable)._16_get_Attributes.method);
          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
          iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar6->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar6,(pSVar6->klass->vtable)._16_get_Attributes.method);
          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_5304/*"Description"*/,(MethodInfo *)0x0);
          ONLOEDAIEOJ = (MethodInfo *)
                        EIABCPKDEBD__JPKEHIBGOEM(pSVar8,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar6->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar6,(pSVar6->klass->vtable)._16_get_Attributes.method);
          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_9209/*"Move"*/,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)0x0;
          OCFNILDEHHP = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          EIKFGOCCOIE = FOKJBDHLIMG__JMMDGEOBMOC(__this,pSVar9,method_00);
          if (EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) {
            plVar10 = (long *)(*(pSVar6->klass->vtable)._13_get_ChildNodes.methodPtr)
                                        (pSVar6,(pSVar6->klass->vtable)._13_get_ChildNodes.method);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            __this_00 = (FOKJBDHLIMG_o *)
                        (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
            if ((int)__this_00 < 1) {
              FOKJBDHLIMG__HEDKEHDPKAP
                        (__this,EIKFGOCCOIE,iVar3,(System_String_o *)ONLOEDAIEOJ,OCFNILDEHHP,in_x5);
              in_x3 = ONLOEDAIEOJ;
            }
            else {
              pHVar11 = FOKJBDHLIMG__FMFCHMPPCBH(__this_00,EIKFGOCCOIE,pSVar6,in_x3);
              if (pHVar11 != EIKFGOCCOIE) {
                in_x3 = ONLOEDAIEOJ;
                FOKJBDHLIMG__HEDKEHDPKAP
                          (__this,pHVar11,iVar3,(System_String_o *)ONLOEDAIEOJ,OCFNILDEHHP,in_x5);
              }
              plVar10 = (long *)(*(pSVar6->klass->vtable)._13_get_ChildNodes.methodPtr)
                                          (pSVar6,(pSVar6->klass->vtable)._13_get_ChildNodes.method)
              ;
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
LAB_0319ed88:
              lVar13 = *plVar10;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                      System_Collections_IEnumerator_TypeInfo) {
                    puVar5 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                    goto LAB_0319edd4;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              puVar5 = (undefined8 *)FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,0)
              ;
LAB_0319edd4:
              uVar14 = (*(code *)*puVar5)(plVar10,puVar5[1]);
              if ((uVar14 & 1) != 0) {
                lVar13 = *plVar10;
                uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                        System_Collections_IEnumerator_TypeInfo) {
                      puVar5 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                      goto LAB_0319ee34;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar5 = (undefined8 *)
                         FUN_01b81914(plVar10,System_Collections_IEnumerator_TypeInfo,1);
LAB_0319ee34:
                pSVar6 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar10,puVar5[1]);
                if (pSVar6 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                if (((pSVar6->klass->_2).naturalAligment < bVar1) ||
                   ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(pSVar6);
                }
                pSVar9 = (System_String_o *)
                         (*(pSVar6->klass->vtable)._8_unknown.methodPtr)
                                   (pSVar6,(pSVar6->klass->vtable)._8_unknown.method);
                if (pSVar9 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                bVar2 = System_String__Equals(pSVar9,StringLiteral_14589/*"UpgradeLevel"*/,(MethodInfo *)0x0);
                if (bVar2) {
                  pHVar11 = FOKJBDHLIMG__FBBGALKOPNG((FOKJBDHLIMG_o *)0x1,EIKFGOCCOIE,pSVar6,in_x3);
                  in_x3 = ONLOEDAIEOJ;
                  FOKJBDHLIMG__HEDKEHDPKAP
                            (__this,pHVar11,iVar3,(System_String_o *)ONLOEDAIEOJ,OCFNILDEHHP,in_x5);
                }
                goto LAB_0319ed88;
              }
              plVar10 = (long *)thunk_FUN_01bda71c(plVar10,System_IDisposable_TypeInfo);
              if (plVar10 != (long *)0x0) {
                lVar13 = *plVar10;
                uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar14 != 0) {
                  piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
                      puVar5 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                      goto LAB_0319ef38;
                    }
                    uVar14 = uVar14 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar14 != 0);
                }
                puVar5 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_0319ef38:
                (*(code *)*puVar5)(plVar10,puVar5[1]);
              }
            }
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0319f00c:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0319f040;
    }
  }
LAB_0319f024:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0319f040:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== public void PJKJHCHFLHD(XmlNode AHDGNOJPPIB, bool IDLJOELLIMN = True, bool LOICCHNHMIA = False)  [RVA 0x309F4BC]
// FOKJBDHLIMG$$PJKJHCHFLHD @ RVA 0x309F4BC

/* WARNING: Removing unreachable block (ram,0x0319f9f4) */
/* WARNING: Removing unreachable block (ram,0x0319f8a4) */
/* WARNING: Removing unreachable block (ram,0x0319f9dc) */

void FOKJBDHLIMG__PJKJHCHFLHD
               (FOKJBDHLIMG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,bool IDLJOELLIMN,
               bool LOICCHNHMIA,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  System_Xml_XmlNode_o *GHKNNCLBPEO;
  MethodInfo *KDMPIDEEPMP;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *KGLJICLJHEL;
  HEFOANCOHDC_o *item;
  MethodInfo *pMVar7;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar8;
  long lVar9;
  HEFOANCOHDC_array *pHVar10;
  ulong uVar11;
  int *piVar12;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566133 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    FUN_01bab630(&StringLiteral_11030/*"RatingEvaluation"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566133 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (IDLJOELLIMN) {
    pSVar8 = (__this->fields).ODLBEHFGJJE;
    if (pSVar8 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_0319f9ec;
    length = (pSVar8->fields)._size;
    (pSVar8->fields)._size = 0;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
    }
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar4 != (long *)0x0)) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar9 = *plVar4;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0319f674;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0319f674:
      uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar11 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar9 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_0319f950;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_0319f938;
      }
      lVar9 = *plVar4;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_0319f6d4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0319f6d4:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar6);
      }
      GHKNNCLBPEO = (System_Xml_XmlNode_o *)
                    (**(code **)(*plVar6 + 0x468))
                              (plVar6,StringLiteral_11876/*"Set"*/,*(undefined8 *)(*plVar6 + 0x470));
      KDMPIDEEPMP = (MethodInfo *)
                    (**(code **)(*plVar6 + 0x468))
                              (plVar6,StringLiteral_11030/*"RatingEvaluation"*/,*(undefined8 *)(*plVar6 + 0x470));
      if (GHKNNCLBPEO != (System_Xml_XmlNode_o *)0x0 || KDMPIDEEPMP != (MethodInfo *)0x0) {
        __this_00 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pMVar7 = (MethodInfo *)0x0;
        KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        pSVar8 = FOKJBDHLIMG__KFHGLJOAALL(__this,KGLJICLJHEL,pMVar7);
        if (pSVar8 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar8,
                   Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                                 ), bVar3) {
          if ((HEFOANCOHDC_o *)local_80.fields._current == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar7 = KDMPIDEEPMP;
          item = HEFOANCOHDC__FAOBHLCDKJI
                           ((HEFOANCOHDC_o *)local_80.fields._current,GHKNNCLBPEO,
                            (System_Xml_XmlNode_o *)KDMPIDEEPMP,(MethodInfo *)0x0);
          if (LOICCHNHMIA) {
            if (item == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            FOKJBDHLIMG__NCOOBKBAMCI(__this,(item->fields).JIJLBFGKNJK,pMVar7);
          }
          lVar9 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
          pSVar8 = (__this->fields).ODLBEHFGJJE;
          if (pSVar8 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pHVar10 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pHVar10 == (HEFOANCOHDC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pHVar10->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pHVar10->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pHVar10->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
      }
    } while( true );
  }
LAB_0319f9ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0319f938:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0319f96c;
    }
  }
LAB_0319f950:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0319f96c:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x309FB0C]
// FOKJBDHLIMG$$RandomizeObscuredVars @ RVA 0x309FB0C

void FOKJBDHLIMG__RandomizeObscuredVars(FOKJBDHLIMG_o *__this,MethodInfo *method)

{
  System_Action_HEFOANCOHDC__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar2;
  System_Action_HEFOANCOHDC__o *pSVar3;
  
  if ((DAT_04566134 & 1) == 0) {
    FUN_01bab630(&System_Action<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_ForEach__);
    FUN_01bab630(&Method_FOKJBDHLIMG_<>c_COBLHDIBMAB__);
    FUN_01bab630(&Method_FOKJBDHLIMG_<>c_HJNOOBPICAJ__);
    FUN_01bab630(&Method_FOKJBDHLIMG_<>c_NHIAHDNNNFP__);
    FUN_01bab630(&FOKJBDHLIMG_<>c_TypeInfo);
    DAT_04566134 = 1;
    method = extraout_x1;
  }
  pSVar2 = (__this->fields).FLADBMFBNIH;
  if ((FOKJBDHLIMG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FOKJBDHLIMG_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = FOKJBDHLIMG_<>c_TypeInfo->static_fields->__9__14_0;
  if (pSVar3 == (System_Action_HEFOANCOHDC__o *)0x0) {
    if ((FOKJBDHLIMG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FOKJBDHLIMG_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_HEFOANCOHDC__o *)thunk_FUN_01bda818(System_Action<HEFOANCOHDC>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &FOKJBDHLIMG_<>c_TypeInfo->static_fields->__9__14_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (pSVar2 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)pSVar2,(System_Action_T__o *)pSVar3,
               Method_System_Collections_Generic_List<HEFOANCOHDC>_ForEach__);
    pSVar2 = (__this->fields).CNLHOAHDHCF;
    if ((FOKJBDHLIMG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = FOKJBDHLIMG_<>c_TypeInfo->static_fields->__9__14_1;
    if (pSVar3 == (System_Action_HEFOANCOHDC__o *)0x0) {
      if ((FOKJBDHLIMG_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = (System_Action_HEFOANCOHDC__o *)
               thunk_FUN_01bda818(System_Action<HEFOANCOHDC>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &FOKJBDHLIMG_<>c_TypeInfo->static_fields->__9__14_1;
      *ppSVar1 = pSVar3;
      thunk_FUN_01c20e04(ppSVar1,pSVar3);
    }
    if (pSVar2 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)pSVar2,(System_Action_T__o *)pSVar3,
                 Method_System_Collections_Generic_List<HEFOANCOHDC>_ForEach__);
      pSVar2 = (__this->fields).ODLBEHFGJJE;
      if ((FOKJBDHLIMG_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = FOKJBDHLIMG_<>c_TypeInfo->static_fields->__9__14_2;
      if (pSVar3 == (System_Action_HEFOANCOHDC__o *)0x0) {
        if ((FOKJBDHLIMG_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar3 = (System_Action_HEFOANCOHDC__o *)
                 thunk_FUN_01bda818(System_Action<HEFOANCOHDC>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar1 = &FOKJBDHLIMG_<>c_TypeInfo->static_fields->__9__14_2;
        *ppSVar1 = pSVar3;
        thunk_FUN_01c20e04(ppSVar1,pSVar3);
      }
      if (pSVar2 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)pSVar2,(System_Action_T__o *)pSVar3,
                   Method_System_Collections_Generic_List<HEFOANCOHDC>_ForEach__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x309FD50]
// FOKJBDHLIMG$$HNIHOIAMDPC @ RVA 0x309FD50

/* WARNING: Removing unreachable block (ram,0x031a008c) */

void FOKJBDHLIMG__HNIHOIAMDPC
               (FOKJBDHLIMG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  HEFOANCOHDC_o *__this_00;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar5;
  long lVar6;
  HEFOANCOHDC_array *pHVar7;
  ulong uVar8;
  int *piVar9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar10;
  
  if ((DAT_04566135 & 1) == 0) {
    FUN_01bab630(&HEFOANCOHDC_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Clear__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566135 = 1;
  }
  pSVar5 = (__this->fields).FLADBMFBNIH;
  if (pSVar5 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
       (plVar3 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method),
       plVar3 != (long *)0x0)) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0319fe9c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0319fe9c:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
          if (plVar3 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 == 0) goto LAB_031a0028;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_031a0010;
        }
        lVar6 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0319fefc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0319fefc:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
             ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB_00);
          }
        }
        __this_00 = (HEFOANCOHDC_o *)thunk_FUN_01bda818(HEFOANCOHDC_TypeInfo);
        HEFOANCOHDC___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        HEFOANCOHDC__HNIHOIAMDPC(__this_00,AHDGNOJPPIB_00,(MethodInfo *)0x0);
        CVar10 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
                 CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                           (false,(MethodInfo *)0x0);
        (__this_00->fields).JFMAEFOHLDF.fields = CVar10;
        lVar6 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
        pSVar5 = (__this->fields).FLADBMFBNIH;
        if (pSVar5 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pHVar7 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pHVar7 == (HEFOANCOHDC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar5->fields)._size;
        if (uVar2 < (uint)pHVar7->max_length) {
          (pSVar5->fields)._size = uVar2 + 1;
          pHVar7->m_Items[(int)uVar2] = __this_00;
          thunk_FUN_01c20e04(pHVar7->m_Items + (int)uVar2,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_031a0010:
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_031a0044;
    }
  }
LAB_031a0028:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_031a0044:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}


// ===== public HEFOANCOHDC OPHCGMGNFFO(string KGLJICLJHEL, int EPINGPGECOM = -1)  [RVA 0x30A0164]
// FOKJBDHLIMG$$OPHCGMGNFFO @ RVA 0x30A0164

HEFOANCOHDC_o *
FOKJBDHLIMG__OPHCGMGNFFO
          (FOKJBDHLIMG_o *__this,System_String_o *KGLJICLJHEL,int32_t EPINGPGECOM,MethodInfo *method
          )

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  HEFOANCOHDC_o *pHVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_01;
  
  if ((DAT_04566136 & 1) == 0) {
    FUN_01bab630(&Method_FOKJBDHLIMG_HLPNOAPFHNP_BIAGCPOFFKO__);
    FUN_01bab630(&FOKJBDHLIMG_HLPNOAPFHNP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Find__);
    FUN_01bab630(&System_Predicate<HEFOANCOHDC>_TypeInfo);
    DAT_04566136 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(FOKJBDHLIMG_HLPNOAPFHNP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(__this_00 + 1,KGLJICLJHEL);
    *(int32_t *)&__this_00[1].monitor = EPINGPGECOM;
    __this_01 = (__this->fields).CNLHOAHDHCF;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HEFOANCOHDC>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      pHVar1 = (HEFOANCOHDC_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_01,match,
                          Method_System_Collections_Generic_List<HEFOANCOHDC>_Find__);
      return pHVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public HEFOANCOHDC JMMDGEOBMOC(string KGLJICLJHEL)  [RVA 0x309F294]
// FOKJBDHLIMG$$JMMDGEOBMOC @ RVA 0x309F294

HEFOANCOHDC_o *
FOKJBDHLIMG__JMMDGEOBMOC(FOKJBDHLIMG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  System_String_o *__this_01;
  HEFOANCOHDC_o *pHVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566137 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    DAT_04566137 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).FLADBMFBNIH;
  if (__this_00 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    pHVar2 = (HEFOANCOHDC_o *)local_48.fields._current;
    if (!bVar1) {
      pHVar2 = (HEFOANCOHDC_o *)0x0;
      break;
    }
    if ((HEFOANCOHDC_o *)local_48.fields._current == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = ((HEFOANCOHDC_Fields *)((long)local_48.fields._current + 0x10))->JIJLBFGKNJK;
    if (__this_01 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__Equals(__this_01,KGLJICLJHEL,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
  return pHVar2;
}


// ===== private HEFOANCOHDC FMFCHMPPCBH(HEFOANCOHDC EIKFGOCCOIE, XmlNode AHDGNOJPPIB)  [RVA 0x309F3FC]
// FOKJBDHLIMG$$FMFCHMPPCBH @ RVA 0x309F3FC

HEFOANCOHDC_o *
FOKJBDHLIMG__FMFCHMPPCBH
          (FOKJBDHLIMG_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,System_Xml_XmlNode_o *AHDGNOJPPIB,
          MethodInfo *method)

{
  System_Xml_XmlNode_o *GHKNNCLBPEO;
  HEFOANCOHDC_o *pHVar1;
  
  if ((DAT_04566138 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    __this = (FOKJBDHLIMG_o *)FUN_01bab630(&StringLiteral_11030/*"RatingEvaluation"*/);
    DAT_04566138 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    GHKNNCLBPEO = (System_Xml_XmlNode_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_11876/*"Set"*/,
                             (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    __this = (FOKJBDHLIMG_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_11030/*"RatingEvaluation"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (GHKNNCLBPEO == (System_Xml_XmlNode_o *)0x0 && __this == (FOKJBDHLIMG_o *)0x0) {
      return EIKFGOCCOIE;
    }
    if (EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) {
      pHVar1 = HEFOANCOHDC__FAOBHLCDKJI
                         (EIKFGOCCOIE,GHKNNCLBPEO,(System_Xml_XmlNode_o *)__this,(MethodInfo *)0x0);
      return pHVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

