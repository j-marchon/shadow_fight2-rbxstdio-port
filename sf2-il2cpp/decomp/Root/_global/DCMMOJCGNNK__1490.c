// TypeDefIndex 1490
// Namespace: 
// public class DCMMOJCGNNK : IENLNOEDCFF
// Fields:
//   private string <JEEFFPFPAMB>k__BackingField; // 0x28
//   private string <PKDJDCIAMPA>k__BackingField; // 0x30
//   private string <COIPKAKHDFP>k__BackingField; // 0x38

// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3198AA8]
// DCMMOJCGNNK$$EPBENPDCBFE @ RVA 0x3198AA8

bool DCMMOJCGNNK__EPBENPDCBFE(DCMMOJCGNNK_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566a8f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    DAT_04566a8f = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) ||
     (__this_00 = (AHEFOIOKDOK->fields).GFBNJPMOEKD,
     __this_00 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
LAB_03298b4c:
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    pIVar2 = local_50.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      return (__this->fields).super.GBBHFPBFOPI != false;
    }
    bVar3 = System_String__IsNullOrEmpty
                      ((__this->fields)._JEEFFPFPAMB_k__BackingField,(MethodInfo *)0x0);
    if (!bVar3) {
      if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = System_String__op_Equality
                        ((__this->fields)._JEEFFPFPAMB_k__BackingField,
                         (System_String_o *)pIVar2[3].klass,(MethodInfo *)0x0);
      if (!bVar3) goto LAB_03298b4c;
    }
    bVar3 = System_String__IsNullOrEmpty
                      ((__this->fields)._PKDJDCIAMPA_k__BackingField,(MethodInfo *)0x0);
    if (!bVar3) {
      if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = System_String__op_Equality
                        ((__this->fields)._PKDJDCIAMPA_k__BackingField,pIVar2[3].monitor,
                         (MethodInfo *)0x0);
      if (!bVar3) goto LAB_03298b4c;
    }
    bVar3 = System_String__IsNullOrEmpty
                      ((__this->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    if (bVar3) goto LAB_03298bd8;
    if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = System_String__op_Equality
                      ((__this->fields)._COIPKAKHDFP_k__BackingField,pIVar2[1].monitor,
                       (MethodInfo *)0x0);
    if (bVar3) {
LAB_03298bd8:
      bVar1 = (__this->fields).super.GBBHFPBFOPI;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      return bVar1 == false;
    }
  } while( true );
}


// ===== public string FGJIGPJGPHC()  [RVA 0x3198CCC]
// DCMMOJCGNNK$$FGJIGPJGPHC @ RVA 0x3198CCC

System_String_o * DCMMOJCGNNK__FGJIGPJGPHC(DCMMOJCGNNK_o *__this,MethodInfo *method)

{
  return (__this->fields)._PKDJDCIAMPA_k__BackingField;
}


// ===== private void CBHAFJEPLIO(string CJNHFNHJHPE)  [RVA 0x3198CD4]
// DCMMOJCGNNK$$CBHAFJEPLIO @ RVA 0x3198CD4

void DCMMOJCGNNK__CBHAFJEPLIO(DCMMOJCGNNK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PKDJDCIAMPA_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x3198CDC]
// DCMMOJCGNNK$$KCHJCGEMCGE @ RVA 0x3198CDC

System_String_o * DCMMOJCGNNK__KCHJCGEMCGE(DCMMOJCGNNK_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== private void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x3198CE4]
// DCMMOJCGNNK$$HCOCAAIGNNL @ RVA 0x3198CE4

void DCMMOJCGNNK__HCOCAAIGNNL(DCMMOJCGNNK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3198CEC]
// DCMMOJCGNNK$$.ctor @ RVA 0x3198CEC

void DCMMOJCGNNK___ctor(DCMMOJCGNNK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04566a90 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_12509/*"SubType"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566a90 = 1;
  }
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,0xd,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields)._JEEFFPFPAMB_k__BackingField = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_12509/*"SubType"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields)._PKDJDCIAMPA_k__BackingField = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          ppSVar4 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
          *ppSVar4 = pSVar3;
          thunk_FUN_01c20e04(ppSVar4,pSVar3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string FAGGDFBPOLE()  [RVA 0x3198E40]
// DCMMOJCGNNK$$FAGGDFBPOLE @ RVA 0x3198E40

System_String_o * DCMMOJCGNNK__FAGGDFBPOLE(DCMMOJCGNNK_o *__this,MethodInfo *method)

{
  return (__this->fields)._JEEFFPFPAMB_k__BackingField;
}


// ===== private void BFMDGLKOEGM(string CJNHFNHJHPE)  [RVA 0x3198E48]
// DCMMOJCGNNK$$BFMDGLKOEGM @ RVA 0x3198E48

void DCMMOJCGNNK__BFMDGLKOEGM(DCMMOJCGNNK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._JEEFFPFPAMB_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

