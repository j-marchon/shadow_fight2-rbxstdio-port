// TypeDefIndex 2525
// Namespace: 
// public class FBDLCENGKKF : KJFPGDFNFCL
// Fields:
//   private JADGCGOJLJB.IMLPLLLPALI PHCPDFIBHGH; // 0x48

// ===== protected override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x338F74C]
// FBDLCENGKKF$$HNIHOIAMDPC @ RVA 0x338F74C

void FBDLCENGKKF__HNIHOIAMDPC
               (FBDLCENGKKF_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  int32_t iVar2;
  
  if ((DAT_04567c11 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3508/*"Block"*/);
    FUN_01bab630(&StringLiteral_3160/*"Attack"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_7903/*"Invulnerable"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567c11 = 1;
  }
  if ((JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                            (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
    a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,StringLiteral_3160/*"Attack"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar2 = 4;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_3508/*"Block"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = 5;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_7903/*"Invulnerable"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          (__this->fields).PHCPDFIBHGH = 0;
          return;
        }
        iVar2 = 6;
      }
    }
    (__this->fields).PHCPDFIBHGH = iVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool DGCODECJJCC(ECAIEGNAOAL KDFMDHADHMD)  [RVA 0x338F874]
// FBDLCENGKKF$$DGCODECJJCC @ RVA 0x338F874

bool FBDLCENGKKF__DGCODECJJCC(FBDLCENGKKF_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  JADGCGOJLJB_o *__this_00;
  byte bVar4;
  
  if ((DAT_04567c12 & 1) == 0) {
    FUN_01bab630(&Method_KJFPGDFNFCL_AOKIANMEBCH<JADGCGOJLJB>__);
    DAT_04567c12 = 1;
  }
  bVar2 = KJFPGDFNFCL__DGCODECJJCC((KJFPGDFNFCL_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
  if (bVar2) {
    if (KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (JADGCGOJLJB_o *)
                KJFPGDFNFCL__AOKIANMEBCH<object>
                          ((KDFMDHADHMD->fields).KOANCCDDBDA,(Il2CppObject *)0x0,
                           Method_KJFPGDFNFCL_AOKIANMEBCH<JADGCGOJLJB>__);
    if (__this_00 != (JADGCGOJLJB_o *)0x0) {
      iVar1 = (__this->fields).PHCPDFIBHGH;
      if (((iVar1 == 0) ||
          (iVar3 = JADGCGOJLJB__NHGGBEACKBD(__this_00,(MethodInfo *)0x0), iVar1 == iVar3)) &&
         ((bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).super.DHKOGAHJNMK,(MethodInfo *)0x0),
          bVar2 || (bVar2 = System_String__op_Equality
                                      ((__this->fields).super.DHKOGAHJNMK,
                                       (__this_00->fields).JIJLBFGKNJK,(MethodInfo *)0x0), bVar2))))
      {
        bVar4 = 1;
      }
      else {
        bVar4 = 0;
      }
      return (bool)(bVar4 ^ (__this->fields).super.GBBHFPBFOPI != false);
    }
  }
  return false;
}


// ===== public void .ctor()  [RVA 0x338F950]
// FBDLCENGKKF$$.ctor @ RVA 0x338F950

void FBDLCENGKKF___ctor(FBDLCENGKKF_o *__this,MethodInfo *method)

{
  KJFPGDFNFCL___ctor((KJFPGDFNFCL_o *)__this,0xd,(MethodInfo *)0x0);
  (__this->fields).PHCPDFIBHGH = 0;
  return;
}

