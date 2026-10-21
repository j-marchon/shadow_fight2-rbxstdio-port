// TypeDefIndex 2515
// Namespace: 
// public class NJPBBPOABKP
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x10
//   private PerkInfoItem <MEFGNAIILBJ>k__BackingField; // 0x18
//   private List<NKPJLEMPIKD> <NAGALBFLGCA>k__BackingField; // 0x20
//   private List<ILGLOCBJFEG> <FMMIIPHCHOH>k__BackingField; // 0x28
//   private List<HJNEOLCKEMD> <DEKNAHBMHGA>k__BackingField; // 0x30

// ===== public List<ILGLOCBJFEG> MFIECKACLFG()  [RVA 0x338DB90]
// NJPBBPOABKP$$MFIECKACLFG @ RVA 0x338DB90

System_Collections_Generic_List_ILGLOCBJFEG__o *
NJPBBPOABKP__MFIECKACLFG(NJPBBPOABKP_o *__this,MethodInfo *method)

{
  return (__this->fields)._FMMIIPHCHOH_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x338DB98]
// NJPBBPOABKP$$.ctor @ RVA 0x338DB98

void NJPBBPOABKP___ctor(NJPBBPOABKP_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool AFFNOKFNKON(NKPJLEMPIKD.GBBCKIANDCN PHCGJGCHKCM)  [RVA 0x338DBA0]
// NJPBBPOABKP$$AFFNOKFNKON @ RVA 0x338DBA0

bool NJPBBPOABKP__AFFNOKFNKON
               (NJPBBPOABKP_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  System_Collections_Generic_List_NKPJLEMPIKD__o *__this_00;
  Il2CppObject *pIVar3;
  int index;
  
  if ((DAT_04567bfa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NKPJLEMPIKD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NKPJLEMPIKD>_get_Item__);
    DAT_04567bfa = 1;
  }
  __this_00 = (__this->fields)._NAGALBFLGCA_k__BackingField;
  if (__this_00 != (System_Collections_Generic_List_NKPJLEMPIKD__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
LAB_0348dc4c:
        return index < iVar1;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<NKPJLEMPIKD>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar2 = (*pIVar3->klass->vtable[6].methodPtr)
                        (pIVar3,PHCGJGCHKCM,pIVar3->klass->vtable[6].method);
      if (((bVar2 ^ *(char *)&pIVar3[1].klass != '\0') & 1) != 0) goto LAB_0348dc4c;
      __this_00 = (__this->fields)._NAGALBFLGCA_k__BackingField;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_NKPJLEMPIKD__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void MBBCCJEGOHD(List<ILGLOCBJFEG> CJNHFNHJHPE)  [RVA 0x338DC68]
// NJPBBPOABKP$$MBBCCJEGOHD @ RVA 0x338DC68

void NJPBBPOABKP__MBBCCJEGOHD
               (NJPBBPOABKP_o *__this,System_Collections_Generic_List_ILGLOCBJFEG__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._FMMIIPHCHOH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public List<NKPJLEMPIKD> PCNCALJHJHE()  [RVA 0x338DC70]
// NJPBBPOABKP$$PCNCALJHJHE @ RVA 0x338DC70

System_Collections_Generic_List_NKPJLEMPIKD__o *
NJPBBPOABKP__PCNCALJHJHE(NJPBBPOABKP_o *__this,MethodInfo *method)

{
  return (__this->fields)._NAGALBFLGCA_k__BackingField;
}


// ===== public PerkInfoItem MEMIEEBIALH()  [RVA 0x338DC78]
// NJPBBPOABKP$$MEMIEEBIALH @ RVA 0x338DC78

PerkInfoItem_o * NJPBBPOABKP__MEMIEEBIALH(NJPBBPOABKP_o *__this,MethodInfo *method)

{
  return (__this->fields)._MEFGNAIILBJ_k__BackingField;
}


// ===== public void EJNODBBHHCG(PerkInfoItem CJNHFNHJHPE)  [RVA 0x338DC80]
// NJPBBPOABKP$$EJNODBBHHCG @ RVA 0x338DC80

void NJPBBPOABKP__EJNODBBHHCG(NJPBBPOABKP_o *__this,PerkInfoItem_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MEFGNAIILBJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x338DC88]
// NJPBBPOABKP$$RandomizeObscuredVars @ RVA 0x338DC88

void NJPBBPOABKP__RandomizeObscuredVars(NJPBBPOABKP_o *__this,MethodInfo *method)

{
  System_Action_NKPJLEMPIKD__o **ppSVar1;
  System_Action_ILGLOCBJFEG__o **ppSVar2;
  System_Action_HJNEOLCKEMD__o **ppSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_HJNEOLCKEMD__o *__this_00;
  System_Collections_Generic_List_NKPJLEMPIKD__o *__this_01;
  System_Collections_Generic_List_ILGLOCBJFEG__o *__this_02;
  System_Action_HJNEOLCKEMD__o *action;
  System_Action_NKPJLEMPIKD__o *action_00;
  System_Action_ILGLOCBJFEG__o *action_01;
  
  if ((DAT_04567bfb & 1) == 0) {
    FUN_01bab630(&System_Action<ILGLOCBJFEG>_TypeInfo);
    FUN_01bab630(&System_Action<NKPJLEMPIKD>_TypeInfo);
    FUN_01bab630(&System_Action<HJNEOLCKEMD>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NKPJLEMPIKD>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ILGLOCBJFEG>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HJNEOLCKEMD>_ForEach__);
    FUN_01bab630(&Method_NJPBBPOABKP_<>c_ALLDFCIBHMN__);
    FUN_01bab630(&Method_NJPBBPOABKP_<>c_HFCDEALOHBP__);
    FUN_01bab630(&Method_NJPBBPOABKP_<>c_JGNKOLEBFDL__);
    FUN_01bab630(&NJPBBPOABKP_<>c_TypeInfo);
    DAT_04567bfb = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields)._NAGALBFLGCA_k__BackingField;
  if ((NJPBBPOABKP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NJPBBPOABKP_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action_00 = NJPBBPOABKP_<>c_TypeInfo->static_fields->__9__25_0;
  if (action_00 == (System_Action_NKPJLEMPIKD__o *)0x0) {
    if ((NJPBBPOABKP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NJPBBPOABKP_<>c_TypeInfo,method);
    }
    action_00 = (System_Action_NKPJLEMPIKD__o *)
                thunk_FUN_01bda818(System_Action<NKPJLEMPIKD>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &NJPBBPOABKP_<>c_TypeInfo->static_fields->__9__25_0;
    *ppSVar1 = action_00;
    thunk_FUN_01c20e04(ppSVar1,action_00);
  }
  if (__this_01 != (System_Collections_Generic_List_NKPJLEMPIKD__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Action_T__o *)action_00,
               Method_System_Collections_Generic_List<NKPJLEMPIKD>_ForEach__);
    __this_02 = (__this->fields)._FMMIIPHCHOH_k__BackingField;
    if ((NJPBBPOABKP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_01 = NJPBBPOABKP_<>c_TypeInfo->static_fields->__9__25_1;
    if (action_01 == (System_Action_ILGLOCBJFEG__o *)0x0) {
      if ((NJPBBPOABKP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action_01 = (System_Action_ILGLOCBJFEG__o *)
                  thunk_FUN_01bda818(System_Action<ILGLOCBJFEG>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &NJPBBPOABKP_<>c_TypeInfo->static_fields->__9__25_1;
      *ppSVar2 = action_01;
      thunk_FUN_01c20e04(ppSVar2,action_01);
    }
    if (__this_02 != (System_Collections_Generic_List_ILGLOCBJFEG__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_02,
                 (System_Action_T__o *)action_01,
                 Method_System_Collections_Generic_List<ILGLOCBJFEG>_ForEach__);
      __this_00 = (__this->fields)._DEKNAHBMHGA_k__BackingField;
      if ((NJPBBPOABKP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = NJPBBPOABKP_<>c_TypeInfo->static_fields->__9__25_2;
      if (action == (System_Action_HJNEOLCKEMD__o *)0x0) {
        if ((NJPBBPOABKP_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = (System_Action_HJNEOLCKEMD__o *)
                 thunk_FUN_01bda818(System_Action<HJNEOLCKEMD>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar3 = &NJPBBPOABKP_<>c_TypeInfo->static_fields->__9__25_2;
        *ppSVar3 = action;
        thunk_FUN_01c20e04(ppSVar3,action);
      }
      if (__this_00 != (System_Collections_Generic_List_HJNEOLCKEMD__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<HJNEOLCKEMD>_ForEach__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool JENPGIOLJAJ(Model BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x338DF04]
// NJPBBPOABKP$$JENPGIOLJAJ @ RVA 0x338DF04

bool NJPBBPOABKP__JENPGIOLJAJ
               (NJPBBPOABKP_o *__this,Model_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  System_Collections_Generic_List_ILGLOCBJFEG__o *__this_00;
  Il2CppObject *pIVar3;
  int index;
  
  if ((DAT_04567bfc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ILGLOCBJFEG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ILGLOCBJFEG>_get_Item__);
    DAT_04567bfc = 1;
  }
  __this_00 = (__this->fields)._FMMIIPHCHOH_k__BackingField;
  if (__this_00 != (System_Collections_Generic_List_ILGLOCBJFEG__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
LAB_0348dfbc:
        return iVar1 <= index;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<ILGLOCBJFEG>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar2 = (*pIVar3->klass->vtable[6].methodPtr)
                        (pIVar3,BCKBBGCOMJD,FPEHEJBLCAO,pIVar3->klass->vtable[6].method);
      if ((bool)(bVar2 & 1) == (*(char *)&pIVar3[1].klass != '\0')) goto LAB_0348dfbc;
      __this_00 = (__this->fields)._FMMIIPHCHOH_k__BackingField;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_ILGLOCBJFEG__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void KMEJFLNEIPA(List<HJNEOLCKEMD> CJNHFNHJHPE)  [RVA 0x338DFD8]
// NJPBBPOABKP$$KMEJFLNEIPA @ RVA 0x338DFD8

void NJPBBPOABKP__KMEJFLNEIPA
               (NJPBBPOABKP_o *__this,System_Collections_Generic_List_HJNEOLCKEMD__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._DEKNAHBMHGA_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x338DFE0]
// NJPBBPOABKP$$KCHJCGEMCGE @ RVA 0x338DFE0

System_String_o * NJPBBPOABKP__KCHJCGEMCGE(NJPBBPOABKP_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x338DFE8]
// NJPBBPOABKP$$HNIHOIAMDPC @ RVA 0x338DFE8

void NJPBBPOABKP__HNIHOIAMDPC
               (NJPBBPOABKP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_Xml_XmlNode_o *AHDGNOJPPIB_01;
  System_Xml_XmlNode_o *AHDGNOJPPIB_02;
  System_Collections_Generic_List_NKPJLEMPIKD__o *pSVar2;
  System_Collections_Generic_List_ILGLOCBJFEG__o *pSVar3;
  System_Collections_Generic_List_HJNEOLCKEMD__o *pSVar4;
  System_Collections_Generic_List_HJNEOLCKEMD__o **ppSVar5;
  
  if ((DAT_04567bfd & 1) == 0) {
    FUN_01bab630(&StringLiteral_4577/*"Conditions"*/);
    FUN_01bab630(&StringLiteral_2731/*"Actions"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_5995/*"Events"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567bfd = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar1;
      thunk_FUN_01c20e04();
      AHDGNOJPPIB_00 =
           (System_Xml_XmlNode_o *)
           (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                     (AHDGNOJPPIB,StringLiteral_5995/*"Events"*/,
                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      AHDGNOJPPIB_01 =
           (System_Xml_XmlNode_o *)
           (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                     (AHDGNOJPPIB,StringLiteral_4577/*"Conditions"*/,
                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      AHDGNOJPPIB_02 =
           (System_Xml_XmlNode_o *)
           (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                     (AHDGNOJPPIB,StringLiteral_2731/*"Actions"*/,
                      (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      pSVar2 = NKPJLEMPIKD__EOHMFJFFFIN
                         (AHDGNOJPPIB_00,(__this->fields)._MEFGNAIILBJ_k__BackingField,
                          (MethodInfo *)0x0);
      (__this->fields)._NAGALBFLGCA_k__BackingField = pSVar2;
      thunk_FUN_01c20e04();
      pSVar3 = ILGLOCBJFEG__EOHMFJFFFIN
                         (AHDGNOJPPIB_01,(__this->fields)._MEFGNAIILBJ_k__BackingField,
                          (MethodInfo *)0x0);
      (__this->fields)._FMMIIPHCHOH_k__BackingField = pSVar3;
      thunk_FUN_01c20e04();
      pSVar4 = HJNEOLCKEMD__EOHMFJFFFIN
                         (AHDGNOJPPIB_02,(__this->fields)._MEFGNAIILBJ_k__BackingField,__this,
                          (MethodInfo *)0x0);
      ppSVar5 = &(__this->fields)._DEKNAHBMHGA_k__BackingField;
      *ppSVar5 = pSVar4;
      thunk_FUN_01c20e04(ppSVar5,pSVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<HJNEOLCKEMD> CAEOCMPDNOL()  [RVA 0x338E188]
// NJPBBPOABKP$$CAEOCMPDNOL @ RVA 0x338E188

System_Collections_Generic_List_HJNEOLCKEMD__o *
NJPBBPOABKP__CAEOCMPDNOL(NJPBBPOABKP_o *__this,MethodInfo *method)

{
  return (__this->fields)._DEKNAHBMHGA_k__BackingField;
}


// ===== public void GIENGNEGHPJ(EHCCNKFIPPA KOKHLOCPDIK)  [RVA 0x338E190]
// NJPBBPOABKP$$GIENGNEGHPJ @ RVA 0x338E190

void NJPBBPOABKP__GIENGNEGHPJ(NJPBBPOABKP_o *__this,EHCCNKFIPPA_o *KOKHLOCPDIK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HJNEOLCKEMD__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567bfe & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
    DAT_04567bfe = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._DEKNAHBMHGA_k__BackingField;
  if (__this_00 != (System_Collections_Generic_List_HJNEOLCKEMD__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HJNEOLCKEMD>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<HJNEOLCKEMD>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      (*(local_38.fields._current)->klass->vtable[5].methodPtr)
                (local_38.fields._current,KOKHLOCPDIK,
                 (local_38.fields._current)->klass->vtable[5].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void EAMLJFLHNCC(List<NKPJLEMPIKD> CJNHFNHJHPE)  [RVA 0x338E2E8]
// NJPBBPOABKP$$EAMLJFLHNCC @ RVA 0x338E2E8

void NJPBBPOABKP__EAMLJFLHNCC
               (NJPBBPOABKP_o *__this,System_Collections_Generic_List_NKPJLEMPIKD__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._NAGALBFLGCA_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== protected void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x338E2F0]
// NJPBBPOABKP$$HCOCAAIGNNL @ RVA 0x338E2F0

void NJPBBPOABKP__HCOCAAIGNNL(NJPBBPOABKP_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

