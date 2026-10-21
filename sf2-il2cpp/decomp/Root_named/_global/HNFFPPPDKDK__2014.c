// TypeDefIndex 2014
// Namespace: 
// public class HNFFPPPDKDK
// Fields:
//   private int GHPHFGBIPCI; // 0x10
//   private int IPFKFHHBDDI; // 0x14
//   private string DEKCPPOJFEH; // 0x18
//   private PerkInfoItem <CGEGGOPIPHH>k__BackingField; // 0x20
//   private XmlNode HJKLIDCAEOE; // 0x28

// ===== public int LGIMDOAMCNG()  [RVA 0x3297C0C]
// HNFFPPPDKDK$$LGIMDOAMCNG @ RVA 0x3297C0C

int32_t HNFFPPPDKDK__LGIMDOAMCNG(HNFFPPPDKDK_o *__this,MethodInfo *method)

{
  return (__this->fields).IPFKFHHBDDI;
}


// ===== public void FAPGKEAKOKA(Dictionary<string, string> KKMIDEOIMHK)  [RVA 0x3297C14]
// HNFFPPPDKDK$$FAPGKEAKOKA @ RVA 0x3297C14

void HNFFPPPDKDK__FAPGKEAKOKA
               (HNFFPPPDKDK_o *__this,
               System_Collections_Generic_Dictionary_string__string__o *KKMIDEOIMHK,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Xml_XmlNode_o *pSVar4;
  long lVar5;
  System_Xml_XmlElement_o *JHMENEKPIBO;
  System_Xml_XmlAttribute_o *pSVar6;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_04567376 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_Dispose__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    FUN_01bab630(&StringLiteral_11876/*"Set"*/);
    DAT_04567376 = 1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields).HJKLIDCAEOE;
  if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
    lVar5 = (*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                      (pSVar4,StringLiteral_11876/*"Set"*/,(pSVar4->klass->vtable)._51_get_Item.method);
    if (lVar5 != 0) {
      pSVar4 = (__this->fields).HJKLIDCAEOE;
      if (pSVar4 == (System_Xml_XmlNode_o *)0x0) goto LAB_03397da4;
      (*(pSVar4->klass->vtable)._25_RemoveChild.methodPtr)
                (pSVar4,lVar5,(pSVar4->klass->vtable)._25_RemoveChild.method);
    }
    if (KKMIDEOIMHK != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      iVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Count
                        ((System_Collections_Generic_Dictionary_object__object__o *)KKMIDEOIMHK,
                         Method_System_Collections_Generic_Dictionary<string,_string>_get_Count__);
      if (iVar3 != 0) {
        JHMENEKPIBO = EIABCPKDEBD__BHPIHHJHELJ
                                ((__this->fields).HJKLIDCAEOE,StringLiteral_11876/*"Set"*/,(MethodInfo *)0x0)
        ;
        System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                  (&local_60,(System_Collections_Generic_Dictionary_object__object__o *)KKMIDEOIMHK,
                   Method_System_Collections_Generic_Dictionary<string,_string>_GetEnumerator__);
        while (bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_MoveNext__
                                 ), pIVar1 = local_60.fields._current.fields.value, bVar2) {
          pSVar6 = EIABCPKDEBD__HBGAGFJBGKD
                             ((System_Xml_XmlNode_o *)JHMENEKPIBO,
                              (System_String_o *)local_60.fields._current.fields.key,
                              (MethodInfo *)0x0);
          if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          (*(pSVar6->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar6,pIVar1,(pSVar6->klass->vtable)._10_set_Value.method);
        }
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_string>_Dispose__
                  );
      }
      return;
    }
  }
LAB_03397da4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x3297E18]
// HNFFPPPDKDK$$HCOCAAIGNNL @ RVA 0x3297E18

