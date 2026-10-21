// TypeDefIndex 1978
// Namespace: 
// public class KMFIGBGAKNL : AJNNHGGLGIF
// Fields:
//   private KMFIGBGAKNL.BGIKPKIDMCF NDDGEANDADE; // 0x58

// ===== public KMFIGBGAKNL.BGIKPKIDMCF HBKNOLOAOFN()  [RVA 0x328F3E4]
// KMFIGBGAKNL$$HBKNOLOAOFN @ RVA 0x328F3E4

int32_t KMFIGBGAKNL__HBKNOLOAOFN(KMFIGBGAKNL_o *__this,MethodInfo *method)

{
  return (__this->fields).NDDGEANDADE;
}


// ===== private KMFIGBGAKNL.BGIKPKIDMCF JDLPMIIJPMA(XmlNode AHDGNOJPPIB)  [RVA 0x328F3EC]
// KMFIGBGAKNL$$JDLPMIIJPMA @ RVA 0x328F3EC

int32_t KMFIGBGAKNL__JDLPMIIJPMA
                  (KMFIGBGAKNL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  
  if ((DAT_04567307 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10806/*"RaidCharge"*/);
    FUN_01bab630(&StringLiteral_5847/*"Error - parseButtonType - unknown type"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_8270/*"Kick"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_10576/*"Punch"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    __this = (KMFIGBGAKNL_o *)FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    DAT_04567307 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    __this = (KMFIGBGAKNL_o *)0x0;
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      bVar1 = System_String__op_Inequality(a,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = System_String__op_Equality(a,StringLiteral_10576/*"Punch"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 0;
        }
        bVar1 = System_String__op_Equality(a,StringLiteral_8270/*"Kick"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 1;
        }
        bVar1 = System_String__op_Equality(a,StringLiteral_11017/*"Ranged"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 2;
        }
        bVar1 = System_String__op_Equality(a,StringLiteral_8772/*"Magic"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 3;
        }
        bVar1 = System_String__op_Equality(a,StringLiteral_10806/*"RaidCharge"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 4;
        }
      }
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_5847/*"Error - parseButtonType - unknown type"*/,(MethodInfo *)0x0);
      return 5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x328F5C4]
// KMFIGBGAKNL$$.ctor @ RVA 0x328F5C4

void KMFIGBGAKNL___ctor(KMFIGBGAKNL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  KMFIGBGAKNL_o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)AHDGNOJPPIB;
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,3,AHDGNOJPPIB,(MethodInfo *)0x0);
  iVar1 = KMFIGBGAKNL__JDLPMIIJPMA(__this_00,AHDGNOJPPIB,method_00);
  (__this->fields).NDDGEANDADE = iVar1;
  return;
}

