// TypeDefIndex 3279
// Namespace: 
// public class KGAGPHANJAO : KJFPGDFNFCL
// Fields:
//   private int CDPHMKOHKKH; // 0x48

// ===== protected override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x351A9B4]
// KGAGPHANJAO$$HNIHOIAMDPC @ RVA 0x351A9B4

void KGAGPHANJAO__HNIHOIAMDPC
               (KGAGPHANJAO_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_04568975 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12408/*"Step"*/);
    DAT_04568975 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_12408/*"Step"*/,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,1,(MethodInfo *)0x0);
      (__this->fields).CDPHMKOHKKH = iVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x351AA34]
// KGAGPHANJAO$$.ctor @ RVA 0x351AA34

void KGAGPHANJAO___ctor(KGAGPHANJAO_o *__this,MethodInfo *method)

{
  (__this->fields).CDPHMKOHKKH = 1;
  KJFPGDFNFCL___ctor((KJFPGDFNFCL_o *)__this,0xe,(MethodInfo *)0x0);
  return;
}


// ===== public override bool DGCODECJJCC(ECAIEGNAOAL KDFMDHADHMD)  [RVA 0x351AA48]
// KGAGPHANJAO$$DGCODECJJCC @ RVA 0x351AA48

bool KGAGPHANJAO__DGCODECJJCC(KGAGPHANJAO_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int32_t iVar4;
  
  if ((DAT_04568976 & 1) == 0) {
    FUN_01bab630(&Method_KJFPGDFNFCL_AOKIANMEBCH<int>__);
    DAT_04568976 = 1;
  }
  bVar3 = KJFPGDFNFCL__DGCODECJJCC((KJFPGDFNFCL_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
  if (bVar3) {
    if (KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar4 = KJFPGDFNFCL__AOKIANMEBCH<int>
                      ((KDFMDHADHMD->fields).KOANCCDDBDA,0,Method_KJFPGDFNFCL_AOKIANMEBCH<int>__);
    if (-1 < iVar4) {
      iVar1 = (__this->fields).CDPHMKOHKKH;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar4 / iVar1;
      }
      return (iVar4 == iVar2 * iVar1) != ((__this->fields).super.GBBHFPBFOPI != false);
    }
  }
  return false;
}