void HNFFPPPDKDK__HCOCAAIGNNL(HNFFPPPDKDK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o **ppSVar3;
  
  if ((DAT_04567377 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    DAT_04567377 = 1;
  }
  ppSVar3 = &(__this->fields).DEKCPPOJFEH;
  *ppSVar3 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar3,CJNHFNHJHPE);
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      if ((pSVar2 != (System_Xml_XmlAttribute_o *)0x0) ||
         (pSVar2 = EIABCPKDEBD__HBGAGFJBGKD
                             ((__this->fields).HJKLIDCAEOE,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0),
         pSVar2 != (System_Xml_XmlAttribute_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x03397eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,*ppSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LAAHJCGKKNK(PerkInfoItem CJNHFNHJHPE)  [RVA 0x3297EC0]
// HNFFPPPDKDK$$LAAHJCGKKNK @ RVA 0x3297EC0

void HNFFPPPDKDK__LAAHJCGKKNK(HNFFPPPDKDK_o *__this,PerkInfoItem_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CGEGGOPIPHH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public int EOEAKGGDBFH()  [RVA 0x3297EC8]
// HNFFPPPDKDK$$EOEAKGGDBFH @ RVA 0x3297EC8

int32_t HNFFPPPDKDK__EOEAKGGDBFH(HNFFPPPDKDK_o *__this,MethodInfo *method)

{
  return (__this->fields).GHPHFGBIPCI;
}


// ===== public void AKJBHHAHMPG(int CJNHFNHJHPE)  [RVA 0x3297ED0]
// HNFFPPPDKDK$$AKJBHHAHMPG @ RVA 0x3297ED0

void HNFFPPPDKDK__AKJBHHAHMPG(HNFFPPPDKDK_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int32_t __this_00;
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04567378 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    DAT_04567378 = 1;
  }
  (__this->fields).GHPHFGBIPCI = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_01,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
      __this_00 = (int32_t)&__this->fields;
      if (pSVar2 == (System_Xml_XmlAttribute_o *)0x0) {
        pSVar2 = EIABCPKDEBD__HBGAGFJBGKD
                           ((__this->fields).HJKLIDCAEOE,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
        pSVar3 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
        if (pSVar2 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_03397f98;
      }
      else {
        pSVar3 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
      }
                    /* WARNING: Could not recover jumptable at 0x03397f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
      return;
    }
  }
LAB_03397f98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KCHJCGEMCGE()  [RVA 0x3297F9C]
// HNFFPPPDKDK$$KCHJCGEMCGE @ RVA 0x3297F9C

System_String_o * HNFFPPPDKDK__KCHJCGEMCGE(HNFFPPPDKDK_o *__this,MethodInfo *method)

{
  return (__this->fields).DEKCPPOJFEH;
}


// ===== public void DJJHOOKLHHL(int CJNHFNHJHPE)  [RVA 0x3297FA4]
// HNFFPPPDKDK$$DJJHOOKLHHL @ RVA 0x3297FA4

void HNFFPPPDKDK__DJJHOOKLHHL(HNFFPPPDKDK_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int32_t __this_00;
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  int32_t *piVar4;
  
  if ((DAT_04567379 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14589/*"UpgradeLevel"*/);
    DAT_04567379 = 1;
  }
  piVar4 = &(__this->fields).IPFKFHHBDDI;
  *piVar4 = CJNHFNHJHPE;
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    __this_01 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (__this_01 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_01,StringLiteral_14589/*"UpgradeLevel"*/,(MethodInfo *)0x0);
      __this_00 = (int32_t)piVar4;
      if (pSVar2 == (System_Xml_XmlAttribute_o *)0x0) {
        pSVar2 = EIABCPKDEBD__HBGAGFJBGKD
                           ((__this->fields).HJKLIDCAEOE,StringLiteral_14589/*"UpgradeLevel"*/,(MethodInfo *)0x0);
        pSVar3 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
        if (pSVar2 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_0339806c;
      }
      else {
        pSVar3 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
      }
                    /* WARNING: Could not recover jumptable at 0x03398068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                (pSVar2,pSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
      return;
    }
  }
LAB_0339806c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PerkInfoItem LNNIHAKPANA()  [RVA 0x3298070]
// HNFFPPPDKDK$$LNNIHAKPANA @ RVA 0x3298070

PerkInfoItem_o * HNFFPPPDKDK__LNNIHAKPANA(HNFFPPPDKDK_o *__this,MethodInfo *method)

{
  return (__this->fields)._CGEGGOPIPHH_k__BackingField;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3298078]
// HNFFPPPDKDK$$.ctor @ RVA 0x3298078

void HNFFPPPDKDK___ctor(HNFFPPPDKDK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlNode_o *pSVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o **ppSVar7;
  System_Xml_XmlNode_o **ppSVar8;
  
  if ((DAT_0456737a & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    FUN_01bab630(&StringLiteral_14589/*"UpgradeLevel"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_0456737a = 1;
  }
  ppSVar7 = &(__this->fields).DEKCPPOJFEH;
  *ppSVar7 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar7);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar8 = &(__this->fields).HJKLIDCAEOE;
  *ppSVar8 = AHDGNOJPPIB;
  thunk_FUN_01c20e04(ppSVar8,AHDGNOJPPIB);
  pSVar3 = *ppSVar8;
  if (pSVar3 == (System_Xml_XmlNode_o *)0x0) goto LAB_03398288;
  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
           (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                     (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
  if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03398288;
  pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                     (pSVar4,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
  if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) {
LAB_0339816c:
    pSVar5 = EIABCPKDEBD__HBGAGFJBGKD(*ppSVar8,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
    if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) goto LAB_03398288;
    (*(pSVar5->klass->vtable)._10_set_Value.methodPtr)
              (pSVar5,StringLiteral_1567/*"0"*/,(pSVar5->klass->vtable)._10_set_Value.method);
  }
  else {
    pSVar6 = (System_String_o *)
             (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
    bVar1 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    if (bVar1) goto LAB_0339816c;
  }
  pSVar3 = *ppSVar8;
  if (pSVar3 == (System_Xml_XmlNode_o *)0x0) goto LAB_03398288;
  pSVar4 = (System_Xml_XmlAttributeCollection_o *)
           (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                     (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
  if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03398288;
  LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar4,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
  if (LBJNDMNEJJB == (System_Xml_XmlAttribute_o *)0x0) {
LAB_033981ec:
    LBJNDMNEJJB = EIABCPKDEBD__HBGAGFJBGKD(*ppSVar8,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
  }
  else {
    pSVar6 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    bVar1 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    if (bVar1) goto LAB_033981ec;
  }
  iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
  (__this->fields).GHPHFGBIPCI = iVar2;
  pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  (__this->fields).DEKCPPOJFEH = pSVar6;
  thunk_FUN_01c20e04(ppSVar7,pSVar6);
  pSVar3 = (__this->fields).HJKLIDCAEOE;
  if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar3->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_14589/*"UpgradeLevel"*/,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
      (__this->fields).IPFKFHHBDDI = iVar2;
      return;
    }
  }
LAB_03398288:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

