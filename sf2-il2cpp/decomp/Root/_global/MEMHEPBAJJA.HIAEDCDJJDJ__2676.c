// TypeDefIndex 2676
// Namespace: 
// public class MEMHEPBAJJA.HIAEDCDJJDJ
// Fields:
//   public string JAICMIMBIOA; // 0x10
//   public readonly string JIJLBFGKNJK; // 0x18
//   public readonly XmlNode JHFENACKNPG; // 0x20
//   public MEMHEPBAJJA.OJKJJNJEFKH OGKFDMIMMAD; // 0x28

// ===== public void .ctor(string KGLJICLJHEL, string CJNHFNHJHPE, MEMHEPBAJJA.OJKJJNJEFKH ACCIHBHMFPN)  [RVA 0x33C7248]
// MEMHEPBAJJA.HIAEDCDJJDJ$$.ctor @ RVA 0x33C7248

void MEMHEPBAJJA_HIAEDCDJJDJ___ctor
               (MEMHEPBAJJA_HIAEDCDJJDJ_o *__this,System_String_o *KGLJICLJHEL,
               System_String_o *CJNHFNHJHPE,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  MEMHEPBAJJA_HIAEDCDJJDJ_Fields *pMVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567df9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567df9 = 1;
  }
  pMVar1 = &__this->fields;
  pMVar1->JAICMIMBIOA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(pMVar1);
  ppSVar2 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar2 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar2);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  *ppSVar2 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar2,KGLJICLJHEL);
  pMVar1->JAICMIMBIOA = CJNHFNHJHPE;
  thunk_FUN_01c20e04(pMVar1,CJNHFNHJHPE);
  (__this->fields).OGKFDMIMMAD = ACCIHBHMFPN;
  return;
}


// ===== public void HDHFINMNJCC()  [RVA 0x33C72FC]
// MEMHEPBAJJA.HIAEDCDJJDJ$$HDHFINMNJCC @ RVA 0x33C72FC

void MEMHEPBAJJA_HIAEDCDJJDJ__HDHFINMNJCC(MEMHEPBAJJA_HIAEDCDJJDJ_o *__this,MethodInfo *method)

{
  (__this->fields).OGKFDMIMMAD = 0;
  return;
}


// ===== public MEMHEPBAJJA.HIAEDCDJJDJ.DebugReport OIOHNFFMGLE()  [RVA 0x33C7304]
// MEMHEPBAJJA.HIAEDCDJJDJ$$OIOHNFFMGLE @ RVA 0x33C7304

MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_o *
MEMHEPBAJJA_HIAEDCDJJDJ__OIOHNFFMGLE(MEMHEPBAJJA_HIAEDCDJJDJ_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  System_Enum_o local_58;
  int32_t local_48;
  
  if ((DAT_04567dfa & 1) == 0) {
    FUN_01bab630(&MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_TypeInfo);
    FUN_01bab630(&MEMHEPBAJJA_OJKJJNJEFKH_TypeInfo);
    FUN_01bab630(&StringLiteral_18731/*"has XML-node"*/);
    FUN_01bab630(&StringLiteral_9450/*"No XML-node"*/);
    FUN_01bab630(&StringLiteral_11732/*"Scope = "*/);
    FUN_01bab630(&StringLiteral_2114/*";   "*/);
    DAT_04567dfa = 1;
    method = extraout_x1;
  }
  __this_00 = (MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_o *)
              thunk_FUN_01bda818(MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_TypeInfo,method);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_o *)0x0) {
    (__this_00->fields).Name = (__this->fields).JIJLBFGKNJK;
    thunk_FUN_01c20e04();
    (__this_00->fields).Value = (__this->fields).JAICMIMBIOA;
    thunk_FUN_01c20e04();
    local_58.klass = (System_Enum_c *)MEMHEPBAJJA_OJKJJNJEFKH_TypeInfo;
    local_58.monitor = (void *)0xffffffffffffffff;
    local_48 = (__this->fields).OGKFDMIMMAD;
    pSVar2 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_9450/*"No XML-node"*/;
    if ((__this->fields).JHFENACKNPG != (System_Xml_XmlNode_o *)0x0) {
      puVar1 = &StringLiteral_18731/*"has XML-node"*/;
    }
    pSVar2 = System_String__Concat
                       (StringLiteral_11732/*"Scope = "*/,pSVar2,StringLiteral_2114/*";   "*/,(System_String_o *)*puVar1,
                        (MethodInfo *)0x0);
    (__this_00->fields).Etc = pSVar2;
    thunk_FUN_01c20e04();
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode CJNHFNHJHPE)  [RVA 0x33C7460]
// MEMHEPBAJJA.HIAEDCDJJDJ$$.ctor @ RVA 0x33C7460

