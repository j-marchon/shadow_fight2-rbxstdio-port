// TypeDefIndex 2407
// Namespace: 
// public class OHDDKGHEEPA.NHCNEOLLGHG
// Fields:
//   private string <DCNDIMPOGJD>k__BackingField; // 0x10
//   private string <AJLFECONJFN>k__BackingField; // 0x18
//   private float <BLCPPMPOEHJ>k__BackingField; // 0x20
//   private float <DAJMKNDILJA>k__BackingField; // 0x24

// ===== private void ANJMDKFPDIB(string CJNHFNHJHPE)  [RVA 0x3337B88]
// OHDDKGHEEPA.NHCNEOLLGHG$$ANJMDKFPDIB @ RVA 0x3337B88

void OHDDKGHEEPA_NHCNEOLLGHG__ANJMDKFPDIB
               (OHDDKGHEEPA_NHCNEOLLGHG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._AJLFECONJFN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string KNOGFGBDOAI()  [RVA 0x3337B90]
// OHDDKGHEEPA.NHCNEOLLGHG$$KNOGFGBDOAI @ RVA 0x3337B90

System_String_o *
OHDDKGHEEPA_NHCNEOLLGHG__KNOGFGBDOAI(OHDDKGHEEPA_NHCNEOLLGHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._DCNDIMPOGJD_k__BackingField;
}


// ===== public float LDJKOMBDING()  [RVA 0x3337B98]
// OHDDKGHEEPA.NHCNEOLLGHG$$LDJKOMBDING @ RVA 0x3337B98

float OHDDKGHEEPA_NHCNEOLLGHG__LDJKOMBDING(OHDDKGHEEPA_NHCNEOLLGHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._DAJMKNDILJA_k__BackingField;
}


// ===== private void GDNCEGEFGBA(float CJNHFNHJHPE)  [RVA 0x3337BA0]
// OHDDKGHEEPA.NHCNEOLLGHG$$GDNCEGEFGBA @ RVA 0x3337BA0

void OHDDKGHEEPA_NHCNEOLLGHG__GDNCEGEFGBA
               (OHDDKGHEEPA_NHCNEOLLGHG_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DAJMKNDILJA_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void BFCPEMMEPDC(float CJNHFNHJHPE)  [RVA 0x3337BA8]
// OHDDKGHEEPA.NHCNEOLLGHG$$BFCPEMMEPDC @ RVA 0x3337BA8

void OHDDKGHEEPA_NHCNEOLLGHG__BFCPEMMEPDC
               (OHDDKGHEEPA_NHCNEOLLGHG_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._BLCPPMPOEHJ_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public float PCNKBAKFNBL()  [RVA 0x3337BB0]
// OHDDKGHEEPA.NHCNEOLLGHG$$PCNKBAKFNBL @ RVA 0x3337BB0

float OHDDKGHEEPA_NHCNEOLLGHG__PCNKBAKFNBL(OHDDKGHEEPA_NHCNEOLLGHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._BLCPPMPOEHJ_k__BackingField;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x333660C]
// OHDDKGHEEPA.NHCNEOLLGHG$$.ctor @ RVA 0x333660C

void OHDDKGHEEPA_NHCNEOLLGHG___ctor
               (OHDDKGHEEPA_NHCNEOLLGHG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  float fVar4;
  
  if ((DAT_04567952 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_8578/*"LobbyAvatar"*/);
    FUN_01bab630(&StringLiteral_8579/*"LobbyFirstName"*/);
    FUN_01bab630(&StringLiteral_3263/*"AvatarPivotOffsetY"*/);
    FUN_01bab630(&StringLiteral_3264/*"AvatarScale"*/);
    DAT_04567952 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3264/*"AvatarScale"*/,(MethodInfo *)0x0);
      fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,1.0,(MethodInfo *)0x0);
      (__this->fields)._BLCPPMPOEHJ_k__BackingField = fVar4;
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_3263/*"AvatarPivotOffsetY"*/,(MethodInfo *)0x0);
        fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.5,(MethodInfo *)0x0);
        (__this->fields)._DAJMKNDILJA_k__BackingField = fVar4;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_8578/*"LobbyAvatar"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                             (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
          (__this->fields)._AJLFECONJFN_k__BackingField = pSVar3;
          thunk_FUN_01c20e04();
          pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar1,StringLiteral_8579/*"LobbyFirstName"*/,(MethodInfo *)0x0);
            pSVar3 = EIABCPKDEBD__JPKEHIBGOEM
                               (pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            (__this->fields)._DCNDIMPOGJD_k__BackingField = pSVar3;
            thunk_FUN_01c20e04(&__this->fields,pSVar3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HLELJNOPNDC(string CJNHFNHJHPE)  [RVA 0x3337BB8]
// OHDDKGHEEPA.NHCNEOLLGHG$$HLELJNOPNDC @ RVA 0x3337BB8

void OHDDKGHEEPA_NHCNEOLLGHG__HLELJNOPNDC
               (OHDDKGHEEPA_NHCNEOLLGHG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DCNDIMPOGJD_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string LGPPDPFFKPB()  [RVA 0x3337BC0]
// OHDDKGHEEPA.NHCNEOLLGHG$$LGPPDPFFKPB @ RVA 0x3337BC0

System_String_o *
OHDDKGHEEPA_NHCNEOLLGHG__LGPPDPFFKPB(OHDDKGHEEPA_NHCNEOLLGHG_o *__this,MethodInfo *method)

{
  return (__this->fields)._AJLFECONJFN_k__BackingField;
}

