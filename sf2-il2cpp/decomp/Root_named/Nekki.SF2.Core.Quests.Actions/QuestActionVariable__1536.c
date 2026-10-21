// Original name: Nekki.SF2.Core.Quests.Actions.QuestActionVariable  (obfuscated HLPBEPCFOPH)
// TypeDefIndex 1536
// Namespace: 
// public class QuestActionVariable : QuestAction
// Fields:
//   private string DEKCPPOJFEH; // 0x68
//   private string PCNEDMAJMOJ; // 0x70
//   private MEMHEPBAJJA.OJKJJNJEFKH AHMIFFKECHF; // 0x78

// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x31A6674]
// QuestActionVariable$$HNIHOIAMDPC @ RVA 0x31A6674

void QuestActionVariable__HNIHOIAMDPC
               (QuestActionVariable_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_array *values;
  int32_t iVar5;
  System_String_o **ppSVar6;
  System_String_o **ppSVar7;
  
                    /* try { // try from 032a6684 to 033a668f has its CatchHandler @ 032a6320 */
                    /* try { // try from 032a6690 to 033a6697 has its CatchHandler @ 032a6698 */
  if ((DAT_04566b12 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032a661c with catch @ 032a6698
                       catch(type#2 @ 00000000) { ... } // from try @ 032a6690 with catch @ 032a6698
                        */
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    FUN_01bab630(&StringLiteral_96/*"\nQuest.Name = "*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_104/*"\nVar.Value = "*/);
    FUN_01bab630(&StringLiteral_11731/*"Scope"*/);
    FUN_01bab630(&StringLiteral_103/*"\nVar.Name = "*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_10668/*"QuestActionVariable::Parse: please, specify Scope for this SetVariable\nQuest.FileName = "*/);
    FUN_01bab630(&StringLiteral_8581/*"Local"*/);
    FUN_01bab630(&StringLiteral_14273/*"Undefined type found!"*/);
    FUN_01bab630(&StringLiteral_14648/*"Users"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_6862/*"Global"*/);
    DAT_04566b12 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if ((NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method),
     pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    ppSVar6 = &(__this->fields).DEKCPPOJFEH;
    *ppSVar6 = pSVar4;
    thunk_FUN_01c20e04(ppSVar6,pSVar4);
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar7 = &(__this->fields).PCNEDMAJMOJ;
      *ppSVar7 = pSVar4;
      thunk_FUN_01c20e04(ppSVar7,pSVar4);
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_11731/*"Scope"*/,(MethodInfo *)0x0);
        if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
          (__this->fields).AHMIFFKECHF = 0;
          if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Application__get_isEditor((MethodInfo *)0x0);
          if (bVar1) {
            values = (System_String_array *)FUN_01bab718(string___TypeInfo,9);
            if (values != (System_String_array *)0x0) {
              if ((int)values->max_length != 0) {
                values->m_Items[0] = StringLiteral_10668/*"QuestActionVariable::Parse: please, specify Scope for this SetVariable\nQuest.FileName = "*/;
                thunk_FUN_01c20e04(values->m_Items);
                if (1 < (uint)values->max_length) {
                  values->m_Items[1] = (__this->fields).super.JPCLFPPBNNN;
                  thunk_FUN_01c20e04(values->m_Items + 1);
                  if (2 < (uint)values->max_length) {
                    values->m_Items[2] = StringLiteral_96/*"\nQuest.Name = "*/;
                    thunk_FUN_01c20e04(values->m_Items + 2);
                    if (3 < (uint)values->max_length) {
                      values->m_Items[3] = (__this->fields).super._LLOFHDDBKFD_k__BackingField;
                      thunk_FUN_01c20e04(values->m_Items + 3);
                      if (4 < (uint)values->max_length) {
                        values->m_Items[4] = StringLiteral_103/*"\nVar.Name = "*/;
                        thunk_FUN_01c20e04(values->m_Items + 4);
                        if (5 < (uint)values->max_length) {
                          values->m_Items[5] = *ppSVar6;
                          thunk_FUN_01c20e04(values->m_Items + 5);
                          if (6 < (uint)values->max_length) {
                            values->m_Items[6] = StringLiteral_104/*"\nVar.Value = "*/;
                            thunk_FUN_01c20e04(values->m_Items + 6);
                            if (7 < (uint)values->max_length) {
                              values->m_Items[7] = *ppSVar7;
                              thunk_FUN_01c20e04(values->m_Items + 7);
                              if (8 < (uint)values->max_length) {
                                values->m_Items[8] = StringLiteral_47/*"\n"*/;
                                thunk_FUN_01c20e04();
                                pSVar4 = System_String__Concat(values,(MethodInfo *)0x0);
                                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                                }
                                goto LAB_032a6aa4;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            goto LAB_032a6ab8;
          }
        }
        else {
          pSVar4 = (System_String_o *)
                   (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
          bVar1 = System_String__op_Equality(pSVar4,StringLiteral_14648/*"Users"*/,(MethodInfo *)0x0);
          if (bVar1) {
            (__this->fields).AHMIFFKECHF = 0;
          }
          else {
            bVar1 = System_String__op_Equality(pSVar4,StringLiteral_6862/*"Global"*/,(MethodInfo *)0x0);
            if (bVar1) {
              iVar5 = 1;
            }
            else {
              bVar1 = System_String__op_Equality(pSVar4,StringLiteral_8581/*"Local"*/,(MethodInfo *)0x0);
              if (!bVar1) {
                pSVar4 = StringLiteral_14273/*"Undefined type found!"*/;
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                  pSVar4 = StringLiteral_14273/*"Undefined type found!"*/;
                }
LAB_032a6aa4:
                UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
                return;
              }
              iVar5 = 2;
            }
            (__this->fields).AHMIFFKECHF = iVar5;
          }
        }
        return;
      }
    }
  }
LAB_032a6ab8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31A6AC0]
// QuestActionVariable$$.ctor @ RVA 0x31A6AC0

void QuestActionVariable___ctor(QuestActionVariable_o *__this,MethodInfo *method)

{
  if ((DAT_04566b13 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566b13 = 1;
  }
  (__this->fields).DEKCPPOJFEH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).PCNEDMAJMOJ = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void HFBAJKCHKNP(PKHMIGFEJCL OKBIKHHKOEN)  [RVA 0x31A6B28]
// QuestActionVariable$$HFBAJKCHKNP @ RVA 0x31A6B28

void QuestActionVariable__HFBAJKCHKNP(QuestActionVariable_o *__this,PKHMIGFEJCL_o *OKBIKHHKOEN,MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  Roster_o *pAVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04566b14 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566b14 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = (__this->fields).DEKCPPOJFEH;
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MFBNFJGBPBB__ACJKLBMNMEJ(OKBIKHHKOEN,pSVar2,(MethodInfo *)0x0);
  CJNHFNHJHPE = MFBNFJGBPBB__HAKLDDOPIAF(OKBIKHHKOEN,(__this->fields).PCNEDMAJMOJ,(MethodInfo *)0x0)
  ;
  if (pAVar1 != (Roster_o *)0x0) {
    Roster__LMJFPPDAPBF
              (pAVar1,pSVar2,CJNHFNHJHPE,(__this->fields).AHMIFFKECHF,(MethodInfo *)0x0);
    if ((__this->fields).AHMIFFKECHF != 0) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 != (Roster_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x31A6CA4]
// QuestActionVariable$$OFPHPMGMCAL @ RVA 0x31A6CA4

System_String_o * QuestActionVariable__OFPHPMGMCAL(QuestActionVariable_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04566b15 & 1) == 0) {
    FUN_01bab630(&StringLiteral_266/*" = "*/);
    DAT_04566b15 = 1;
  }
  pSVar1 = System_String__Concat
                     ((__this->fields).DEKCPPOJFEH,StringLiteral_266/*" = "*/,(__this->fields).PCNEDMAJMOJ,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x31A6CF0]
// QuestActionVariable$$MAHFCKJGBPP @ RVA 0x31A6CF0

void QuestActionVariable__MAHFCKJGBPP(QuestActionVariable_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  QuestActionVariable__HFBAJKCHKNP(__this,AAJBIMFNMBB,method_00);
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