void MEMHEPBAJJA_HIAEDCDJJDJ___ctor
               (MEMHEPBAJJA_HIAEDCDJJDJ_o *__this,System_Xml_XmlNode_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  MEMHEPBAJJA_HIAEDCDJJDJ_Fields *pMVar5;
  System_Xml_XmlNode_o **ppSVar6;
  System_String_o **ppSVar7;
  
  if ((DAT_04567dfb & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567dfb = 1;
  }
  pMVar5 = &__this->fields;
  pMVar5->JAICMIMBIOA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(pMVar5);
  ppSVar7 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar7 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar7);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar6 = &(__this->fields).JHFENACKNPG;
  *ppSVar6 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar6,CJNHFNHJHPE);
  pSVar1 = *ppSVar6;
  (__this->fields).OGKFDMIMMAD = 0;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      *ppSVar7 = pSVar4;
      thunk_FUN_01c20e04(ppSVar7,pSVar4);
      pSVar1 = *ppSVar6;
      if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          pMVar5->JAICMIMBIOA = pSVar4;
          thunk_FUN_01c20e04(pMVar5,pSVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KFMNMGGDHFD(string PCAIKIGGBMJ)  [RVA 0x33C75A4]
// MEMHEPBAJJA.HIAEDCDJJDJ$$KFMNMGGDHFD @ RVA 0x33C75A4

void MEMHEPBAJJA_HIAEDCDJJDJ__KFMNMGGDHFD
               (MEMHEPBAJJA_HIAEDCDJJDJ_o *__this,System_String_o *PCAIKIGGBMJ,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_array *values;
  System_String_o *pSVar3;
  MEMHEPBAJJA_HIAEDCDJJDJ_Fields *pMVar4;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04567dfc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MEMHEPBAJJA_OJKJJNJEFKH_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_435/*" has no XmlNode, but is "*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_205/*"  Value = "*/);
    FUN_01bab630(&StringLiteral_14753/*"Variable.Name = "*/);
    DAT_04567dfc = 1;
  }
  pMVar4 = &__this->fields;
  pMVar4->JAICMIMBIOA = PCAIKIGGBMJ;
  thunk_FUN_01c20e04(pMVar4,PCAIKIGGBMJ);
  pSVar1 = (__this->fields).JHFENACKNPG;
  if (pSVar1 == (System_Xml_XmlNode_o *)0x0) {
    if ((__this->fields).OGKFDMIMMAD != 0) {
      return;
    }
  }
  else {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
    if ((__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) ||
       (pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0),
       pSVar2 == (System_Xml_XmlAttribute_o *)0x0)) goto LAB_034c780c;
    (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
              (pSVar2,(__this->fields).JAICMIMBIOA,(pSVar2->klass->vtable)._10_set_Value.method);
    pSVar1 = (__this->fields).JHFENACKNPG;
    if ((__this->fields).OGKFDMIMMAD == 0) {
      if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
        return;
      }
    }
    else if (pSVar1 == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_14753/*"Variable.Name = "*/;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (__this->fields).JIJLBFGKNJK;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_205/*"  Value = "*/;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pMVar4->JAICMIMBIOA;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_435/*" has no XmlNode, but is "*/;
              thunk_FUN_01c20e04(values->m_Items + 4);
              local_48.klass = (System_Enum_c *)MEMHEPBAJJA_OJKJJNJEFKH_TypeInfo;
              local_48.monitor = (void *)0xffffffffffffffff;
              local_38 = (__this->fields).OGKFDMIMMAD;
              pSVar3 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar3;
                thunk_FUN_01c20e04();
                pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                }
                UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_034c780c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

