// TypeDefIndex 802
// Namespace: 
// public class GDINNHKFKMB : IENLNOEDCFF
// Fields:
//   private string NPFMOEOIEKM; // 0x28
//   private bool HFPDAIABKNH; // 0x30
//   private bool BEGOLMJFLCG; // 0x31

// ===== private List<string> ONCFEIGIBGB(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3072338]
// GDINNHKFKMB$$ONCFEIGIBGB @ RVA 0x3072338

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_string__o *
GDINNHKFKMB__ONCFEIGIBGB(GDINNHKFKMB_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  int32_t local_24;
  
  if ((DAT_04565f85 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_4562/*"ConditionCurrentAnimation: getAnimationNames - wrong type: {0}"*/);
    DAT_04565f85 = 1;
  }
  switch((__this->fields).super.LOAFPIOGJAF) {
  case 1:
    goto joined_r0x03172480;
  case 2:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).FEONJHEFIIC;
    }
    break;
  case 3:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).AKMMPGCDEGB;
    }
    break;
  case 4:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).OFNOOFAEIPH;
    }
    break;
  default:
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = (__this->fields).super.LOAFPIOGJAF;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
    if (args == (System_Object_array *)0x0) break;
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar1;
    thunk_FUN_01c20e04(args->m_Items,pIVar1);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_4562/*"ConditionCurrentAnimation: getAnimationNames - wrong type: {0}"*/,args,(MethodInfo *)0x0);
joined_r0x03172480:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).FAPKAFBALDE;
    }
    break;
  case 6:
    if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
      return (AHEFOIOKDOK->fields).EBDPNMBDCII;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static bool HBLEFJOCOPK(List<string> FPEHEJBLCAO, List<string> PDEDHIBCEPJ)  [RVA 0x30724B8]
// GDINNHKFKMB$$HBLEFJOCOPK @ RVA 0x30724B8

/* WARNING: Removing unreachable block (ram,0x03172654) */

bool GDINNHKFKMB__HBLEFJOCOPK
               (System_Collections_Generic_List_string__o *FPEHEJBLCAO,
               System_Collections_Generic_List_string__o *PDEDHIBCEPJ,MethodInfo *method)

{
  Il2CppObject *a;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565f86 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_04565f86 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (FPEHEJBLCAO == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)FPEHEJBLCAO,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  bVar2 = 0;
  local_60.fields._index = local_98.fields._index;
  local_60.fields._version = local_98.fields._version;
  local_60.fields._list = local_98.fields._list;
  local_60.fields._current = local_98.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    a = local_60.fields._current;
    if (!bVar1) {
      uVar3 = 7;
      break;
    }
    if (PDEDHIBCEPJ == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)PDEDHIBCEPJ,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      if (!bVar1) {
        uVar3 = 2;
        goto LAB_031725dc;
      }
      bVar1 = System_String__op_Equality
                        ((System_String_o *)a,(System_String_o *)local_80.fields._current,
                         (MethodInfo *)0x0);
    } while (!bVar1);
    bVar2 = 1;
    uVar3 = 6;
LAB_031725dc:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  } while ((uVar3 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return (bool)(bVar2 & uVar3 == 6);
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3072718]
// GDINNHKFKMB$$.ctor @ RVA 0x3072718

void GDINNHKFKMB___ctor(GDINNHKFKMB_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if ((DAT_04565f87 & 1) == 0) {
    FUN_01bab630(&StringLiteral_734/*"$NoAnimation$"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_10262/*"Physics"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04565f87 = 1;
  }
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,10,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      if (pSVar3 != (System_Xml_XmlAttribute_o *)0x0) {
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03172870;
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar5 = &(__this->fields).NPFMOEOIEKM;
        *ppSVar5 = pSVar4;
        thunk_FUN_01c20e04(ppSVar5,pSVar4);
        bVar1 = System_String__op_Equality(*ppSVar5,StringLiteral_734/*"$NoAnimation$"*/,(MethodInfo *)0x0);
        (__this->fields).HFPDAIABKNH = bVar1;
      }
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_10262/*"Physics"*/,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
        (__this->fields).BEGOLMJFLCG = bVar1;
        return;
      }
    }
  }
LAB_03172870:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool ODCFKCPIGJJ(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3072874]
// GDINNHKFKMB$$ODCFKCPIGJJ @ RVA 0x3072874

