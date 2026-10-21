// TypeDefIndex 405
// Namespace: 
// public class BCGLDKLKKDA : NJLIJIPPKLD
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x38
//   private string <FPPMLHPNHAI>k__BackingField; // 0x40
//   private List<int> <FJCAMFHOJBB>k__BackingField; // 0x48
//   private bool <ANIPFJHPNNA>k__BackingField; // 0x50
//   private int <MDAJFAPLLOH>k__BackingField; // 0x54
//   private long <IFCCMDEDADL>k__BackingField; // 0x58
//   private List<FLCGGKEODNC> <JAONHHOBCKA>k__BackingField; // 0x60

// ===== public string KCHJCGEMCGE()  [RVA 0x3481CF4]
// BCGLDKLKKDA$$KCHJCGEMCGE @ RVA 0x3481CF4

System_String_o * BCGLDKLKKDA__KCHJCGEMCGE(BCGLDKLKKDA_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public void EHELOKHNFDE(bool CJNHFNHJHPE)  [RVA 0x3481CFC]
// BCGLDKLKKDA$$EHELOKHNFDE @ RVA 0x3481CFC

void BCGLDKLKKDA__EHELOKHNFDE(BCGLDKLKKDA_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 03581cfc to 03681d03 has its CatchHandler @ 03582c10 */
  (__this->fields)._ANIPFJHPNNA_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public List<FLCGGKEODNC> NEFOIHOHIOL()  [RVA 0x3481D08]
// BCGLDKLKKDA$$NEFOIHOHIOL @ RVA 0x3481D08

System_Collections_Generic_List_FLCGGKEODNC__o *
BCGLDKLKKDA__NEFOIHOHIOL(BCGLDKLKKDA_o *__this,MethodInfo *method)

{
                    /* try { // try from 03581d0c to 03681d13 has its CatchHandler @ 03582c1c */
  return (__this->fields)._JAONHHOBCKA_k__BackingField;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3481D10]
// BCGLDKLKKDA$$.ctor @ RVA 0x3481D10

void BCGLDKLKKDA___ctor(BCGLDKLKKDA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_List_int__o *pSVar3;
  System_Collections_Generic_List_FLCGGKEODNC__o *pSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *pSVar7;
  System_String_array *source;
  System_Func_string__int__o **ppSVar8;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_IEnumerable_TSource__o *collection;
  MethodInfo *method_00;
  System_Collections_Generic_List_int__o **ppSVar9;
  System_Func_string__int__o *selector;
  System_Collections_Generic_List_FLCGGKEODNC__o **ppSVar10;
  System_String_o **ppSVar11;
  System_String_o **ppSVar12;
  
                    /* try { // try from 03581d24 to 03681d2b has its CatchHandler @ 03582c38 */
                    /* try { // try from 03581d30 to 03681d37 has its CatchHandler @ 03582c30 */
                    /* try { // try from 03581d48 to 03681d4f has its CatchHandler @ 03582c54 */
                    /* try { // try from 03581d50 to 03681d63 has its CatchHandler @ 03582c2c */
  if ((DAT_04568387 & 1) == 0) {
                    /* try { // try from 03581d68 to 03681d73 has its CatchHandler @ 03582bf0 */
    FUN_01bab630(&Method_System_Linq_Enumerable_Distinct<int>__);
                    /* try { // try from 03581d74 to 03681d8f has its CatchHandler @ 03582d18 */
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<string,_int>__);
    FUN_01bab630(&System_Func<string,_int>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
                    /* try { // try from 03581d9c to 03681da3 has its CatchHandler @ 03582bf4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>__ctor__);
                    /* try { // try from 03581dac to 03681db3 has its CatchHandler @ 03582bfc */
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<FLCGGKEODNC>_TypeInfo);
                    /* try { // try from 03581dc4 to 03681dcb has its CatchHandler @ 03582c28 */
    FUN_01bab630(&string_TypeInfo);
                    /* try { // try from 03581dd0 to 03681dd7 has its CatchHandler @ 03582c40 */
    FUN_01bab630(&Method_BCGLDKLKKDA_<>c_FEGNDIMALAC__);
    FUN_01bab630(&BCGLDKLKKDA_<>c_TypeInfo);
                    /* try { // try from 03581de8 to 03681def has its CatchHandler @ 03582c00 */
    FUN_01bab630(&StringLiteral_7350/*"ImageURLHash"*/);
                    /* try { // try from 03581df0 to 03681e03 has its CatchHandler @ 03582c18 */
    FUN_01bab630(&StringLiteral_13826/*"Title"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* try { // try from 03581e08 to 03681e13 has its CatchHandler @ 03582c20 */
    FUN_01bab630(&StringLiteral_14607/*"Url"*/);
                    /* try { // try from 03581e14 to 03681e2f has its CatchHandler @ 03582d14 */
    FUN_01bab630(&StringLiteral_7349/*"ImageURL"*/);
    FUN_01bab630(&StringLiteral_12302/*"SpenderTypeID"*/);
    FUN_01bab630(&StringLiteral_7230/*"ID"*/);
                    /* try { // try from 03581e3c to 03681e43 has its CatchHandler @ 03582be8 */
    DAT_04568387 = 1;
  }
                    /* try { // try from 03581e4c to 03681e53 has its CatchHandler @ 03582c48 */
  ppSVar11 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
  *ppSVar11 = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(ppSVar11);
                    /* try { // try from 03581e64 to 03681e6b has its CatchHandler @ 03582bf8 */
  ppSVar12 = &(__this->fields)._FPPMLHPNHAI_k__BackingField;
  *ppSVar12 = string_TypeInfo->static_fields->Empty;
                    /* try { // try from 03581e70 to 03681e77 has its CatchHandler @ 03582c4c */
  thunk_FUN_01c20e04(ppSVar12);
  pSVar3 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
                    /* try { // try from 03581e88 to 03681e8f has its CatchHandler @ 03582c08 */
  System_Collections_Generic_List<int>___ctor
            (pSVar3,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar9 = &(__this->fields)._FJCAMFHOJBB_k__BackingField;
                    /* try { // try from 03581e90 to 03681ea3 has its CatchHandler @ 03582c04 */
  *ppSVar9 = pSVar3;
  thunk_FUN_01c20e04(ppSVar9,pSVar3);
  (__this->fields)._IFCCMDEDADL_k__BackingField = -1;
                    /* try { // try from 03581ea8 to 03681eb3 has its CatchHandler @ 03582c3c */
  pSVar4 = (System_Collections_Generic_List_FLCGGKEODNC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<FLCGGKEODNC>_TypeInfo);
                    /* try { // try from 03581eb4 to 03681ebf has its CatchHandler @ 03582bac */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<FLCGGKEODNC>__ctor__);
  ppSVar10 = &(__this->fields)._JAONHHOBCKA_k__BackingField;
  *ppSVar10 = pSVar4;
  thunk_FUN_01c20e04(ppSVar10,pSVar4);
                    /* try { // try from 03581ed0 to 03681ed7 has its CatchHandler @ 03582b84 */
  NJLIJIPPKLD___ctor((NJLIJIPPKLD_o *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03581ee0 to 03681ee7 has its CatchHandler @ 03582b8c */
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03581ef8 to 03681eff has its CatchHandler @ 03582b98 */
                    /* try { // try from 03581f04 to 03681f0b has its CatchHandler @ 03582ba0 */
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_13826/*"Title"*/,(MethodInfo *)0x0);
                    /* try { // try from 03581f1c to 03681f23 has its CatchHandler @ 03582bb8 */
      pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
                    /* try { // try from 03581f24 to 03681f37 has its CatchHandler @ 03582b64 */
      *ppSVar12 = pSVar7;
      thunk_FUN_01c20e04(ppSVar12,pSVar7);
                    /* try { // try from 03581f3c to 03681f47 has its CatchHandler @ 03582b90 */
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03581f48 to 03681f63 has its CatchHandler @ 03582d10 */
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
                    /* try { // try from 03581f70 to 03681f77 has its CatchHandler @ 03582bd8 */
        *ppSVar11 = pSVar7;
        thunk_FUN_01c20e04(ppSVar11,pSVar7);
                    /* try { // try from 03581f80 to 03681f87 has its CatchHandler @ 03582b6c */
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03581f98 to 03681f9f has its CatchHandler @ 03582bd4 */
                    /* try { // try from 03581fa4 to 03681fab has its CatchHandler @ 03582bd0 */
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_14607/*"Url"*/,(MethodInfo *)0x0);
                    /* try { // try from 03581fbc to 03681fc3 has its CatchHandler @ 03582b80 */
          pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                             (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
                    /* try { // try from 03581fc4 to 03681fd7 has its CatchHandler @ 03582bb4 */
          (__this->fields).super._HOHLBKMCIDD_k__BackingField = pSVar7;
          thunk_FUN_01c20e04();
                    /* try { // try from 03581fdc to 03681fe7 has its CatchHandler @ 03582bc4 */
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03581fe8 to 03681ff3 has its CatchHandler @ 03582b9c */
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_7349/*"ImageURL"*/,(MethodInfo *)0x0);
                    /* try { // try from 03582004 to 0368200b has its CatchHandler @ 03582bc0 */
            pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                               (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
                    /* try { // try from 03582014 to 0368201b has its CatchHandler @ 03582ba8 */
            (__this->fields).super._FEKJKEFIKEK_k__BackingField = pSVar7;
            thunk_FUN_01c20e04();
                    /* try { // try from 0358202c to 03682033 has its CatchHandler @ 03582b78 */
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03582038 to 0368203f has its CatchHandler @ 03582bdc */
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_7350/*"ImageURLHash"*/,(MethodInfo *)0x0);
                    /* try { // try from 03582050 to 03682057 has its CatchHandler @ 03582b68 */
              pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03582058 to 0368206b has its CatchHandler @ 03582b70 */
              (__this->fields).super._HFPMHKHBAEF_k__BackingField = pSVar7;
              thunk_FUN_01c20e04();
                    /* try { // try from 03582070 to 0368207b has its CatchHandler @ 03582b7c */
              pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
                    /* try { // try from 0358207c to 03682087 has its CatchHandler @ 03582b88 */
              if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar5,StringLiteral_7230/*"ID"*/,(MethodInfo *)0x0);
                    /* try { // try from 03582098 to 0368209f has its CatchHandler @ 03582b74 */
                iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
                (__this->fields)._MDAJFAPLLOH_k__BackingField = iVar2;
                    /* try { // try from 035820a8 to 036820af has its CatchHandler @ 03582bbc */
                (__this->fields)._ANIPFJHPNNA_k__BackingField = false;
                (__this->fields).super.GCEEKJNKHLE = false;
                pSVar4 = BCGLDKLKKDA__ECJKKKIHGHI(AHDGNOJPPIB,method_00);
                (__this->fields)._JAONHHOBCKA_k__BackingField = pSVar4;
                    /* try { // try from 035820c0 to 036820c7 has its CatchHandler @ 03582bb0 */
                thunk_FUN_01c20e04(ppSVar10,pSVar4);
                    /* try { // try from 035820cc to 036820d3 has its CatchHandler @ 03582ba4 */
                pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                         (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (AHDGNOJPPIB,
                                    (AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 035820e4 to 036820eb has its CatchHandler @ 03582b08 */
                    /* try { // try from 035820ec to 036820ff has its CatchHandler @ 03582b2c */
                  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar5,StringLiteral_12302/*"SpenderTypeID"*/,(MethodInfo *)0x0);
                  pSVar7 = EIABCPKDEBD__JPKEHIBGOEM
                                     (pSVar6,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0
                                     );
                    /* try { // try from 03582104 to 0368210f has its CatchHandler @ 03582b20 */
                  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar7,(MethodInfo *)0x0);
                    /* try { // try from 03582110 to 0368212b has its CatchHandler @ 03582d0c */
                  if (bVar1) {
                    return;
                  }
                  if (pSVar7 != (System_String_o *)0x0) {
                    pSVar3 = *ppSVar9;
                    /* try { // try from 03582138 to 0368213f has its CatchHandler @ 03582b48 */
                    source = System_String__Split(pSVar7,0x2c,1,(MethodInfo *)0x0);
                    /* try { // try from 03582148 to 0368214f has its CatchHandler @ 03582b40 */
                    if ((BCGLDKLKKDA_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03582160 to 03682167 has its CatchHandler @ 03582b34 */
                      thunk_FUN_01ba7564(BCGLDKLKKDA_<>c_TypeInfo);
                    }
                    /* try { // try from 0358216c to 03682173 has its CatchHandler @ 03582b04 */
                    selector = BCGLDKLKKDA_<>c_TypeInfo->static_fields->__9__28_0;
                    if (selector == (System_Func_string__int__o *)0x0) {
                      if ((BCGLDKLKKDA_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03582184 to 0368218b has its CatchHandler @ 03582b54 */
                        thunk_FUN_01ba7564(BCGLDKLKKDA_<>c_TypeInfo);
                      }
                    /* try { // try from 0358218c to 0368219f has its CatchHandler @ 03582b0c */
                      selector = (System_Func_string__int__o *)
                                 thunk_FUN_01bda818(System_Func<string,_int>_TypeInfo);
                    /* try { // try from 035821a4 to 036821af has its CatchHandler @ 03582b38 */
                    /* try { // try from 035821b8 to 036821bf has its CatchHandler @ 03582b30 */
                      System_Func<object,_int>___ctor();
                      ppSVar8 = &BCGLDKLKKDA_<>c_TypeInfo->static_fields->__9__28_0;
                      *ppSVar8 = selector;
                    /* try { // try from 035821d0 to 036821d7 has its CatchHandler @ 03582b3c */
                      thunk_FUN_01c20e04(ppSVar8,selector);
                    }
                    /* try { // try from 035821dc to 036821e3 has its CatchHandler @ 03582b18 */
                    source_00 = System_Linq_Enumerable__Select<object,_int>
                                          ((System_Collections_Generic_IEnumerable_TSource__o *)
                                           source,(System_Func_TSource__TResult__o *)selector,
                                           Method_System_Linq_Enumerable_Select<string,_int>__);
                    /* try { // try from 035821f4 to 036821fb has its CatchHandler @ 03582b14 */
                    collection = System_Linq_Enumerable__Distinct<int>
                                           ((System_Collections_Generic_IEnumerable_TSource__o *)
                                            source_00,Method_System_Linq_Enumerable_Distinct<int>__)
                    ;
                    /* try { // try from 035821fc to 0368220f has its CatchHandler @ 03582af8 */
                    if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
                    /* try { // try from 03582210 to 0368222b has its CatchHandler @ 03582d08 */
                      System_Collections_Generic_List<int>__AddRange
                                (pSVar3,(System_Collections_Generic_IEnumerable_T__o *)collection,
                                 Method_System_Collections_Generic_List<int>_AddRange__);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(BCGLDKLKKDA HBHPFKJMGCK)  [RVA 0x348296C]
// BCGLDKLKKDA$$.ctor @ RVA 0x348296C

void BCGLDKLKKDA___ctor(BCGLDKLKKDA_o *__this,BCGLDKLKKDA_o *HBHPFKJMGCK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *HBHPFKJMGCK_00;
  bool bVar3;
  System_Collections_Generic_List_int__o *pSVar4;
  System_Collections_Generic_List_int__o **ppSVar5;
  System_Collections_Generic_List_FLCGGKEODNC__o *pSVar6;
  FLCGGKEODNC_o *__this_00;
  FLCGGKEODNC_array *pFVar7;
  System_Collections_Generic_List_FLCGGKEODNC__o **ppSVar8;
  System_String_o **ppSVar9;
  System_String_o **ppSVar10;
  UnityEngine_Sprite_o **ppUVar11;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  
                    /* try { // try from 0358296c to 0368296f has its CatchHandler @ 03582bc8 */
                    /* try { // try from 03582970 to 03682973 has its CatchHandler @ 03582b94 */
                    /* try { // try from 03582974 to 03682977 has its CatchHandler @ 03582b60 */
                    /* try { // try from 03582978 to 0368297b has its CatchHandler @ 03582b5c */
                    /* try { // try from 0358297c to 0368297f has its CatchHandler @ 03582b50 */
                    /* try { // try from 03582980 to 03682983 has its CatchHandler @ 03582ac8 */
                    /* try { // try from 03582984 to 03682987 has its CatchHandler @ 03582ab8 */
                    /* try { // try from 03582988 to 0368298b has its CatchHandler @ 03582ab0 */
                    /* try { // try from 0358298c to 0368298f has its CatchHandler @ 03582a8c */
                    /* try { // try from 03582990 to 03682993 has its CatchHandler @ 03582a6c */
                    /* try { // try from 03582994 to 03682997 has its CatchHandler @ 03582a30 */
                    /* try { // try from 03582998 to 0368299b has its CatchHandler @ 03582a14 */
                    /* try { // try from 0358299c to 0368299f has its CatchHandler @ 03582a10 */
                    /* try { // try from 035829a0 to 036829a3 has its CatchHandler @ 03582a0c */
                    /* try { // try from 035829a4 to 036829a7 has its CatchHandler @ 03582a00 */
                    /* try { // try from 035829a8 to 036829ab has its CatchHandler @ 035829f0 */
                    /* try { // try from 035829ac to 036829af has its CatchHandler @ 035829e0 */
                    /* try { // try from 035829b0 to 036829b3 has its CatchHandler @ 035829d8 */
                    /* try { // try from 035829b4 to 036829b7 has its CatchHandler @ 035829d4 */
                    /* try { // try from 035829b8 to 036829bb has its CatchHandler @ 03581488 */
                    /* try { // try from 035829bc to 036829bf has its CatchHandler @ 035829c8 */
  if ((DAT_04568388 & 1) == 0) {
                    /* try { // try from 035829c0 to 03682d3f has its CatchHandler @ 03581488 */
                    /* catch() { ... } // from try @ 035829bc with catch @ 035829c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_Dispose__);
                    /* catch() { ... } // from try @ 035826d8 with catch @ 035829cc */
                    /* catch() { ... } // from try @ 03582884 with catch @ 035829d0 */
                    /* catch() { ... } // from try @ 035829b4 with catch @ 035829d4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_MoveNext__);
                    /* catch() { ... } // from try @ 035829b0 with catch @ 035829d8 */
                    /* catch() { ... } // from try @ 03582864 with catch @ 035829dc */
                    /* catch() { ... } // from try @ 035829ac with catch @ 035829e0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_get_Current__);
                    /* catch() { ... } // from try @ 035828a8 with catch @ 035829e4 */
                    /* catch() { ... } // from try @ 03582824 with catch @ 035829e8 */
                    /* catch() { ... } // from try @ 03582734 with catch @ 035829ec */
    FUN_01bab630(&FLCGGKEODNC_TypeInfo);
                    /* catch() { ... } // from try @ 035829a8 with catch @ 035829f0 */
                    /* catch() { ... } // from try @ 03582840 with catch @ 035829f4 */
                    /* catch() { ... } // from try @ 03582800 with catch @ 035829f8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_AddRange__);
                    /* catch() { ... } // from try @ 035827d4 with catch @ 035829fc */
                    /* catch() { ... } // from try @ 035829a4 with catch @ 03582a00 */
                    /* catch() { ... } // from try @ 03582798 with catch @ 03582a04 */
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_Add__);
                    /* catch() { ... } // from try @ 03582700 with catch @ 03582a08 */
                    /* catch() { ... } // from try @ 035829a0 with catch @ 03582a0c */
                    /* catch() { ... } // from try @ 0358299c with catch @ 03582a10 */
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_GetEnumerator__);
                    /* catch() { ... } // from try @ 03582998 with catch @ 03582a14 */
                    /* catch() { ... } // from try @ 035827bc with catch @ 03582a18 */
                    /* catch() { ... } // from try @ 03582748 with catch @ 03582a1c */
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
                    /* catch() { ... } // from try @ 03582684 with catch @ 03582a20 */
                    /* catch() { ... } // from try @ 0358254c with catch @ 03582a24 */
                    /* catch() { ... } // from try @ 0358255c with catch @ 03582a28 */
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>__ctor__);
                    /* catch() { ... } // from try @ 03582610 with catch @ 03582a2c */
                    /* catch() { ... } // from try @ 03582994 with catch @ 03582a30 */
                    /* catch() { ... } // from try @ 035825f8 with catch @ 03582a34 */
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
                    /* catch() { ... } // from try @ 03582670 with catch @ 03582a38 */
                    /* catch() { ... } // from try @ 03582634 with catch @ 03582a3c */
                    /* catch() { ... } // from try @ 03582598 with catch @ 03582a40 */
    FUN_01bab630(&System_Collections_Generic_List<FLCGGKEODNC>_TypeInfo);
                    /* catch() { ... } // from try @ 0358279c with catch @ 03582a44 */
                    /* catch() { ... } // from try @ 035825b8 with catch @ 03582a48 */
                    /* catch() { ... } // from try @ 03582580 with catch @ 03582a4c */
    FUN_01bab630(&string_TypeInfo);
                    /* catch() { ... } // from try @ 03582574 with catch @ 03582a50 */
                    /* catch() { ... } // from try @ 035825e8 with catch @ 03582a54 */
    DAT_04568388 = 1;
  }
                    /* catch() { ... } // from try @ 03582760 with catch @ 03582a58 */
                    /* catch() { ... } // from try @ 035825a0 with catch @ 03582a5c */
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
                    /* catch() { ... } // from try @ 035825c4 with catch @ 03582a60 */
  local_68.fields._current = (Il2CppObject *)0x0;
                    /* catch() { ... } // from try @ 0358261c with catch @ 03582a64 */
                    /* catch() { ... } // from try @ 0358263c with catch @ 03582a68 */
                    /* catch() { ... } // from try @ 03582990 with catch @ 03582a6c */
  ppSVar10 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
                    /* catch() { ... } // from try @ 03582518 with catch @ 03582a70 */
  *ppSVar10 = string_TypeInfo->static_fields->Empty;
                    /* catch() { ... } // from try @ 03582654 with catch @ 03582a74 */
                    /* catch() { ... } // from try @ 03582660 with catch @ 03582a78 */
  thunk_FUN_01c20e04(ppSVar10);
                    /* catch() { ... } // from try @ 03582414 with catch @ 03582a7c */
                    /* catch() { ... } // from try @ 03582310 with catch @ 03582a80 */
                    /* catch() { ... } // from try @ 03582448 with catch @ 03582a84 */
                    /* catch() { ... } // from try @ 03582500 with catch @ 03582a88 */
  ppSVar9 = &(__this->fields)._FPPMLHPNHAI_k__BackingField;
                    /* catch() { ... } // from try @ 0358298c with catch @ 03582a8c */
  *ppSVar9 = string_TypeInfo->static_fields->Empty;
                    /* catch() { ... } // from try @ 0358243c with catch @ 03582a90 */
                    /* catch() { ... } // from try @ 03582468 with catch @ 03582a94 */
  thunk_FUN_01c20e04(ppSVar9);
                    /* catch() { ... } // from try @ 03582330 with catch @ 03582a98 */
                    /* catch() { ... } // from try @ 035823a4 with catch @ 03582a9c */
  pSVar4 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
                    /* catch() { ... } // from try @ 03582480 with catch @ 03582aa0 */
                    /* catch() { ... } // from try @ 035824ac with catch @ 03582aa4 */
                    /* catch() { ... } // from try @ 03582354 with catch @ 03582aa8 */
  System_Collections_Generic_List<int>___ctor
            (pSVar4,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar5 = &(__this->fields)._FJCAMFHOJBB_k__BackingField;
                    /* catch() { ... } // from try @ 03582380 with catch @ 03582aac */
                    /* catch() { ... } // from try @ 03582988 with catch @ 03582ab0 */
  *ppSVar5 = pSVar4;
                    /* catch() { ... } // from try @ 035824d4 with catch @ 03582ab4 */
                    /* catch() { ... } // from try @ 03582984 with catch @ 03582ab8 */
  thunk_FUN_01c20e04(ppSVar5,pSVar4);
                    /* catch() { ... } // from try @ 035823bc with catch @ 03582abc */
                    /* catch() { ... } // from try @ 0358248c with catch @ 03582ac0 */
  (__this->fields)._IFCCMDEDADL_k__BackingField = -1;
                    /* catch() { ... } // from try @ 035824bc with catch @ 03582ac4 */
                    /* catch() { ... } // from try @ 03582980 with catch @ 03582ac8 */
  pSVar6 = (System_Collections_Generic_List_FLCGGKEODNC__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<FLCGGKEODNC>_TypeInfo);
                    /* catch() { ... } // from try @ 035823dc with catch @ 03582acc */
                    /* catch() { ... } // from try @ 03582304 with catch @ 03582ad0 */
                    /* catch() { ... } // from try @ 03582460 with catch @ 03582ad4 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,
             Method_System_Collections_Generic_List<FLCGGKEODNC>__ctor__);
  ppSVar8 = &(__this->fields)._JAONHHOBCKA_k__BackingField;
                    /* catch() { ... } // from try @ 035823c4 with catch @ 03582ad8 */
                    /* catch() { ... } // from try @ 035824e0 with catch @ 03582adc */
  *ppSVar8 = pSVar6;
                    /* catch() { ... } // from try @ 03582398 with catch @ 03582ae0 */
                    /* catch() { ... } // from try @ 03582370 with catch @ 03582ae4 */
                    /* catch() { ... } // from try @ 03582348 with catch @ 03582ae8 */
  thunk_FUN_01c20e04(ppSVar8,pSVar6);
                    /* catch() { ... } // from try @ 03582328 with catch @ 03582aec */
                    /* catch() { ... } // from try @ 03582424 with catch @ 03582af0 */
                    /* catch() { ... } // from try @ 035824f8 with catch @ 03582af4 */
  NJLIJIPPKLD___ctor((NJLIJIPPKLD_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035821fc with catch @ 03582af8 */
  if (HBHPFKJMGCK != (BCGLDKLKKDA_o *)0x0) {
                    /* catch() { ... } // from try @ 0358226c with catch @ 03582afc */
                    /* catch() { ... } // from try @ 03582248 with catch @ 03582b00 */
                    /* catch() { ... } // from try @ 0358216c with catch @ 03582b04 */
    (__this->fields)._COIPKAKHDFP_k__BackingField =
         (HBHPFKJMGCK->fields)._COIPKAKHDFP_k__BackingField;
                    /* catch() { ... } // from try @ 035820e4 with catch @ 03582b08 */
    thunk_FUN_01c20e04(ppSVar10);
                    /* catch() { ... } // from try @ 0358218c with catch @ 03582b0c */
                    /* catch() { ... } // from try @ 035822dc with catch @ 03582b10 */
                    /* catch() { ... } // from try @ 035821f4 with catch @ 03582b14 */
    (__this->fields).super._HOHLBKMCIDD_k__BackingField =
         (HBHPFKJMGCK->fields).super._HOHLBKMCIDD_k__BackingField;
                    /* catch() { ... } // from try @ 035821dc with catch @ 03582b18 */
    thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 035822a4 with catch @ 03582b1c */
                    /* catch() { ... } // from try @ 03582104 with catch @ 03582b20 */
                    /* catch() { ... } // from try @ 035822ec with catch @ 03582b24 */
    (__this->fields).super._FEKJKEFIKEK_k__BackingField =
         (HBHPFKJMGCK->fields).super._FEKJKEFIKEK_k__BackingField;
                    /* catch() { ... } // from try @ 03582260 with catch @ 03582b28 */
    thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 035820ec with catch @ 03582b2c */
                    /* catch() { ... } // from try @ 035821b8 with catch @ 03582b30 */
                    /* catch() { ... } // from try @ 03582160 with catch @ 03582b34 */
    (__this->fields).super._HFPMHKHBAEF_k__BackingField =
         (HBHPFKJMGCK->fields).super._HFPMHKHBAEF_k__BackingField;
                    /* catch() { ... } // from try @ 035821a4 with catch @ 03582b38 */
    thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 035821d0 with catch @ 03582b3c */
    ppUVar11 = &(__this->fields).super.CPJFEHFANBC;
                    /* catch() { ... } // from try @ 03582148 with catch @ 03582b40 */
                    /* catch() { ... } // from try @ 0358228c with catch @ 03582b44 */
    *ppUVar11 = (HBHPFKJMGCK->fields).super.CPJFEHFANBC;
                    /* catch() { ... } // from try @ 03582138 with catch @ 03582b48 */
                    /* catch() { ... } // from try @ 03582284 with catch @ 03582b4c */
    thunk_FUN_01c20e04(ppUVar11);
                    /* catch() { ... } // from try @ 0358297c with catch @ 03582b50 */
                    /* catch() { ... } // from try @ 03582184 with catch @ 03582b54 */
                    /* catch() { ... } // from try @ 03582238 with catch @ 03582b58 */
    (__this->fields)._FPPMLHPNHAI_k__BackingField =
         (HBHPFKJMGCK->fields)._FPPMLHPNHAI_k__BackingField;
                    /* catch() { ... } // from try @ 03582978 with catch @ 03582b5c */
    thunk_FUN_01c20e04(ppSVar9);
                    /* catch() { ... } // from try @ 03582974 with catch @ 03582b60 */
    pSVar4 = (__this->fields)._FJCAMFHOJBB_k__BackingField;
                    /* catch() { ... } // from try @ 03581f24 with catch @ 03582b64 */
    if (pSVar4 != (System_Collections_Generic_List_int__o *)0x0) {
                    /* catch() { ... } // from try @ 03582050 with catch @ 03582b68 */
                    /* catch() { ... } // from try @ 03581f80 with catch @ 03582b6c */
                    /* catch() { ... } // from try @ 03582058 with catch @ 03582b70 */
                    /* catch() { ... } // from try @ 03582098 with catch @ 03582b74 */
                    /* catch() { ... } // from try @ 0358202c with catch @ 03582b78 */
      System_Collections_Generic_List<int>__AddRange
                (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)
                        (HBHPFKJMGCK->fields)._FJCAMFHOJBB_k__BackingField,
                 Method_System_Collections_Generic_List<int>_AddRange__);
                    /* catch() { ... } // from try @ 03582070 with catch @ 03582b7c */
                    /* catch() { ... } // from try @ 03581fbc with catch @ 03582b80 */
      (__this->fields)._ANIPFJHPNNA_k__BackingField =
           (HBHPFKJMGCK->fields)._ANIPFJHPNNA_k__BackingField;
                    /* catch() { ... } // from try @ 03581ed0 with catch @ 03582b84 */
                    /* catch() { ... } // from try @ 0358207c with catch @ 03582b88 */
      (__this->fields).super.GCEEKJNKHLE = (HBHPFKJMGCK->fields).super.GCEEKJNKHLE;
                    /* catch() { ... } // from try @ 03581ee0 with catch @ 03582b8c */
                    /* catch() { ... } // from try @ 03581f3c with catch @ 03582b90 */
      (__this->fields)._MDAJFAPLLOH_k__BackingField =
           (HBHPFKJMGCK->fields)._MDAJFAPLLOH_k__BackingField;
                    /* catch() { ... } // from try @ 03582970 with catch @ 03582b94 */
                    /* catch() { ... } // from try @ 03581ef8 with catch @ 03582b98 */
      (__this->fields)._IFCCMDEDADL_k__BackingField =
           (HBHPFKJMGCK->fields)._IFCCMDEDADL_k__BackingField;
                    /* catch() { ... } // from try @ 03581fe8 with catch @ 03582b9c */
      pSVar6 = (HBHPFKJMGCK->fields)._JAONHHOBCKA_k__BackingField;
                    /* catch() { ... } // from try @ 03581f04 with catch @ 03582ba0 */
      if (pSVar6 != (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
                    /* catch() { ... } // from try @ 035820cc with catch @ 03582ba4 */
                    /* catch() { ... } // from try @ 03582014 with catch @ 03582ba8 */
                    /* catch() { ... } // from try @ 03581eb4 with catch @ 03582bac */
                    /* catch() { ... } // from try @ 035820c0 with catch @ 03582bb0 */
                    /* catch() { ... } // from try @ 03581fc4 with catch @ 03582bb4 */
                    /* catch() { ... } // from try @ 03581f1c with catch @ 03582bb8 */
                    /* catch() { ... } // from try @ 035820a8 with catch @ 03582bbc */
                    /* catch() { ... } // from try @ 03582004 with catch @ 03582bc0 */
                    /* catch() { ... } // from try @ 03581fdc with catch @ 03582bc4 */
                    /* catch() { ... } // from try @ 0358296c with catch @ 03582bc8 */
                    /* catch() { ... } // from try @ 03582968 with catch @ 03582bcc */
                    /* catch() { ... } // from try @ 03581fa4 with catch @ 03582bd0 */
                    /* catch() { ... } // from try @ 03581f98 with catch @ 03582bd4 */
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_68,(System_Collections_Generic_List_object__o *)pSVar6,
                   Method_System_Collections_Generic_List<FLCGGKEODNC>_GetEnumerator__);
        while( true ) {
                    /* catch() { ... } // from try @ 03581f70 with catch @ 03582bd8 */
                    /* catch() { ... } // from try @ 03582038 with catch @ 03582bdc */
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_68,
                             Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_MoveNext__
                            );
          HBHPFKJMGCK_00 = local_68.fields._current;
                    /* catch() { ... } // from try @ 03582964 with catch @ 03582be4 */
          if (!bVar3) {
                    /* catch() { ... } // from try @ 03581c20 with catch @ 03582c6c */
                    /* catch() { ... } // from try @ 03581bfc with catch @ 03582c70 */
                    /* catch() { ... } // from try @ 03582950 with catch @ 03582c74 */
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_68,
                       Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_Dispose__);
                    /* catch() { ... } // from try @ 03581ba0 with catch @ 03582c78 */
                    /* catch() { ... } // from try @ 03581b34 with catch @ 03582c7c */
                    /* catch() { ... } // from try @ 03581b5c with catch @ 03582c80 */
                    /* catch() { ... } // from try @ 03581c40 with catch @ 03582c84 */
                    /* catch() { ... } // from try @ 0358294c with catch @ 03582c88 */
                    /* catch() { ... } // from try @ 03581afc with catch @ 03582c8c */
                    /* catch() { ... } // from try @ 03581c28 with catch @ 03582c90 */
            return;
          }
                    /* catch() { ... } // from try @ 03581e3c with catch @ 03582be8 */
                    /* catch() { ... } // from try @ 03581cb4 with catch @ 03582bec */
          pSVar6 = *ppSVar8;
                    /* catch() { ... } // from try @ 03581d68 with catch @ 03582bf0 */
                    /* catch() { ... } // from try @ 03581d9c with catch @ 03582bf4 */
          __this_00 = (FLCGGKEODNC_o *)thunk_FUN_01bda818(FLCGGKEODNC_TypeInfo);
                    /* catch() { ... } // from try @ 03581e64 with catch @ 03582bf8 */
                    /* catch() { ... } // from try @ 03581dac with catch @ 03582bfc */
                    /* catch() { ... } // from try @ 03581de8 with catch @ 03582c00 */
                    /* catch() { ... } // from try @ 03581e90 with catch @ 03582c04 */
          FLCGGKEODNC___ctor(__this_00,(FLCGGKEODNC_o *)HBHPFKJMGCK_00,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<FLCGGKEODNC>_Add__;
                    /* catch() { ... } // from try @ 03581e88 with catch @ 03582c08 */
          if (pSVar6 == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) break;
                    /* catch() { ... } // from try @ 03581cd4 with catch @ 03582c0c */
                    /* catch() { ... } // from try @ 03581cfc with catch @ 03582c10 */
          pFVar7 = (pSVar6->fields)._items;
                    /* catch() { ... } // from try @ 03581cbc with catch @ 03582c14 */
                    /* catch() { ... } // from try @ 03581df0 with catch @ 03582c18 */
                    /* catch() { ... } // from try @ 03581d0c with catch @ 03582c1c */
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
                    /* catch() { ... } // from try @ 03581e08 with catch @ 03582c20 */
          if (pFVar7 == (FLCGGKEODNC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03581ab8 with catch @ 03582c98 */
            FUN_01bab8c8();
          }
                    /* catch() { ... } // from try @ 03582960 with catch @ 03582c24 */
          uVar1 = (pSVar6->fields)._size;
                    /* catch() { ... } // from try @ 03581dc4 with catch @ 03582c28 */
                    /* catch() { ... } // from try @ 03581d50 with catch @ 03582c2c */
                    /* catch() { ... } // from try @ 03581d30 with catch @ 03582c30 */
          if (uVar1 < (uint)pFVar7->max_length) {
                    /* catch() { ... } // from try @ 0358295c with catch @ 03582c34 */
                    /* catch() { ... } // from try @ 03581d24 with catch @ 03582c38 */
                    /* catch() { ... } // from try @ 03581ea8 with catch @ 03582c3c */
            (pSVar6->fields)._size = uVar1 + 1;
                    /* catch() { ... } // from try @ 03581dd0 with catch @ 03582c40 */
            pFVar7->m_Items[(int)uVar1] = __this_00;
                    /* catch() { ... } // from try @ 03581ce0 with catch @ 03582c44 */
                    /* catch() { ... } // from try @ 03581e4c with catch @ 03582c48 */
            thunk_FUN_01c20e04(pFVar7->m_Items + (int)uVar1,__this_00);
                    /* catch() { ... } // from try @ 03581e70 with catch @ 03582c4c */
          }
          else {
                    /* catch() { ... } // from try @ 03582958 with catch @ 03582c50 */
                    /* catch() { ... } // from try @ 03581d48 with catch @ 03582c54 */
                    /* catch() { ... } // from try @ 03581aa0 with catch @ 03582c58 */
                    /* catch() { ... } // from try @ 03581c4c with catch @ 03582c5c */
                    /* catch() { ... } // from try @ 03581ac4 with catch @ 03582c60 */
                    /* catch() { ... } // from try @ 03582954 with catch @ 03582c64 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    /* catch() { ... } // from try @ 03581c68 with catch @ 03582c68 */
          }
        }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03581b44 with catch @ 03582c94 */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03581b80 with catch @ 03582c9c */
  FUN_01bab8c8();
}


// ===== private void PEMJOKFFAMO(int CJNHFNHJHPE)  [RVA 0x3482D0C]
// BCGLDKLKKDA$$PEMJOKFFAMO @ RVA 0x3482D0C

void BCGLDKLKKDA__PEMJOKFFAMO(BCGLDKLKKDA_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03582110 with catch @ 03582d0c */
  (__this->fields)._MDAJFAPLLOH_k__BackingField = CJNHFNHJHPE;
                    /* catch() { ... } // from try @ 03581f48 with catch @ 03582d10 */
  return;
}


// ===== public bool JOGKAIEDLIO(string CJNHFNHJHPE)  [RVA 0x3482D14]
// BCGLDKLKKDA$$JOGKAIEDLIO @ RVA 0x3482D14

bool BCGLDKLKKDA__JOGKAIEDLIO(BCGLDKLKKDA_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  bool bVar3;
  System_Collections_Generic_List_FLCGGKEODNC__o *__this_00;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* catch() { ... } // from try @ 03581e14 with catch @ 03582d14 */
                    /* catch() { ... } // from try @ 03581d74 with catch @ 03582d18 */
                    /* catch() { ... } // from try @ 03581b08 with catch @ 03582d1c */
                    /* catch() { ... } // from try @ 03581bac with catch @ 03582d20 */
                    /* catch() { ... } // from try @ 03581a64 with catch @ 03582d24 */
                    /* catch() { ... } // from try @ 035819cc with catch @ 03582d28 */
  if ((DAT_04568389 & 1) == 0) {
                    /* try { // try from 03582d40 to 03682d43 has its CatchHandler @ 03582d50 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_MoveNext__);
                    /* catch() { ... } // from try @ 03582d40 with catch @ 03582d50 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_GetEnumerator__);
    DAT_04568389 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._JAONHHOBCKA_k__BackingField;
  if (__this_00 == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03582d90 to 03682db7 has its CatchHandler @ 03582dcc */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<FLCGGKEODNC>_GetEnumerator__);
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_MoveNext__);
    pIVar1 = local_48.fields._current;
    if (!bVar2) {
      iVar4 = 5;
      goto LAB_03582df0;
    }
                    /* try { // try from 03582db8 to 03682dc3 has its CatchHandler @ 03581488 */
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03582dc4 to 03682dcb has its CatchHandler @ 03582dcc */
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(local_48.fields._current[2].monitor,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03582d90 with catch @ 03582dcc
                       catch() { ... } // from try @ 03582dc4 with catch @ 03582dcc */
  } while ((bVar3) ||
          (bVar3 = System_String__op_Equality(pIVar1[2].monitor,CJNHFNHJHPE,(MethodInfo *)0x0),
          !bVar3));
  iVar4 = 4;
LAB_03582df0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<FLCGGKEODNC>_Dispose__);
  return bVar2 && iVar4 == 4;
}


// ===== public static List<FLCGGKEODNC> ECJKKKIHGHI(XmlNode JHMENEKPIBO)  [RVA 0x3482230]
// BCGLDKLKKDA$$ECJKKKIHGHI @ RVA 0x3482230

/* WARNING: Removing unreachable block (ram,0x03582804) */

System_Collections_Generic_List_FLCGGKEODNC__o *
BCGLDKLKKDA__ECJKKKIHGHI(System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  int32_t iVar7;
  System_Collections_Generic_List_FLCGGKEODNC__o *__this;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  long *plVar10;
  FLCGGKEODNC_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar11;
  System_Xml_XmlAttribute_o *pSVar12;
  System_String_o *pSVar13;
  System_String_o *GMLKIEHIOIA;
  undefined8 *puVar14;
  System_Collections_IEnumerator_c *pSVar15;
  FLCGGKEODNC_array *pFVar16;
  long lVar17;
  ulong uVar18;
  int32_t *piVar19;
  int *piVar20;
  undefined1 auVar21 [16];
  
  auVar21._8_8_ = method;
  auVar21._0_8_ = JHMENEKPIBO;
                    /* try { // try from 03582238 to 0368223f has its CatchHandler @ 03582b58 */
                    /* try { // try from 03582248 to 0368224f has its CatchHandler @ 03582b00 */
  if ((DAT_0456838a & 1) == 0) {
                    /* try { // try from 03582260 to 03682267 has its CatchHandler @ 03582b28 */
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<FBBNEILNOKK>__);
                    /* try { // try from 0358226c to 03682273 has its CatchHandler @ 03582afc */
    FUN_01bab630(&FLCGGKEODNC_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 03582284 to 0368228b has its CatchHandler @ 03582b4c */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 0358228c to 0368229f has its CatchHandler @ 03582b44 */
    FUN_01bab630(&LabelButton_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_Add__);
                    /* try { // try from 035822a4 to 036822af has its CatchHandler @ 03582b1c */
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>__ctor__);
                    /* try { // try from 035822b4 to 036822cf has its CatchHandler @ 03582d04 */
    FUN_01bab630(&System_Collections_Generic_List<FLCGGKEODNC>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4476/*"Color"*/);
    FUN_01bab630(&StringLiteral_12880/*"Text"*/);
                    /* try { // try from 035822dc to 036822e3 has its CatchHandler @ 03582b10 */
    FUN_01bab630(&StringLiteral_14607/*"Url"*/);
                    /* try { // try from 035822ec to 036822f3 has its CatchHandler @ 03582b24 */
    FUN_01bab630(&StringLiteral_4665/*"Control"*/);
    FUN_01bab630(&StringLiteral_11123/*"RedirectRaidShop"*/);
                    /* try { // try from 03582304 to 0368230b has its CatchHandler @ 03582ad0 */
    FUN_01bab630(&StringLiteral_11124/*"RedirectShop"*/);
                    /* try { // try from 03582310 to 03682317 has its CatchHandler @ 03582a80 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    auVar21 = FUN_01bab630(&StringLiteral_3622/*"BuyItem"*/);
                    /* try { // try from 03582328 to 0368232f has its CatchHandler @ 03582aec */
    DAT_0456838a = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03582330 to 03682343 has its CatchHandler @ 03582a98 */
    auVar21 = (*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                        (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    plVar10 = auVar21._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auVar21._8_8_;
    auVar21 = auVar5 << 0x40;
    if (plVar10 != (long *)0x0) {
                    /* try { // try from 03582348 to 03682353 has its CatchHandler @ 03582ae8 */
                    /* try { // try from 03582354 to 0368235f has its CatchHandler @ 03582aa8 */
      iVar7 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                    /* try { // try from 03582370 to 03682377 has its CatchHandler @ 03582ae4 */
      __this = (System_Collections_Generic_List_FLCGGKEODNC__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<FLCGGKEODNC>_TypeInfo);
                    /* try { // try from 03582380 to 03682387 has its CatchHandler @ 03582aac */
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)__this,iVar7,
                 Method_System_Collections_Generic_List<FLCGGKEODNC>__ctor__);
      pSVar8 = System_Xml_XmlNode__GetEnumerator(JHMENEKPIBO,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03582800 to 03682803 has its CatchHandler @ 035829f8 */
        FUN_01bab8c8();
      }
      do {
        pSVar15 = pSVar8->klass;
        uVar2._0_1_ = (pSVar15->_2).rank;
        uVar2._1_1_ = (pSVar15->_2).minimumAlignment;
        uVar18 = (ulong)uVar2;
        if (uVar18 != 0) {
                    /* try { // try from 035823dc to 036823e7 has its CatchHandler @ 03582acc */
          piVar19 = &((pSVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar9 = pSVar15->vtable + *piVar19;
              goto LAB_03582414;
            }
                    /* try { // try from 035823ec to 03682407 has its CatchHandler @ 03582d00 */
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,0)
        ;
LAB_03582414:
                    /* try { // try from 03582414 to 0368241b has its CatchHandler @ 03582a7c */
        uVar18 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
        if ((uVar18 & 1) == 0) {
                    /* try { // try from 03582734 to 0368273b has its CatchHandler @ 035829ec */
          plVar10 = (long *)thunk_FUN_01bda71c(pSVar8,System_IDisposable_TypeInfo);
          if (plVar10 == (long *)0x0) {
            return __this;
          }
                    /* try { // try from 03582748 to 03682753 has its CatchHandler @ 03582a1c */
          lVar17 = *plVar10;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 == 0) goto LAB_0358277c;
                    /* try { // try from 03582760 to 0368277f has its CatchHandler @ 03582a58 */
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_03582764;
        }
                    /* try { // try from 03582424 to 0368242b has its CatchHandler @ 03582af0 */
        pSVar15 = pSVar8->klass;
        uVar3._0_1_ = (pSVar15->_2).rank;
        uVar3._1_1_ = (pSVar15->_2).minimumAlignment;
        uVar18 = (ulong)uVar3;
        if (uVar18 != 0) {
          piVar19 = &((pSVar15->_1).interfaceOffsets)->offset;
          do {
                    /* try { // try from 0358243c to 03682443 has its CatchHandler @ 03582a90 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 03582468 to 0368247b has its CatchHandler @ 03582a94 */
              pVVar9 = pSVar15->vtable + (*piVar19 + 1);
              goto LAB_03582474;
            }
                    /* try { // try from 03582448 to 0368244f has its CatchHandler @ 03582a84 */
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,1)
        ;
                    /* try { // try from 03582460 to 03682467 has its CatchHandler @ 03582ad4 */
LAB_03582474:
        plVar10 = (long *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
                    /* try { // try from 03582480 to 0368248b has its CatchHandler @ 03582aa0 */
        if (plVar10 != (long *)0x0) {
                    /* try { // try from 0358248c to 03682497 has its CatchHandler @ 03582ac0 */
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035824ac to 036824b3 has its CatchHandler @ 03582aa4 */
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(System_Xml_XmlNode_c **)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(plVar10);
          }
        }
                    /* try { // try from 035824bc to 036824c3 has its CatchHandler @ 03582ac4 */
        __this_00 = (FLCGGKEODNC_o *)thunk_FUN_01bda818(FLCGGKEODNC_TypeInfo);
                    /* try { // try from 035824d4 to 036824db has its CatchHandler @ 03582ab4 */
        FLCGGKEODNC___ctor(__this_00,(MethodInfo *)0x0);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 035824e0 to 036824e7 has its CatchHandler @ 03582adc */
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 035824f8 to 036824ff has its CatchHandler @ 03582af4 */
                    /* try { // try from 03582500 to 03682513 has its CatchHandler @ 03582a88 */
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_12880/*"Text"*/,(MethodInfo *)0x0);
        pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar12,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 03582518 to 03682523 has its CatchHandler @ 03582a70 */
        if (__this_00 == (FLCGGKEODNC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (__this_00->fields).ABCHAOKFLGL = pSVar13;
        thunk_FUN_01c20e04();
                    /* try { // try from 03582528 to 0368253f has its CatchHandler @ 03582cfc */
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035827d4 to 036827db has its CatchHandler @ 035829fc */
          FUN_01bab8c8();
        }
                    /* try { // try from 0358254c to 03682553 has its CatchHandler @ 03582a24 */
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_4476/*"Color"*/,(MethodInfo *)0x0);
                    /* try { // try from 0358255c to 03682563 has its CatchHandler @ 03582a28 */
        pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar12,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 03582574 to 0368257b has its CatchHandler @ 03582a50 */
        if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 03582580 to 03682587 has its CatchHandler @ 03582a4c */
        iVar7 = LabelButton__GetBtnColor(pSVar13,(MethodInfo *)0x0);
        (__this_00->fields).BANIDGFENDE = iVar7;
                    /* try { // try from 03582598 to 0368259f has its CatchHandler @ 03582a40 */
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
                    /* try { // try from 035825a0 to 036825b3 has its CatchHandler @ 03582a5c */
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_14607/*"Url"*/,(MethodInfo *)0x0);
                    /* try { // try from 035825b8 to 036825c3 has its CatchHandler @ 03582a48 */
        pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar12,StringLiteral_1/*""*/,(MethodInfo *)0x0);
                    /* try { // try from 035825c4 to 036825cf has its CatchHandler @ 03582a60 */
        (__this_00->fields).PHONOLEMBHN = pSVar13;
        thunk_FUN_01c20e04();
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
                    /* try { // try from 035825e8 to 036825ef has its CatchHandler @ 03582a54 */
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 035825f8 to 036825ff has its CatchHandler @ 03582a34 */
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_3622/*"BuyItem"*/,(MethodInfo *)0x0);
        bVar6 = EIABCPKDEBD__FMBMNDIGLIG(pSVar12,false,(MethodInfo *)0x0);
                    /* try { // try from 03582610 to 03682617 has its CatchHandler @ 03582a2c */
        (__this_00->fields).KMJPPCLIEDG = bVar6;
                    /* try { // try from 0358261c to 03682623 has its CatchHandler @ 03582a64 */
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 03582634 to 0368263b has its CatchHandler @ 03582a3c */
                    /* try { // try from 0358263c to 0368264f has its CatchHandler @ 03582a68 */
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_11124/*"RedirectShop"*/,(MethodInfo *)0x0);
        pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar12,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03582654 to 0368265f has its CatchHandler @ 03582a74 */
                    /* try { // try from 03582660 to 0368266b has its CatchHandler @ 03582a78 */
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 03582670 to 03682677 has its CatchHandler @ 03582a38 */
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_11123/*"RedirectRaidShop"*/,(MethodInfo *)0x0);
        GMLKIEHIOIA = EIABCPKDEBD__JPKEHIBGOEM(pSVar12,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03582684 to 036826b7 has its CatchHandler @ 03582a20 */
        FLCGGKEODNC__CBAGKAAEOAD(__this_00,pSVar13,GMLKIEHIOIA,(MethodInfo *)0x0);
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_4665/*"Control"*/,(MethodInfo *)0x0);
        iVar7 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                          (pSVar12,-1,Method_EIABCPKDEBD_CKHGJBKDIID<FBBNEILNOKK>__);
        (__this_00->fields).ACNLHENNKAJ = iVar7;
        lVar17 = Method_System_Collections_Generic_List<FLCGGKEODNC>_Add__;
        if (__this == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pFVar16 = (__this->fields)._items;
                    /* try { // try from 035826d8 to 036826df has its CatchHandler @ 035829cc */
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pFVar16 == (FLCGGKEODNC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar4 = (__this->fields)._size;
        if (uVar4 < (uint)pFVar16->max_length) {
          (__this->fields)._size = uVar4 + 1;
                    /* try { // try from 03582700 to 0368271f has its CatchHandler @ 03582a08 */
          pFVar16->m_Items[(int)uVar4] = __this_00;
          thunk_FUN_01c20e04(pFVar16->m_Items + (int)uVar4,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar21._0_8_,auVar21._8_8_);
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar20 = piVar20 + 4;
    if (uVar18 == 0) break;
LAB_03582764:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar14 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_03582798;
    }
  }
LAB_0358277c:
  puVar14 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_03582798:
                    /* try { // try from 03582798 to 0368279b has its CatchHandler @ 03582a04 */
                    /* try { // try from 0358279c to 036827a7 has its CatchHandler @ 03582a44 */
  (*(code *)*puVar14)(plVar10,puVar14[1]);
                    /* try { // try from 035827bc to 036827c3 has its CatchHandler @ 03582a18 */
  return __this;
}


// ===== public int NOJELIALAIO()  [RVA 0x3482E9C]
// BCGLDKLKKDA$$NOJELIALAIO @ RVA 0x3482E9C

int32_t BCGLDKLKKDA__NOJELIALAIO(BCGLDKLKKDA_o *__this,MethodInfo *method)

{
  return (__this->fields)._MDAJFAPLLOH_k__BackingField;
}


// ===== public long NNGKDFKKFMG()  [RVA 0x3482EA4]
// BCGLDKLKKDA$$NNGKDFKKFMG @ RVA 0x3482EA4

int64_t BCGLDKLKKDA__NNGKDFKKFMG(BCGLDKLKKDA_o *__this,MethodInfo *method)

{
  return (__this->fields)._IFCCMDEDADL_k__BackingField;
}


// ===== private void CAAHCAFMAJA(List<FLCGGKEODNC> CJNHFNHJHPE)  [RVA 0x3482EAC]
// BCGLDKLKKDA$$CAAHCAFMAJA @ RVA 0x3482EAC

void BCGLDKLKKDA__CAAHCAFMAJA
               (BCGLDKLKKDA_o *__this,System_Collections_Generic_List_FLCGGKEODNC__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._JAONHHOBCKA_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void CFGEDNNEALM(List<int> CJNHFNHJHPE)  [RVA 0x3482EB4]
// BCGLDKLKKDA$$CFGEDNNEALM @ RVA 0x3482EB4

void BCGLDKLKKDA__CFGEDNNEALM
               (BCGLDKLKKDA_o *__this,System_Collections_Generic_List_int__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._FJCAMFHOJBB_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x3482EBC]
// BCGLDKLKKDA$$HCOCAAIGNNL @ RVA 0x3482EBC

void BCGLDKLKKDA__HCOCAAIGNNL(BCGLDKLKKDA_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void GPIKDHOBNLH(string CJNHFNHJHPE)  [RVA 0x3482EC4]
// BCGLDKLKKDA$$GPIKDHOBNLH @ RVA 0x3482EC4

void BCGLDKLKKDA__GPIKDHOBNLH(BCGLDKLKKDA_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._FPPMLHPNHAI_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<int> NKOKDNFIKOL()  [RVA 0x3482ECC]
// BCGLDKLKKDA$$NKOKDNFIKOL @ RVA 0x3482ECC

System_Collections_Generic_List_int__o *
BCGLDKLKKDA__NKOKDNFIKOL(BCGLDKLKKDA_o *__this,MethodInfo *method)

{
  return (__this->fields)._FJCAMFHOJBB_k__BackingField;
}


// ===== public void OCBNMBNGBKN(long CJNHFNHJHPE)  [RVA 0x3482ED4]
// BCGLDKLKKDA$$OCBNMBNGBKN @ RVA 0x3482ED4

void BCGLDKLKKDA__OCBNMBNGBKN(BCGLDKLKKDA_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._IFCCMDEDADL_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public string CHAMEAOHFCP()  [RVA 0x3482EDC]
// BCGLDKLKKDA$$CHAMEAOHFCP @ RVA 0x3482EDC

System_String_o * BCGLDKLKKDA__CHAMEAOHFCP(BCGLDKLKKDA_o *__this,MethodInfo *method)

{
  return (__this->fields)._FPPMLHPNHAI_k__BackingField;
}


// ===== public bool OAPAFEGAAOP()  [RVA 0x3482EE4]
// BCGLDKLKKDA$$OAPAFEGAAOP @ RVA 0x3482EE4

bool BCGLDKLKKDA__OAPAFEGAAOP(BCGLDKLKKDA_o *__this,MethodInfo *method)

{
  return (__this->fields)._ANIPFJHPNNA_k__BackingField;
}

