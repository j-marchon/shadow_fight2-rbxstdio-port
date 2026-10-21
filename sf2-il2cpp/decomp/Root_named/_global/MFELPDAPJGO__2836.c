// TypeDefIndex 2836
// Namespace: 
// public class MFELPDAPJGO
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x10
//   private string <JJPFNGHOBLJ>k__BackingField; // 0x18
//   private bool <BADKCCPAOAC>k__BackingField; // 0x20

// ===== public bool CKBEHCKBJCP()  [RVA 0x342D9D4]
// MFELPDAPJGO$$CKBEHCKBJCP @ RVA 0x342D9D4

bool MFELPDAPJGO__CKBEHCKBJCP(MFELPDAPJGO_o *__this,MethodInfo *method)

{
  return (__this->fields)._BADKCCPAOAC_k__BackingField;
}


// ===== public string PPPCOLOGIJD()  [RVA 0x342D9DC]
// MFELPDAPJGO$$PPPCOLOGIJD @ RVA 0x342D9DC

System_String_o * MFELPDAPJGO__PPPCOLOGIJD(MFELPDAPJGO_o *__this,MethodInfo *method)

{
  return (__this->fields)._JJPFNGHOBLJ_k__BackingField;
}


// ===== private void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x342D9E4]
// MFELPDAPJGO$$HCOCAAIGNNL @ RVA 0x342D9E4

void MFELPDAPJGO__HCOCAAIGNNL(MFELPDAPJGO_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(XmlNode CJPHHMIHOGD)  [RVA 0x342D9EC]
// MFELPDAPJGO$$.ctor @ RVA 0x342D9EC

void MFELPDAPJGO___ctor(MFELPDAPJGO_o *__this,System_Xml_XmlNode_o *CJPHHMIHOGD,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04568152 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_9947/*"OpenLog"*/);
    FUN_01bab630(&StringLiteral_4513/*"Command"*/);
    DAT_04568152 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (CJPHHMIHOGD != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(CJPHHMIHOGD->klass->vtable)._16_get_Attributes.methodPtr)
                       (CJPHHMIHOGD,(CJPHHMIHOGD->klass->vtable)._16_get_Attributes.method);
    if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
       (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0),
       pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
      pSVar4 = (System_String_o *)
               (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(CJPHHMIHOGD->klass->vtable)._16_get_Attributes.methodPtr)
                         (CJPHHMIHOGD,(CJPHHMIHOGD->klass->vtable)._16_get_Attributes.method);
      if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
         (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_4513/*"Command"*/,(MethodInfo *)0x0),
         pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
        pSVar4 = (System_String_o *)
                 (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
        (__this->fields)._JJPFNGHOBLJ_k__BackingField = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(CJPHHMIHOGD->klass->vtable)._16_get_Attributes.methodPtr)
                           (CJPHHMIHOGD,(CJPHHMIHOGD->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_9947/*"OpenLog"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
          (__this->fields)._BADKCCPAOAC_k__BackingField = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GMDOKBJFNDH(bool CJNHFNHJHPE)  [RVA 0x342DB2C]
// MFELPDAPJGO$$GMDOKBJFNDH @ RVA 0x342DB2C

void MFELPDAPJGO__GMDOKBJFNDH(MFELPDAPJGO_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BADKCCPAOAC_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void KIEABCCLKLD(string CJNHFNHJHPE)  [RVA 0x342DB38]
// MFELPDAPJGO$$KIEABCCLKLD @ RVA 0x342DB38

void MFELPDAPJGO__KIEABCCLKLD(MFELPDAPJGO_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._JJPFNGHOBLJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x342DB40]
// MFELPDAPJGO$$KCHJCGEMCGE @ RVA 0x342DB40

System_String_o * MFELPDAPJGO__KCHJCGEMCGE(MFELPDAPJGO_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}

