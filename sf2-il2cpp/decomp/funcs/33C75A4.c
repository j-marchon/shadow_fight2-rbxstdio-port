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
    FUN_01bab630(&StringLiteral_435);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_205);
    FUN_01bab630(&StringLiteral_14753);
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
                           (__this_00,StringLiteral_14694,(MethodInfo *)0x0),
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
      values->m_Items[0] = StringLiteral_14753;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (__this->fields).JIJLBFGKNJK;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_205;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pMVar4->JAICMIMBIOA;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_435;
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

