// TypeDefIndex 1911
// Namespace: 
// public class KAJIALENBGD
// Fields:
//   private XmlNode HJKLIDCAEOE; // 0x10
//   private string DEKCPPOJFEH; // 0x18

// ===== public void .ctor(XmlNode GGDPPDFOEOH, string KGLJICLJHEL)  [RVA 0x325D1E8]
// KAJIALENBGD$$.ctor @ RVA 0x325D1E8

void KAJIALENBGD___ctor(KAJIALENBGD_o *__this,System_Xml_XmlNode_o *GGDPPDFOEOH,
                       System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  System_Xml_XmlElement_o *pSVar1;
  MethodInfo *method_00;
  
  if ((DAT_04567196 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11252/*"RepostAchievement"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567196 = 1;
  }
  (__this->fields).DEKCPPOJFEH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  pSVar1 = EIABCPKDEBD__BHPIHHJHELJ(GGDPPDFOEOH,StringLiteral_11252/*"RepostAchievement"*/,(MethodInfo *)0x0);
  (__this->fields).HJKLIDCAEOE = (System_Xml_XmlNode_o *)pSVar1;
  thunk_FUN_01c20e04();
  KAJIALENBGD__HCOCAAIGNNL(__this,KGLJICLJHEL,method_00);
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x325D368]
// KAJIALENBGD$$KCHJCGEMCGE @ RVA 0x325D368

System_String_o * KAJIALENBGD__KCHJCGEMCGE(KAJIALENBGD_o *__this,MethodInfo *method)

{
  return (__this->fields).DEKCPPOJFEH;
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x325D298]
// KAJIALENBGD$$HCOCAAIGNNL @ RVA 0x325D298

void KAJIALENBGD__HCOCAAIGNNL(KAJIALENBGD_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04567197 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04567197 = 1;
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
      pSVar1 = (__this->fields).HJKLIDCAEOE;
      if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
        if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
           (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0),
           pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0335d360. Too many branches */
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


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x325D370]
// KAJIALENBGD$$.ctor @ RVA 0x325D370

void KAJIALENBGD___ctor(KAJIALENBGD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567198 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567198 = 1;
  }
  ppSVar2 = &(__this->fields).DEKCPPOJFEH;
  *ppSVar2 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).HJKLIDCAEOE = AHDGNOJPPIB;
  thunk_FUN_01c20e04(&__this->fields,AHDGNOJPPIB);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

