// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Conditions.ConditionInterval  (obfuscated PCGLKFBEGCD)
// TypeDefIndex 2132
// Namespace: 
// public class ConditionInterval : ConditionAnimation
// Fields:
//   private IntervalAnimation.IMLPLLLPALI JBNGADJBDHB; // 0x28
//   private string NPFMOEOIEKM; // 0x30

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x32CFBE0]
// ConditionInterval$$.ctor @ RVA 0x32CFBE0

void ConditionInterval___ctor(ConditionInterval_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  int32_t iVar5;
  
  if ((DAT_04567543 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3508/*"Block"*/);
    FUN_01bab630(&StringLiteral_3160/*"Attack"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_7903/*"Invulnerable"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567543 = 1;
  }
  ConditionAnimation___ctor((ConditionAnimation_o *)__this,9,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    (__this->fields).NPFMOEOIEKM = pSVar4;
    thunk_FUN_01c20e04();
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
        iVar5 = 0;
      }
      else {
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_033cfd98;
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar4,StringLiteral_3160/*"Attack"*/,(MethodInfo *)0x0);
        if (bVar1) {
          iVar5 = 4;
        }
        else {
          bVar1 = System_String__op_Equality(pSVar4,StringLiteral_3508/*"Block"*/,(MethodInfo *)0x0);
          if (bVar1) {
            iVar5 = 5;
          }
          else {
            bVar1 = System_String__op_Equality(pSVar4,StringLiteral_7903/*"Invulnerable"*/,(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            iVar5 = 6;
          }
        }
      }
      (__this->fields).JBNGADJBDHB = iVar5;
      return;
    }
  }
LAB_033cfd98:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x32CFD9C]
// ConditionInterval$$EPBENPDCBFE @ RVA 0x32CFD9C

bool ConditionInterval__EPBENPDCBFE(ConditionInterval_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  byte bVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567544 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
                    /* try { // try from 033cfdf4 to 034d0037 has its CatchHandler @ 033cfdf4
                       catch() { ... } // from try @ 033cfdf4 with catch @ 033cfdf4
                       catch() { ... } // from try @ 033d01c0 with catch @ 033cfdf4
                       catch() { ... } // from try @ 033d0270 with catch @ 033cfdf4
                       catch() { ... } // from try @ 033d0278 with catch @ 033cfdf4
                       catch() { ... } // from try @ 033d0370 with catch @ 033cfdf4 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567544 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00 = (AHEFOIOKDOK->fields).GLFJDDHEMNO;
  if (__this_00 == (System_Collections_Generic_List_JADGCGOJLJB__o *)0x0) {
    bVar5 = 0;
  }
  else {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IntervalAnimation>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
LAB_033cfe58:
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_MoveNext__);
      pIVar2 = local_60.fields._current;
      if (!bVar3) {
        bVar5 = 0;
        goto LAB_033cfec4;
      }
      iVar1 = (__this->fields).JBNGADJBDHB;
      if (iVar1 != 0) {
        if ((IntervalAnimation_o *)local_60.fields._current == (IntervalAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar4 = IntervalAnimation__NHGGBEACKBD
                          ((IntervalAnimation_o *)local_60.fields._current,(MethodInfo *)0x0);
        if (iVar1 != iVar4) goto LAB_033cfe58;
      }
      bVar3 = System_String__op_Equality
                        ((__this->fields).NPFMOEOIEKM,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if (bVar3) break;
      if ((IntervalAnimation_o *)pIVar2 == (IntervalAnimation_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = System_String__op_Equality
                        (((IntervalAnimation_Fields *)((long)pIVar2 + 0x10))->JIJLBFGKNJK,
                         (__this->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
    } while (!bVar3);
    bVar5 = 1;
LAB_033cfec4:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<IntervalAnimation>_Dispose__);
  }
  return (bool)(bVar5 ^ (__this->fields).super.GBBHFPBFOPI != false);
}


// ===== private List<IntervalAnimation> PPHOIDGOHAD(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x32CFF94]
// ConditionInterval$$PPHOIDGOHAD @ RVA 0x32CFF94

System_Collections_Generic_List_JADGCGOJLJB__o *
ConditionInterval__PPHOIDGOHAD(ConditionInterval_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  System_Object_array *args;
  System_String_o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_JADGCGOJLJB__o *pSVar4;
  undefined8 uVar5;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04567545 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LCAJGLLBBEC_ELJAALFNLIP_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_4562/*"ConditionCurrentAnimation: getAnimationNames - wrong type: {0}"*/);
    DAT_04567545 = 1;
  }
  iVar1 = (__this->fields).super.LOAFPIOGJAF;
  if (iVar1 == 3) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033d00e8;
    pSVar4 = (AHEFOIOKDOK->fields).FMCHOKFMHKC;
  }
  else if (iVar1 == 2) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_033d00e8;
    pSVar4 = (AHEFOIOKDOK->fields).ILBBBFHKKHG;
  }
  else {
    if (iVar1 != 1) {
                    /* try { // try from 033d0038 to 034d005f has its CatchHandler @ 033d02bc */
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      local_38.klass = (System_Enum_c *)LCAJGLLBBEC_ELJAALFNLIP_TypeInfo;
      local_38.monitor = (void *)0xffffffffffffffff;
      local_28 = (__this->fields).super.LOAFPIOGJAF;
      pSVar2 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
      if (args == (System_Object_array *)0x0) goto LAB_033d00e8;
      if ((pSVar2 != (System_String_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
        uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar5,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 033d0094 to 034d00bf has its CatchHandler @ 033d02b8 */
      args->m_Items[0] = (Il2CppObject *)pSVar2;
      thunk_FUN_01c20e04(args->m_Items,pSVar2);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_4562/*"ConditionCurrentAnimation: getAnimationNames - wrong type: {0}"*/,args,(MethodInfo *)0x0);
    }
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
LAB_033d00e8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = (AHEFOIOKDOK->fields).GLFJDDHEMNO;
  }
  return pSVar4;
}

