// TypeDefIndex 2260
// Namespace: 
// public class OALOIHHAHAD : IENLNOEDCFF
// Fields:
//   private string JDNKKGPNHPB; // 0x28
//   private string DEKCPPOJFEH; // 0x30

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x32FFB90]
// OALOIHHAHAD$$.ctor @ RVA 0x32FFB90

void OALOIHHAHAD___ctor(OALOIHHAHAD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_0456770e & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    DAT_0456770e = 1;
  }
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,0x18,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      (__this->fields).JDNKKGPNHPB = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                           (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).DEKCPPOJFEH;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x32FFCA0]
// OALOIHHAHAD$$EPBENPDCBFE @ RVA 0x32FFCA0

bool OALOIHHAHAD__EPBENPDCBFE(OALOIHHAHAD_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_OGCKCABMHLC_o *pOVar2;
  OLKKAIFGGAK_o *pOVar3;
  OLKKAIFGGAK_EAOIGPODIAI_o *pOVar4;
  System_String_o *CJNHFNHJHPE;
  
  if ((DAT_0456770f & 1) == 0) {
    FUN_01bab630(&StringLiteral_11996/*"Shock"*/);
    FUN_01bab630(&StringLiteral_4893/*"Critical"*/);
    DAT_0456770f = 1;
  }
  if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033ffde0;
  pOVar2 = (AHEFOIOKDOK->fields).LHAJAKGFFBI;
  if ((pOVar2 == (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) ||
     ((pOVar2->fields).HEMGHNOOJPI == (OLKKAIFGGAK_o *)0x0)) {
    return false;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).JDNKKGPNHPB,(MethodInfo *)0x0);
  if (bVar1) {
    pOVar2 = (AHEFOIOKDOK->fields).LHAJAKGFFBI;
    if (pOVar2 == (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) goto LAB_033ffde0;
LAB_033ffd6c:
    pOVar3 = (pOVar2->fields).HEMGHNOOJPI;
    if ((pOVar3 == (OLKKAIFGGAK_o *)0x0) ||
       (pOVar4 = (pOVar3->fields).PDCHNCOIHHA, pOVar4 == (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0)) {
LAB_033ffde0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    CJNHFNHJHPE = (pOVar4->fields).LCIJCMJDKIH;
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    if ((bVar1) || (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0), bVar1)) {
                    /* try { // try from 033ffda0 to 034ffda7 has its CatchHandler @ 0340002c */
      bVar1 = true;
    }
    else {
                    /* try { // try from 033ffdb4 to 034ffdbf has its CatchHandler @ 03400028 */
      bVar1 = System_String__op_Equality((__this->fields).DEKCPPOJFEH,CJNHFNHJHPE,(MethodInfo *)0x0)
      ;
    }
  }
  else {
    bVar1 = System_String__op_Equality
                      ((__this->fields).JDNKKGPNHPB,StringLiteral_4893/*"Critical"*/,(MethodInfo *)0x0);
    if (bVar1) {
      pOVar2 = (AHEFOIOKDOK->fields).LHAJAKGFFBI;
      if (pOVar2 == (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) goto LAB_033ffde0;
      if ((pOVar2->fields).EPPIJIGMFFJ != false) goto LAB_033ffd6c;
    }
    bVar1 = System_String__op_Equality
                      ((__this->fields).JDNKKGPNHPB,StringLiteral_11996/*"Shock"*/,(MethodInfo *)0x0);
    if (bVar1) {
      pOVar2 = (AHEFOIOKDOK->fields).LHAJAKGFFBI;
      if (pOVar2 == (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) goto LAB_033ffde0;
      if ((pOVar2->fields).NLFJFKCJEAC != false) goto LAB_033ffd6c;
    }
    bVar1 = false;
  }
                    /* try { // try from 033ffdd0 to 034ffddb has its CatchHandler @ 03400024 */
  return (bool)(bVar1 ^ (__this->fields).super.GBBHFPBFOPI != false);
}

