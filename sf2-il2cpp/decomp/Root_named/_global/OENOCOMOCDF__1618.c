// TypeDefIndex 1618
// Namespace: 
// public class OENOCOMOCDF : ILGLOCBJFEG
// Fields:
//   private string JIJLBFGKNJK; // 0x38
//   private string JBNGADJBDHB; // 0x40
//   private string OKHENGIJCCF; // 0x48

// ===== public override bool EPBENPDCBFE(Model BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x31BB8BC]
// OENOCOMOCDF$$EPBENPDCBFE @ RVA 0x31BB8BC

bool OENOCOMOCDF__EPBENPDCBFE
               (OENOCOMOCDF_o *__this,Model_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  Model_o *pOVar3;
  ModelParameters_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  System_String_o *pSVar4;
  byte bVar5;
  int iVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566be4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566be4 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pOVar3 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (Model_o *)0x0) {
    bVar2 = false;
  }
  else {
    if (((pOVar3 == (Model_o *)0x0) ||
        (__this_00 = (pOVar3->fields).FAPMJJBOFEF, __this_00 == (ModelParameters_o *)0x0)) ||
       (__this_01 = ModelParameters__OIPAIAJGCDA(__this_00,(MethodInfo *)0x0),
       __this_01 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
LAB_032bb994:
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      pIVar1 = local_50.fields._current;
      if (!bVar2) {
        bVar5 = 0;
        iVar6 = 9;
        goto LAB_032bba60;
      }
      pSVar4 = (__this->fields).JBNGADJBDHB;
      if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if (!bVar2) {
        if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar4 = (__this->fields).JBNGADJBDHB;
        if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(pSVar4,(System_String_o *)pIVar1[3].klass,(MethodInfo *)0x0);
        if (!bVar2) goto LAB_032bb994;
      }
      pSVar4 = (__this->fields).OKHENGIJCCF;
      if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if (!bVar2) {
        if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar4 = (__this->fields).OKHENGIJCCF;
        if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(pSVar4,pIVar1[3].monitor,(MethodInfo *)0x0);
        if (!bVar2) goto LAB_032bb994;
      }
      pSVar4 = (__this->fields).JIJLBFGKNJK;
      if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if (bVar2) break;
      if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar4 = (__this->fields).JIJLBFGKNJK;
      if (pSVar4 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(pSVar4,pIVar1[1].monitor,(MethodInfo *)0x0);
    } while (!bVar2);
    bVar5 = 1;
    iVar6 = 8;
LAB_032bba60:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    bVar2 = (bool)(bVar5 & iVar6 == 8);
  }
  return bVar2;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x31BBB70]
// OENOCOMOCDF$$HNIHOIAMDPC @ RVA 0x31BBB70

void OENOCOMOCDF__HNIHOIAMDPC
               (OENOCOMOCDF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04566be5 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_12522/*"Subtype"*/);
    DAT_04566be5 = 1;
  }
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).JIJLBFGKNJK = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).JBNGADJBDHB = pSVar3;
        thunk_FUN_01c20e04();
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_12522/*"Subtype"*/,(MethodInfo *)0x0);
          pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          ppSVar4 = &(__this->fields).OKHENGIJCCF;
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


// ===== public void .ctor()  [RVA 0x31BBCC4]
// OENOCOMOCDF$$.ctor @ RVA 0x31BBCC4

void OENOCOMOCDF___ctor(OENOCOMOCDF_o *__this,MethodInfo *method)

{
  ILGLOCBJFEG___ctor((ILGLOCBJFEG_o *)__this,(MethodInfo *)0x0);
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,8,(MethodInfo *)0x0);
  return;
}

