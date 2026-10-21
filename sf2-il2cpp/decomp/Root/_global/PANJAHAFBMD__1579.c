// TypeDefIndex 1579
// Namespace: 
// public class PANJAHAFBMD
// Fields:
//   private XmlNode HJKLIDCAEOE; // 0x10
//   private string DEKCPPOJFEH; // 0x18
//   private int GAMONLCHOKL; // 0x20

// ===== public string KCHJCGEMCGE()  [RVA 0x31B1E74]
// PANJAHAFBMD$$KCHJCGEMCGE @ RVA 0x31B1E74

System_String_o * PANJAHAFBMD__KCHJCGEMCGE(PANJAHAFBMD_o *__this,MethodInfo *method)

{
  return (__this->fields).DEKCPPOJFEH;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x31B1E7C]
// PANJAHAFBMD$$.ctor @ RVA 0x31B1E7C

void PANJAHAFBMD___ctor(PANJAHAFBMD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_04566b83 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_4955/*"CurrentValue"*/);
    DAT_04566b83 = 1;
  }
  ppSVar5 = &(__this->fields).DEKCPPOJFEH;
  *ppSVar5 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar5);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).HJKLIDCAEOE = AHDGNOJPPIB;
  thunk_FUN_01c20e04(&__this->fields,AHDGNOJPPIB);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      *ppSVar5 = pSVar4;
      thunk_FUN_01c20e04(ppSVar5,pSVar4);
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_4955/*"CurrentValue"*/,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
        (__this->fields).GAMONLCHOKL = iVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CKPJNJBKMOA()  [RVA 0x31B1F9C]
// PANJAHAFBMD$$CKPJNJBKMOA @ RVA 0x31B1F9C

int32_t PANJAHAFBMD__CKPJNJBKMOA(PANJAHAFBMD_o *__this,MethodInfo *method)

{
  return (__this->fields).GAMONLCHOKL;
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x31B1FA4]
// PANJAHAFBMD$$HCOCAAIGNNL @ RVA 0x31B1FA4

void PANJAHAFBMD__HCOCAAIGNNL(PANJAHAFBMD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04566b84 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04566b84 = 1;
  }
  ppSVar4 = &(__this->fields).DEKCPPOJFEH;
  *ppSVar4 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar4,CJNHFNHJHPE);
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      }
                    /* try { // try from 032b202c to 033b218b has its CatchHandler @ 032b202c
                       catch() { ... } // from try @ 032b202c with catch @ 032b202c
                       catch() { ... } // from try @ 032b2278 with catch @ 032b202c
                       catch() { ... } // from try @ 032b2358 with catch @ 032b202c
                       catch() { ... } // from try @ 032b2398 with catch @ 032b202c
                       catch() { ... } // from try @ 032b23d8 with catch @ 032b202c */
      pSVar1 = (__this->fields).HJKLIDCAEOE;
      if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
        if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
           (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0),
           pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x032b206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar3,*ppSVar4,(pSVar3->klass->vtable)._10_set_Value.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ANDPGPBNPBC(int CJNHFNHJHPE)  [RVA 0x31B2074]
// PANJAHAFBMD$$ANDPGPBNPBC @ RVA 0x31B2074

void PANJAHAFBMD__ANDPGPBNPBC(PANJAHAFBMD_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int32_t *piVar5;
  
  if ((DAT_04566b85 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4955/*"CurrentValue"*/);
    DAT_04566b85 = 1;
  }
  piVar5 = &(__this->fields).GAMONLCHOKL;
  *piVar5 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_4955/*"CurrentValue"*/,(MethodInfo *)0x0);
      if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_4955/*"CurrentValue"*/,(MethodInfo *)0x0);
      }
      pSVar1 = (__this->fields).HJKLIDCAEOE;
      if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_4955/*"CurrentValue"*/,(MethodInfo *)0x0);
          pSVar4 = System_Int32__ToString((int32_t)piVar5,(MethodInfo *)0x0);
          if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032b2144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar3,pSVar4,(pSVar3->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

