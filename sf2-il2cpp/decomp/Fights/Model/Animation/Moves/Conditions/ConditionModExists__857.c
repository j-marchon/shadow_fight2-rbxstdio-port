// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Conditions.ConditionModExists  (obfuscated GEGIPFKMLMO)
// TypeDefIndex 857
// Namespace: 
// public class ConditionModExists : ConditionAnimation
// Fields:
//   private string NPFMOEOIEKM; // 0x28
//   private string OFLJEENFLDG; // 0x30

// ===== public override bool EPBENPDCBFE(NJPBHDMCLIN AHEFOIOKDOK)  [RVA 0x3089914]
// ConditionModExists$$EPBENPDCBFE @ RVA 0x3089914

bool ConditionModExists__EPBENPDCBFE(ConditionModExists_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  MovesInFightVariables_DOCBHLNBECF_o *__this_00;
  System_String_o *pSVar3;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_01;
  int iVar4;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *collection;
  System_String_o *pSVar5;
  bool bVar6;
  
  if ((DAT_04566041 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_TypeInfo);
    DAT_04566041 = 1;
  }
  iVar4 = (__this->fields).super.LOAFPIOGJAF;
  if (iVar4 == 5) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_03189ae0;
    collection = (AHEFOIOKDOK->fields).FHPCCICONDB;
    __this_01 = (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_TypeInfo
                                  );
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>__ctor__);
    if (__this_01 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0)
    goto LAB_03189ae0;
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Collections_Generic_IEnumerable_T__o *)(AHEFOIOKDOK->fields).BGCEGKIDDAP,
               Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_AddRange__);
  }
  else if (iVar4 == 2) {
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) goto LAB_03189ae0;
    __this_01 = (AHEFOIOKDOK->fields).BGCEGKIDDAP;
  }
  else {
    if ((iVar4 != 1) || (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0)) goto LAB_03189ae0;
    __this_01 = (AHEFOIOKDOK->fields).FHPCCICONDB;
  }
  if (__this_01 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
    iVar4 = (__this_01->fields)._size;
    bVar6 = 0 < iVar4;
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        __this_00 = (MovesInFightVariables_DOCBHLNBECF_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_01,iVar4,
                               Method_System_Collections_Generic_List<MovesInFightVariables_DOCBHLNBECF>_get_Item__
                              );
        bVar2 = System_String__IsNullOrEmpty((__this->fields).OFLJEENFLDG,(MethodInfo *)0x0);
        if (bVar2) {
          if (__this_00 == (MovesInFightVariables_DOCBHLNBECF_o *)0x0) goto LAB_03189ae0;
LAB_03189a7c:
          pSVar5 = (__this->fields).NPFMOEOIEKM;
          pSVar3 = MovesInFightVariables_DOCBHLNBECF__JAKNFKABEKA(__this_00,(MethodInfo *)0x0);
          if (pSVar5 == (System_String_o *)0x0) goto LAB_03189ae0;
          bVar2 = System_String__Equals(pSVar5,pSVar3,(MethodInfo *)0x0);
          if (bVar2) break;
        }
        else {
          if (__this_00 == (MovesInFightVariables_DOCBHLNBECF_o *)0x0) goto LAB_03189ae0;
          pSVar5 = (__this->fields).OFLJEENFLDG;
          pSVar3 = MovesInFightVariables_DOCBHLNBECF__HBHNOPJBFIH(__this_00,(MethodInfo *)0x0);
          if (pSVar5 == (System_String_o *)0x0) goto LAB_03189ae0;
          bVar2 = System_String__Equals(pSVar5,pSVar3,(MethodInfo *)0x0);
          if (bVar2) goto LAB_03189a7c;
        }
        iVar1 = (__this_01->fields)._size;
        iVar4 = iVar4 + 1;
        bVar6 = iVar4 < iVar1;
      } while (iVar4 < iVar1);
    }
    return (bool)(bVar6 ^ (__this->fields).super.GBBHFPBFOPI != false);
  }
LAB_03189ae0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string LNNIHAKPANA()  [RVA 0x3089AE4]
// ConditionModExists$$LNNIHAKPANA @ RVA 0x3089AE4

System_String_o * ConditionModExists__LNNIHAKPANA(ConditionModExists_o *__this,MethodInfo *method)

{
  return (__this->fields).OFLJEENFLDG;
}


// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x3089AEC]
// ConditionModExists$$.ctor @ RVA 0x3089AEC

void ConditionModExists___ctor(ConditionModExists_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04566042 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_10213/*"Perk"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566042 = 1;
  }
  ConditionAnimation___ctor((ConditionAnimation_o *)__this,0x14,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).NPFMOEOIEKM = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_10213/*"Perk"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).OFLJEENFLDG;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KCHJCGEMCGE()  [RVA 0x3089BEC]
// ConditionModExists$$KCHJCGEMCGE @ RVA 0x3089BEC

System_String_o * ConditionModExists__KCHJCGEMCGE(ConditionModExists_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}

