// TypeDefIndex 1309
// Namespace: 
// public class MPLCLLIIECE : MANCHAFDGGG
// Fields:

// ===== public void .ctor()  [RVA 0x3157AC0]
// MPLCLLIIECE$$.ctor @ RVA 0x3157AC0

void MPLCLLIIECE___ctor(MPLCLLIIECE_o *__this,MethodInfo *method)

{
  MANCHAFDGGG___ctor((MANCHAFDGGG_o *)__this,(MethodInfo *)0x0);
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,9,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3157AE4]
// MPLCLLIIECE$$HNIHOIAMDPC @ RVA 0x3157AE4

void MPLCLLIIECE__HNIHOIAMDPC
               (MPLCLLIIECE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *ANGBPBINHBL;
  Il2CppObject **ppIVar1;
  NILLKLHKLHG_o *pNVar2;
  
  if ((DAT_0456684b & 1) == 0) {
    FUN_01bab630(&StringLiteral_9653/*"Number"*/);
                    /* try { // try from 03257b0c to 03357b33 has its CatchHandler @ 03258078 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456684b = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9653/*"Number"*/,(MethodInfo *)0x0);
                    /* try { // try from 03257b68 to 03357b93 has its CatchHandler @ 03258074 */
      ANGBPBINHBL = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).super.MBEHOEALEMP;
      if (pNVar2 != (NILLKLHKLHG_o *)0x0) {
        NILLKLHKLHG__HNIHOIAMDPC(pNVar2,ANGBPBINHBL,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).super.MBEHOEALEMP;
        if (pNVar2 != (NILLKLHKLHG_o *)0x0) {
          ppIVar1 = &(pNVar2->fields).KAEBCKDNFHH;
          *ppIVar1 = (Il2CppObject *)__this;
          thunk_FUN_01c20e04(ppIVar1,__this);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool EPBENPDCBFE(Model BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x3157BAC]
// MPLCLLIIECE$$EPBENPDCBFE @ RVA 0x3157BAC

bool MPLCLLIIECE__EPBENPDCBFE
               (MPLCLLIIECE_o *__this,Model_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  Model_o *__this_00;
  NILLKLHKLHG_o *__this_01;
  MMFIDKMDADC_o *pMVar3;
  
  __this_00 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (Model_o *)0x0) {
                    /* try { // try from 03257c14 to 03357c1b has its CatchHandler @ 0325804c */
                    /* try { // try from 03257c1c to 03357c27 has its CatchHandler @ 03258014 */
    return false;
  }
  __this_01 = (__this->fields).super.MBEHOEALEMP;
                    /* try { // try from 03257bd0 to 03357bd7 has its CatchHandler @ 03258070 */
                    /* try { // try from 03257be0 to 03357be7 has its CatchHandler @ 03258068 */
  if (((__this_01 != (NILLKLHKLHG_o *)0x0) &&
      (pMVar3 = NILLKLHKLHG__CHKGAHCDFJF(__this_01,false,(MethodInfo *)0x0),
      pMVar3 != (MMFIDKMDADC_o *)0x0)) &&
     (iVar1 = PCOEHCPGBBG__JBGCINPPLAC((pMVar3->fields).HPACPFLKHPK,0,(MethodInfo *)0x0),
     __this_00 != (Model_o *)0x0)) {
                    /* try { // try from 03257bfc to 03357c03 has its CatchHandler @ 03258050 */
    iVar2 = Model__BLBILHBACND(__this_00,(MethodInfo *)0x0);
    return iVar2 == iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

