// TypeDefIndex 78
// Namespace: 
// public class HGLELMDNMMA
// Fields:
//   private int <MJMMFOPIGCL>k__BackingField; // 0x10
//   private string <COIPKAKHDFP>k__BackingField; // 0x18
//   private string <PGCEKJLODEJ>k__BackingField; // 0x20
//   private string <BFEKLJGLHEH>k__BackingField; // 0x28

// ===== private void LJGIFDBOCNN(string CJNHFNHJHPE)  [RVA 0x2FFC33C]
// HGLELMDNMMA$$LJGIFDBOCNN @ RVA 0x2FFC33C

void HGLELMDNMMA__LJGIFDBOCNN(HGLELMDNMMA_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BFEKLJGLHEH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x2FFC344]
// HGLELMDNMMA$$HCOCAAIGNNL @ RVA 0x2FFC344

void HGLELMDNMMA__HCOCAAIGNNL(HGLELMDNMMA_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string DNOMHOGFIFO()  [RVA 0x2FFC34C]
// HGLELMDNMMA$$DNOMHOGFIFO @ RVA 0x2FFC34C

System_String_o * HGLELMDNMMA__DNOMHOGFIFO(HGLELMDNMMA_o *__this,MethodInfo *method)

{
  return (__this->fields)._PGCEKJLODEJ_k__BackingField;
}


// ===== private void NEDAGOADKAO(int CJNHFNHJHPE)  [RVA 0x2FFC354]
// HGLELMDNMMA$$NEDAGOADKAO @ RVA 0x2FFC354

void HGLELMDNMMA__NEDAGOADKAO(HGLELMDNMMA_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MJMMFOPIGCL_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x2FFC35C]
// HGLELMDNMMA$$.ctor @ RVA 0x2FFC35C

void HGLELMDNMMA___ctor(HGLELMDNMMA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_04565ae8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8899/*"MaxValue"*/);
    FUN_01bab630(&StringLiteral_4476/*"Color"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_7289/*"Icon"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565ae8 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_8899/*"MaxValue"*/,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,0,(MethodInfo *)0x0);
        (__this->fields)._MJMMFOPIGCL_k__BackingField = iVar1;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_7289/*"Icon"*/,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          pSVar4 = OFFIONDOEPM__CNLBHLNMCCI(pSVar4,(MethodInfo *)0x0);
          (__this->fields)._PGCEKJLODEJ_k__BackingField = pSVar4;
          thunk_FUN_01c20e04();
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_4476/*"Color"*/,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
            ppSVar5 = &(__this->fields)._BFEKLJGLHEH_k__BackingField;
            *ppSVar5 = pSVar4;
            thunk_FUN_01c20e04(ppSVar5,pSVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string GLIBGECPOPG()  [RVA 0x2FFC4FC]
// HGLELMDNMMA$$GLIBGECPOPG @ RVA 0x2FFC4FC

System_String_o * HGLELMDNMMA__GLIBGECPOPG(HGLELMDNMMA_o *__this,MethodInfo *method)

{
  return (__this->fields)._BFEKLJGLHEH_k__BackingField;
}


// ===== public string IEOHBNIIMFL()  [RVA 0x2FFC504]
// HGLELMDNMMA$$IEOHBNIIMFL @ RVA 0x2FFC504

System_String_o * HGLELMDNMMA__IEOHBNIIMFL(HGLELMDNMMA_o *__this,MethodInfo *method)

{
  return (__this->fields)._PGCEKJLODEJ_k__BackingField;
}


// ===== public int HCGGEGFOBEM()  [RVA 0x2FFC50C]
// HGLELMDNMMA$$HCGGEGFOBEM @ RVA 0x2FFC50C

int32_t HGLELMDNMMA__HCGGEGFOBEM(HGLELMDNMMA_o *__this,MethodInfo *method)

{
  return (__this->fields)._MJMMFOPIGCL_k__BackingField;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x2FFC514]
// HGLELMDNMMA$$KCHJCGEMCGE @ RVA 0x2FFC514

System_String_o * HGLELMDNMMA__KCHJCGEMCGE(HGLELMDNMMA_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== private void FFHJDGPNCKJ(string CJNHFNHJHPE)  [RVA 0x2FFC51C]
// HGLELMDNMMA$$FFHJDGPNCKJ @ RVA 0x2FFC51C

void HGLELMDNMMA__FFHJDGPNCKJ(HGLELMDNMMA_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PGCEKJLODEJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

