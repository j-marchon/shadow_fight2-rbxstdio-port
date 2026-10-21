// TypeDefIndex 2818
// Namespace: 
// public class ECGPIFIJMFF : AJNNHGGLGIF
// Fields:
//   private int DKGMKHOOHBI; // 0x58
//   private int FGPEKOKDCNB; // 0x5C

// ===== public int GMEAPHICBNC()  [RVA 0x34255E4]
// ECGPIFIJMFF$$GMEAPHICBNC @ RVA 0x34255E4

int32_t ECGPIFIJMFF__GMEAPHICBNC(ECGPIFIJMFF_o *__this,MethodInfo *method)

{
  return (__this->fields).FGPEKOKDCNB;
}


// ===== public int AFJAJAPLKAI()  [RVA 0x34255EC]
// ECGPIFIJMFF$$AFJAJAPLKAI @ RVA 0x34255EC

int32_t ECGPIFIJMFF__AFJAJAPLKAI(ECGPIFIJMFF_o *__this,MethodInfo *method)

{
  return (__this->fields).DKGMKHOOHBI;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x34255F4]
// ECGPIFIJMFF$$HNIHOIAMDPC @ RVA 0x34255F4

void ECGPIFIJMFF__HNIHOIAMDPC
               (ECGPIFIJMFF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  
  if ((DAT_04568104 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11442/*"RoundTime"*/);
    FUN_01bab630(&StringLiteral_11445/*"Rounds"*/);
    DAT_04568104 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_11445/*"Rounds"*/,(MethodInfo *)0x0);
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,-1,(MethodInfo *)0x0);
      (__this->fields).DKGMKHOOHBI = iVar1;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_11442/*"RoundTime"*/,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,-1,(MethodInfo *)0x0);
        (__this->fields).FGPEKOKDCNB = iVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x34256BC]
// ECGPIFIJMFF$$.ctor @ RVA 0x34256BC

void ECGPIFIJMFF___ctor(ECGPIFIJMFF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  AJNNHGGLGIF___ctor((AJNNHGGLGIF_o *)__this,0x1d,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x035256f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
  return;
}

