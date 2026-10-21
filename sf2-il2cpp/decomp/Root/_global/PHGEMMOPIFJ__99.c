// TypeDefIndex 99
// Namespace: 
// public class PHGEMMOPIFJ : IENLNOEDCFF
// Fields:
//   private PHGEMMOPIFJ.KNPIMLNPPDM JBNGADJBDHB; // 0x28
//   private PHGEMMOPIFJ.CGOGIEJIFPH ABLHFFFHAMP; // 0x2C

// ===== private bool GOHBPFKFFJE(KNDEADMMCPO ACCIHBHMFPN)  [RVA 0x3004B5C]
// PHGEMMOPIFJ$$GOHBPFKFFJE @ RVA 0x3004B5C

bool PHGEMMOPIFJ__GOHBPFKFFJE(PHGEMMOPIFJ_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  if ((2 < ACCIHBHMFPN - 3U) && (ACCIHBHMFPN != 2)) {
    return false;
  }
  return (__this->fields).ABLHFFFHAMP == 1;
}


// ===== private bool DONKDCJLBPN(bool PCAIKIGGBMJ)  [RVA 0x3004B88]
// PHGEMMOPIFJ$$DONKDCJLBPN @ RVA 0x3004B88

bool PHGEMMOPIFJ__DONKDCJLBPN(PHGEMMOPIFJ_o *__this,bool PCAIKIGGBMJ,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (__this->fields).JBNGADJBDHB;
  bVar1 = iVar2 == 1;
  if (!PCAIKIGGBMJ) {
    bVar1 = iVar2 == 2;
  }
  return bVar1;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3004BA8]
// PHGEMMOPIFJ$$.ctor @ RVA 0x3004BA8

void PHGEMMOPIFJ___ctor(PHGEMMOPIFJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *a;
  System_String_o *a_00;
  int32_t iVar4;
  
  if ((DAT_04565b42 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14784/*"Victory"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_13809/*"Timeout"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_5265/*"Defeat"*/);
    FUN_01bab630(&StringLiteral_11392/*"Ringout"*/);
    DAT_04565b42 = 1;
  }
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,0xc,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0)) {
LAB_03104d68:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
  a = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  pSVar2 = (System_Xml_XmlAttributeCollection_o *)
           (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                     (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
  if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03104d68;
  pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar2,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
  a_00 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(a,StringLiteral_14784/*"Victory"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar4 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(a,StringLiteral_5265/*"Defeat"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields).JBNGADJBDHB = 0;
      goto LAB_03104d10;
    }
    iVar4 = 2;
  }
  (__this->fields).JBNGADJBDHB = iVar4;
LAB_03104d10:
  bVar1 = System_String__op_Equality(a_00,StringLiteral_13809/*"Timeout"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar4 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(a_00,StringLiteral_11392/*"Ringout"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields).ABLHFFFHAMP = 0;
      return;
    }
    iVar4 = 2;
  }
  (__this->fields).ABLHFFFHAMP = iVar4;
  return;
}


// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3004D6C]
// PHGEMMOPIFJ$$EPBENPDCBFE @ RVA 0x3004D6C

bool PHGEMMOPIFJ__EPBENPDCBFE(PHGEMMOPIFJ_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  
  if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar3 = 0;
  if ((AHEFOIOKDOK->fields).LMKHOJFOPEB == false) goto LAB_03104dec;
  iVar1 = (__this->fields).JBNGADJBDHB;
  if (iVar1 == 0) {
LAB_03104da8:
    iVar1 = (__this->fields).ABLHFFFHAMP;
    if (iVar1 == 0) {
LAB_03104de0:
      bVar3 = 1;
      goto LAB_03104dec;
    }
    switch((AHEFOIOKDOK->fields).KNDEADMMCPO) {
    case 2:
    case 3:
    case 4:
    case 5:
      if (iVar1 == 1) goto LAB_03104de0;
    }
  }
  else {
    bVar2 = iVar1 == 2;
    if ((AHEFOIOKDOK->fields).DONKDCJLBPN != false) {
      bVar2 = iVar1 == 1;
    }
    if (bVar2) goto LAB_03104da8;
  }
  bVar3 = 0;
LAB_03104dec:
  return (bool)(bVar3 ^ (__this->fields).super.GBBHFPBFOPI != false);
}

