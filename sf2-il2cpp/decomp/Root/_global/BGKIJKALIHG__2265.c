// TypeDefIndex 2265
// Namespace: 
// public class BGKIJKALIHG : ILGLOCBJFEG
// Fields:
//   private string DEKCPPOJFEH; // 0x38

// ===== public override bool EPBENPDCBFE(OLKKAIFGGAK BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x33008C4]
// BGKIJKALIHG$$EPBENPDCBFE @ RVA 0x33008C4

bool BGKIJKALIHG__EPBENPDCBFE
               (BGKIJKALIHG_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_string__o *pSVar2;
  
  if ((DAT_04567719 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_get_Count__);
    DAT_04567719 = 1;
  }
  ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    return false;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(BCKBBGCOMJD->fields).DBLOJJBPLGE;
                    /* try { // try from 03400918 to 0350093f has its CatchHandler @ 03400c58 */
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this_00,(Il2CppObject *)(__this->fields).DEKCPPOJFEH,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    if (bVar1) {
      return true;
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    pSVar2 = (BCKBBGCOMJD->fields).DBLOJJBPLGE;
    if (pSVar2 != (System_Collections_Generic_HashSet_string__o *)0x0) {
      return 0 < (pSVar2->fields)._count;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03400974 to 0350099f has its CatchHandler @ 03400c54 */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3300978]
// BGKIJKALIHG$$HNIHOIAMDPC @ RVA 0x3300978

void BGKIJKALIHG__HNIHOIAMDPC
               (BGKIJKALIHG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456771a & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_0456771a = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 034009dc to 035009eb has its CatchHandler @ 03400c38 */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                    /* try { // try from 03400a00 to 03500a07 has its CatchHandler @ 03400c3c */
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM
                         (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).DEKCPPOJFEH;
      *ppSVar2 = pSVar1;
                    /* try { // try from 03400a1c to 03500a23 has its CatchHandler @ 03400ad0 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3300A2C]
// BGKIJKALIHG$$.ctor @ RVA 0x3300A2C

void BGKIJKALIHG___ctor(BGKIJKALIHG_o *__this,MethodInfo *method)

{
  ILGLOCBJFEG___ctor((ILGLOCBJFEG_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03400a44 to 03500a4b has its CatchHandler @ 03400c48 */
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,0xf,(MethodInfo *)0x0);
  return;
}

