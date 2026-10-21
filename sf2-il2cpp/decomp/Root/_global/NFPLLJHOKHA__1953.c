// TypeDefIndex 1953
// Namespace: 
// public class NFPLLJHOKHA : MANCHAFDGGG
// Fields:

// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3276B3C]
// NFPLLJHOKHA$$HNIHOIAMDPC @ RVA 0x3276B3C

void NFPLLJHOKHA__HNIHOIAMDPC
               (NFPLLJHOKHA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  Il2CppObject **ppIVar4;
  NILLKLHKLHG_o *pNVar5;
  
  if ((DAT_0456724d & 1) == 0) {
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_14733/*"Value1"*/);
    FUN_01bab630(&StringLiteral_14734/*"Value2"*/);
                    /* try { // try from 03376b8c to 03476d53 has its CatchHandler @ 03376b8c
                       catch() { ... } // from try @ 03376b8c with catch @ 03376b8c
                       catch() { ... } // from try @ 03376f28 with catch @ 03376b8c
                       catch() { ... } // from try @ 03376f60 with catch @ 03376b8c
                       catch() { ... } // from try @ 03377100 with catch @ 03376b8c
                       catch() { ... } // from try @ 0337713c with catch @ 03376b8c
                       catch() { ... } // from try @ 03377180 with catch @ 03376b8c */
    FUN_01bab630(&StringLiteral_1154/*","*/);
    FUN_01bab630(&StringLiteral_2495/*"?Compare["*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_15775/*"]"*/);
    DAT_0456724d = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if ((__this_00 != (System_Text_StringBuilder_o *)0x0) &&
     (System_Text_StringBuilder__Append(__this_00,StringLiteral_2495/*"?Compare["*/,(MethodInfo *)0x0),
     AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0)) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_14733/*"Value1"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      System_Text_StringBuilder__Append(__this_00,pSVar3,(MethodInfo *)0x0);
      System_Text_StringBuilder__Append(__this_00,StringLiteral_1154/*","*/,(MethodInfo *)0x0);
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_14734/*"Value2"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(__this_00,pSVar3,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(__this_00,StringLiteral_1154/*","*/,(MethodInfo *)0x0);
        pSVar3 = (System_String_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
        System_Text_StringBuilder__Append(__this_00,pSVar3,(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(__this_00,StringLiteral_15775/*"]"*/,(MethodInfo *)0x0);
        pNVar5 = (__this->fields).super.MBEHOEALEMP;
        pSVar3 = (System_String_o *)
                 (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        if (pNVar5 != (NILLKLHKLHG_o *)0x0) {
          NILLKLHKLHG__HNIHOIAMDPC(pNVar5,pSVar3,(MethodInfo *)0x0);
          pNVar5 = (__this->fields).super.MBEHOEALEMP;
          if (pNVar5 != (NILLKLHKLHG_o *)0x0) {
            ppIVar4 = &(pNVar5->fields).KAEBCKDNFHH;
            *ppIVar4 = (Il2CppObject *)__this;
            thunk_FUN_01c20e04(ppIVar4,__this);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3276D50]
// NFPLLJHOKHA$$.ctor @ RVA 0x3276D50

void NFPLLJHOKHA___ctor(NFPLLJHOKHA_o *__this,MethodInfo *method)

{
                    /* try { // try from 03376d54 to 03476d5b has its CatchHandler @ 03377124 */
  MANCHAFDGGG___ctor((MANCHAFDGGG_o *)__this,(MethodInfo *)0x0);
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,0x11,(MethodInfo *)0x0);
  return;
}


// ===== public override bool EPBENPDCBFE(OLKKAIFGGAK BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x3276D74]
// NFPLLJHOKHA$$EPBENPDCBFE @ RVA 0x3276D74

bool NFPLLJHOKHA__EPBENPDCBFE
               (NFPLLJHOKHA_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  int32_t iVar1;
  NILLKLHKLHG_o *__this_00;
  MMFIDKMDADC_o *__this_01;
  
                    /* try { // try from 03376d74 to 03476d7b has its CatchHandler @ 03377114 */
  MANCHAFDGGG__EPBENPDCBFE((MANCHAFDGGG_o *)__this,BCKBBGCOMJD,FPEHEJBLCAO,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.MBEHOEALEMP;
                    /* try { // try from 03376d90 to 03476d97 has its CatchHandler @ 03376f48 */
  if ((__this_00 != (NILLKLHKLHG_o *)0x0) &&
     (__this_01 = NILLKLHKLHG__CHKGAHCDFJF(__this_00,false,(MethodInfo *)0x0),
     __this_01 != (MMFIDKMDADC_o *)0x0)) {
    iVar1 = MMFIDKMDADC__JBGCINPPLAC(__this_01,(MethodInfo *)0x0);
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

