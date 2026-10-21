// TypeDefIndex 2371
// Namespace: 
// public class OICCPAIHLMK : QuestAction
// Fields:
//   private readonly char[] GFPMKLDHKKL; // 0x68
//   private string OPONPIJGOKL; // 0x70
//   private string LAJBAKDJEKM; // 0x78
//   private string FBCLCJAHCHI; // 0x80
//   private bool DJGLFLMFKOE; // 0x88

// ===== protected override string OFPHPMGMCAL()  [RVA 0x332D434]
// OICCPAIHLMK$$OFPHPMGMCAL @ RVA 0x332D434

System_String_o * OICCPAIHLMK__OFPHPMGMCAL(OICCPAIHLMK_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if ((DAT_045678e6 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    DAT_045678e6 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = (__this->fields).LAJBAKDJEKM;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = StringLiteral_167/*" "*/;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = (__this->fields).FBCLCJAHCHI;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = StringLiteral_167/*" "*/;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
                    /* try { // try from 0342d51c to 0352d5af has its CatchHandler @ 0342d51c
                       catch() { ... } // from try @ 0342d51c with catch @ 0342d51c
                       catch() { ... } // from try @ 0342d5d4 with catch @ 0342d51c
                       catch() { ... } // from try @ 0342d608 with catch @ 0342d51c
                       catch() { ... } // from try @ 0342d630 with catch @ 0342d51c
                       catch() { ... } // from try @ 0342d660 with catch @ 0342d51c */
              values->m_Items[4] = (__this->fields).OPONPIJGOKL;
              thunk_FUN_01c20e04();
              pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x332D54C]
// OICCPAIHLMK$$.ctor @ RVA 0x332D54C

void OICCPAIHLMK___ctor(OICCPAIHLMK_o *__this,MethodInfo *method)

{
  System_Char_array *pSVar1;
  
  if ((DAT_045678e7 & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045678e7 = 1;
  }
  pSVar1 = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
  if (pSVar1 != (System_Char_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 0342d5b0 to 0352d5b7 has its CatchHandler @ 0342d614 */
      pSVar1->m_Items[0] = 0x7c;
      (__this->fields).GFPMKLDHKKL = pSVar1;
      thunk_FUN_01c20e04();
                    /* try { // try from 0342d5c8 to 0352d5d3 has its CatchHandler @ 0342d60c */
      (__this->fields).OPONPIJGOKL = StringLiteral_1/*""*/;
      thunk_FUN_01c20e04();
                    /* try { // try from 0342d5d4 to 0352d603 has its CatchHandler @ 0342d51c */
      (__this->fields).LAJBAKDJEKM = StringLiteral_1/*""*/;
      thunk_FUN_01c20e04();
      (__this->fields).FBCLCJAHCHI = StringLiteral_1/*""*/;
      thunk_FUN_01c20e04();
                    /* try { // try from 0342d604 to 0352d607 has its CatchHandler @ 0342d610 */
      QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342d5c8 with catch @ 0342d60c
                        */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0342d608 to 0352d62b has its CatchHandler @ 0342d51c */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x332D610]
// OICCPAIHLMK$$HNIHOIAMDPC @ RVA 0x332D610

void OICCPAIHLMK__HNIHOIAMDPC
               (OICCPAIHLMK_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342d604 with catch @ 0342d610
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342d5b0 with catch @ 0342d614
                        */
  if ((DAT_045678e8 & 1) == 0) {
                    /* try { // try from 0342d62c to 0352d62f has its CatchHandler @ 0342d650 */
                    /* try { // try from 0342d630 to 0352d657 has its CatchHandler @ 0342d51c */
    FUN_01bab630(&StringLiteral_10636/*"Quantity"*/);
    FUN_01bab630(&StringLiteral_10594/*"PutOn"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* catch() { ... } // from try @ 0342d62c with catch @ 0342d650 */
                    /* try { // try from 0342d658 to 0352d65f has its CatchHandler @ 0342d674 */
    FUN_01bab630(&StringLiteral_10070/*"PackItem"*/);
                    /* try { // try from 0342d660 to 0352d66b has its CatchHandler @ 0342d51c */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 0342d66c to 0352d673 has its CatchHandler @ 0342d674 */
    DAT_045678e8 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0342d658 with catch @ 0342d674
                       catch(type#2 @ 00000000) { ... } // from try @ 0342d66c with catch @ 0342d674
                        */
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).LAJBAKDJEKM = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_10594/*"PutOn"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        (__this->fields).FBCLCJAHCHI = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_10636/*"Quantity"*/,(MethodInfo *)0x0);
          pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          (__this->fields).OPONPIJGOKL = pSVar4;
          thunk_FUN_01c20e04();
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                             (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_10070/*"PackItem"*/,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar3,false,(MethodInfo *)0x0);
            (__this->fields).DJGLFLMFKOE = bVar1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x332D7B4]
// OICCPAIHLMK$$MAHFCKJGBPP @ RVA 0x332D7B4

void OICCPAIHLMK__MAHFCKJGBPP(OICCPAIHLMK_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool MEGHFHANLPK;
  int32_t EPINGPGECOM;
  int32_t GNDOPGAILNK;
  System_String_array *pSVar1;
  int iVar2;
  System_String_o *pSVar3;
  System_String_o *OOGPLJBADCD;
  
  if ((DAT_045678e9 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_045678e9 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).LAJBAKDJEKM;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0342d844 to 0352d8d7 has its CatchHandler @ 0342d844
                       catch() { ... } // from try @ 0342d844 with catch @ 0342d844
                       catch() { ... } // from try @ 0342d8fc with catch @ 0342d844
                       catch() { ... } // from try @ 0342d93c with catch @ 0342d844
                       catch() { ... } // from try @ 0342d964 with catch @ 0342d844
                       catch() { ... } // from try @ 0342d99c with catch @ 0342d844 */
  if ((pSVar3 == (System_String_o *)0x0) ||
     (pSVar1 = System_String__Split(pSVar3,(__this->fields).GFPMKLDHKKL,1,(MethodInfo *)0x0),
     pSVar1 == (System_String_array *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0342d8fc to 0352d937 has its CatchHandler @ 0342d844 */
    FUN_01bab8c8();
  }
  if (pSVar1->max_length == 0) {
    pSVar3 = string_TypeInfo->static_fields->Empty;
  }
  else {
    iVar2 = (int)pSVar1->max_length;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pSVar3 = pSVar1->m_Items[0];
    if (1 < iVar2) {
      EPINGPGECOM = PCOEHCPGBBG__JBGCINPPLAC(pSVar1->m_Items[1],0,(MethodInfo *)0x0);
      goto LAB_0342d890;
    }
  }
  EPINGPGECOM = 0;
LAB_0342d890:
  OOGPLJBADCD = (__this->fields).FBCLCJAHCHI;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MEGHFHANLPK = MFBNFJGBPBB__EDBBDECOKAF(AAJBIMFNMBB,OOGPLJBADCD,(MethodInfo *)0x0);
  GNDOPGAILNK = MFBNFJGBPBB__JBAMHPFEPLG(AAJBIMFNMBB,(__this->fields).OPONPIJGOKL,(MethodInfo *)0x0)
  ;
                    /* try { // try from 0342d8d8 to 0352d8df has its CatchHandler @ 0342d948 */
  AMIINPEKKFB__BLKCJOFCPOO
            (pSVar3,EPINGPGECOM,GNDOPGAILNK,MEGHFHANLPK,(__this->fields).DJGLFLMFKOE,
             (MethodInfo *)0x0);
                    /* try { // try from 0342d8f0 to 0352d8fb has its CatchHandler @ 0342d940 */
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