bool GDINNHKFKMB__ODCFKCPIGJJ(GDINNHKFKMB_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  int32_t local_24;
  
  if ((DAT_04565f88 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_4562/*"ConditionCurrentAnimation: getAnimationNames - wrong type: {0}"*/);
    DAT_04565f88 = 1;
  }
  iVar1 = (__this->fields).super.LOAFPIOGJAF;
  if (iVar1 == 3) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_031729c4;
    cVar5 = (AHEFOIOKDOK->fields).JEFJKAKPOEP;
  }
  else if (iVar1 == 2) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_031729c4;
    cVar5 = (AHEFOIOKDOK->fields).AKMEMGPGKNH;
  }
  else {
    if (iVar1 != 1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_24 = (__this->fields).super.LOAFPIOGJAF;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(LCAJGLLBBEC_ELJAALFNLIP_TypeInfo,&local_24);
      if (args == (System_Object_array *)0x0) goto LAB_031729c4;
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items,pIVar2);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_4562/*"ConditionCurrentAnimation: getAnimationNames - wrong type: {0}"*/,args,(MethodInfo *)0x0);
    }
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
LAB_031729c4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    cVar5 = (AHEFOIOKDOK->fields).MKGLNHHGPGL;
  }
  return cVar5 != '\0';
}


// ===== private static bool HBLEFJOCOPK(string KGLJICLJHEL, List<string> PDEDHIBCEPJ)  [RVA 0x30729D8]
// GDINNHKFKMB$$HBLEFJOCOPK @ RVA 0x30729D8

bool GDINNHKFKMB__HBLEFJOCOPK
               (System_String_o *KGLJICLJHEL,System_Collections_Generic_List_string__o *PDEDHIBCEPJ,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565f89 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_04565f89 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (PDEDHIBCEPJ == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)PDEDHIBCEPJ,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_03172a9c;
    }
    bVar2 = System_String__op_Equality
                      (KGLJICLJHEL,(System_String_o *)local_48.fields._current,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_03172a9c:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return bVar1 && iVar3 == 4;
}


// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3072B3C]
// GDINNHKFKMB$$EPBENPDCBFE @ RVA 0x3072B3C

bool GDINNHKFKMB__EPBENPDCBFE(GDINNHKFKMB_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *PDEDHIBCEPJ;
  System_String_o *KGLJICLJHEL;
  MethodInfo *method_00;
  
  if ((DAT_04565f8a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&StringLiteral_733/*"$Move"*/);
    DAT_04565f8a = 1;
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = GDINNHKFKMB__ODCFKCPIGJJ(__this,AHEFOIOKDOK,method);
    bVar1 = ((__this->fields).BEGOLMJFLCG ^ bVar1) != 1;
  }
  else {
    PDEDHIBCEPJ = GDINNHKFKMB__ONCFEIGIBGB(__this,AHEFOIOKDOK,method);
    method_00 = (MethodInfo *)0x0;
    bVar1 = System_String__op_Equality
                      (StringLiteral_733/*"$Move"*/,(__this->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
    if (bVar1) {
      if (PDEDHIBCEPJ == (System_Collections_Generic_List_string__o *)0x0) {
LAB_03172c6c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((PDEDHIBCEPJ->fields)._size < 1) {
        bVar1 = false;
        goto LAB_03172c4c;
      }
      method_00 = Method_System_Collections_Generic_List<string>_get_Item__;
      KGLJICLJHEL = (System_String_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)PDEDHIBCEPJ,0,
                               (MethodInfo_26E4ADC *)
                               Method_System_Collections_Generic_List<string>_get_Item__);
      if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_03172c6c;
      PDEDHIBCEPJ = (AHEFOIOKDOK->fields).MPGOHFNJBLA;
    }
    else {
      if ((__this->fields).HFPDAIABKNH != false) {
        if (PDEDHIBCEPJ == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03172c6c;
        bVar1 = (PDEDHIBCEPJ->fields)._size == 0;
        goto LAB_03172c4c;
      }
      KGLJICLJHEL = (__this->fields).NPFMOEOIEKM;
    }
    bVar1 = GDINNHKFKMB__HBLEFJOCOPK(KGLJICLJHEL,PDEDHIBCEPJ,method_00);
  }
LAB_03172c4c:
  return (bool)(bVar1 ^ (__this->fields).super.GBBHFPBFOPI != false);
}

