// TypeDefIndex 1336
// Namespace: 
// private class IDLLJHPDAHE.GEBJFKLEAMM
// Fields:
//   private string NPFMOEOIEKM; // 0x10
//   private float EDJNGCBGHAC; // 0x18
//   private string KEAMOFCKGHH; // 0x20

// ===== public void .ctor()  [RVA 0x315EE18]
// IDLLJHPDAHE.GEBJFKLEAMM$$.ctor @ RVA 0x315EE18

void IDLLJHPDAHE_GEBJFKLEAMM___ctor(IDLLJHPDAHE_GEBJFKLEAMM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x315EFB0]
// IDLLJHPDAHE.GEBJFKLEAMM$$KCHJCGEMCGE @ RVA 0x315EFB0

System_String_o *
IDLLJHPDAHE_GEBJFKLEAMM__KCHJCGEMCGE(IDLLJHPDAHE_GEBJFKLEAMM_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}


// ===== public float JOBJIHGEPEP()  [RVA 0x315EFB8]
// IDLLJHPDAHE.GEBJFKLEAMM$$JOBJIHGEPEP @ RVA 0x315EFB8

float IDLLJHPDAHE_GEBJFKLEAMM__JOBJIHGEPEP(IDLLJHPDAHE_GEBJFKLEAMM_o *__this,MethodInfo *method)

{
  return (__this->fields).EDJNGCBGHAC;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x315EE20]
// IDLLJHPDAHE.GEBJFKLEAMM$$HNIHOIAMDPC @ RVA 0x315EE20

void IDLLJHPDAHE_GEBJFKLEAMM__HNIHOIAMDPC
               (IDLLJHPDAHE_GEBJFKLEAMM_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o **ppSVar4;
  float fVar5;
  
  if ((DAT_04566881 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3202/*"Attribute"*/);
    FUN_01bab630(&StringLiteral_3400/*"Base"*/);
    DAT_04566881 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_String_o *)
             (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
    (__this->fields).NPFMOEOIEKM = pSVar1;
    thunk_FUN_01c20e04();
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_3400/*"Base"*/,(MethodInfo *)0x0);
      fVar5 = GIAMPEGMNHE__FOKFAIPDIMB(pSVar3,0.0,(MethodInfo *)0x0);
      (__this->fields).EDJNGCBGHAC = fVar5;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_3202/*"Attribute"*/,(MethodInfo *)0x0);
        pSVar1 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar3,(System_String_o *)0x0,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).KEAMOFCKGHH;
        *ppSVar4 = pSVar1;
        thunk_FUN_01c20e04(ppSVar4,pSVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string EBAFJKOKCNA()  [RVA 0x315EFC0]
// IDLLJHPDAHE.GEBJFKLEAMM$$EBAFJKOKCNA @ RVA 0x315EFC0

System_String_o *
IDLLJHPDAHE_GEBJFKLEAMM__EBAFJKOKCNA(IDLLJHPDAHE_GEBJFKLEAMM_o *__this,MethodInfo *method)

{
  return (__this->fields).KEAMOFCKGHH;
}

