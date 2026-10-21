// TypeDefIndex 2385
// Namespace: 
// public class EKGDLIKHEMA
// Fields:
//   private XmlNode HJKLIDCAEOE; // 0x10
//   private string DEKCPPOJFEH; // 0x18
//   private bool LDBJGDMBCKM; // 0x20

// ===== public string KCHJCGEMCGE()  [RVA 0x3331098]
// EKGDLIKHEMA$$KCHJCGEMCGE @ RVA 0x3331098

System_String_o * EKGDLIKHEMA__KCHJCGEMCGE(EKGDLIKHEMA_o *__this,MethodInfo *method)

{
  return (__this->fields).DEKCPPOJFEH;
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x33310A0]
// EKGDLIKHEMA$$HCOCAAIGNNL @ RVA 0x33310A0

void EKGDLIKHEMA__HCOCAAIGNNL(EKGDLIKHEMA_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04567905 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04567905 = 1;
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
                    /* WARNING: Could not recover jumptable at 0x03431168. Too many branches */
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


// ===== public bool FGMGOKNGJFJ()  [RVA 0x3331170]
// EKGDLIKHEMA$$FGMGOKNGJFJ @ RVA 0x3331170

bool EKGDLIKHEMA__FGMGOKNGJFJ(EKGDLIKHEMA_o *__this,MethodInfo *method)

{
  return (__this->fields).LDBJGDMBCKM;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3331178]
// EKGDLIKHEMA$$.ctor @ RVA 0x3331178

void EKGDLIKHEMA___ctor(EKGDLIKHEMA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_04567906 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9788/*"ObtainedReward"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_21605/*"true"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    DAT_04567906 = 1;
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
                           (pSVar2,StringLiteral_9788/*"ObtainedReward"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        if (pSVar4 != (System_String_o *)0x0) {
          pSVar4 = System_String__ToLower(pSVar4,(MethodInfo *)0x0);
          bVar1 = System_String__op_Equality(pSVar4,StringLiteral_21605/*"true"*/,(MethodInfo *)0x0);
          if (bVar1) {
            bVar1 = true;
          }
          else {
            bVar1 = System_String__op_Equality(pSVar4,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0);
          }
          (__this->fields).LDBJGDMBCKM = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void INOKKGKNDAH(bool CJNHFNHJHPE)  [RVA 0x33312FC]
// EKGDLIKHEMA$$INOKKGKNDAH @ RVA 0x33312FC

void EKGDLIKHEMA__INOKKGKNDAH(EKGDLIKHEMA_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
  if ((DAT_04567907 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9788/*"ObtainedReward"*/);
    FUN_01bab630(&StringLiteral_18196/*"false"*/);
    FUN_01bab630(&StringLiteral_21605/*"true"*/);
    DAT_04567907 = 1;
  }
  pSVar2 = (__this->fields).HJKLIDCAEOE;
  (__this->fields).LDBJGDMBCKM = CJNHFNHJHPE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9788/*"ObtainedReward"*/,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
        EIABCPKDEBD__HBGAGFJBGKD((__this->fields).HJKLIDCAEOE,StringLiteral_9788/*"ObtainedReward"*/,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).HJKLIDCAEOE;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar2->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._16_get_Attributes.method);
        if ((pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
           (pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_9788/*"ObtainedReward"*/,(MethodInfo *)0x0),
           pSVar4 != (System_Xml_XmlAttribute_o *)0x0)) {
          puVar1 = &StringLiteral_18196/*"false"*/;
          if ((__this->fields).LDBJGDMBCKM != false) {
            puVar1 = &StringLiteral_21605/*"true"*/;
          }
                    /* WARNING: Could not recover jumptable at 0x034313e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar4,*puVar1,(pSVar4->klass->vtable)._10_set_Value.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

