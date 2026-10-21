// TypeDefIndex 377
// Namespace: 
// public class LPAPAMPGDFN
// Fields:
//   private XmlAttribute ALNEACNLPDH; // 0x10
//   private string HEADCHPANBF; // 0x18
//   private bool HBFBGGBPLOB; // 0x20
//   private Action JKPKAMGOAAB; // 0x28
//   private XmlAttribute PGPKOCNNKKJ; // 0x30
//   private OHKKMHNBHLM AMIMEMOELHE; // 0x38
//   private XmlAttribute AFMFLLCLLMM; // 0x40
//   private bool LMGCAJEGBGI; // 0x48
//   private XmlAttribute OPFLPGECHDE; // 0x50
//   private int AHLHMBIFONA; // 0x58

// ===== public void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x347AF6C]
// LPAPAMPGDFN$$HNIHOIAMDPC @ RVA 0x347AF6C

void LPAPAMPGDFN__HNIHOIAMDPC
               (LPAPAMPGDFN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  MGNPHCAAEIO_LLBEEBNCOND_o *pMVar9;
  LPAPAMPGDFN_Fields *pLVar10;
  System_Xml_XmlAttribute_o **ppSVar11;
  
  if ((DAT_04568346 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_10983/*"RaidTutorialGemsTaken"*/);
    FUN_01bab630(&StringLiteral_4418/*"ClanTutorial"*/);
    FUN_01bab630(&StringLiteral_9626/*"NotStarted"*/);
    FUN_01bab630(&StringLiteral_10984/*"RaidTutorialStep"*/);
    FUN_01bab630(&StringLiteral_13974/*"Tutorial"*/);
    DAT_04568346 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_13974/*"Tutorial"*/,(MethodInfo *)0x0);
      pLVar10 = &__this->fields;
      pLVar10->ALNEACNLPDH = pSVar4;
      thunk_FUN_01c20e04(pLVar10,pSVar4);
      pSVar4 = pLVar10->ALNEACNLPDH;
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(AHDGNOJPPIB,StringLiteral_13974/*"Tutorial"*/,(MethodInfo *)0x0);
        pLVar10->ALNEACNLPDH = pSVar4;
        thunk_FUN_01c20e04(pLVar10,pSVar4);
        pSVar4 = pLVar10->ALNEACNLPDH;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pMVar9 = MGNPHCAAEIO_TypeInfo->static_fields->DMMGOHFKKCA;
        if (((pMVar9 == (MGNPHCAAEIO_LLBEEBNCOND_o *)0x0) ||
            (pSVar5 = (pMVar9->fields).PKPJOJCIDGA,
            pSVar5 == (System_Collections_Generic_List_string__o *)0x0)) ||
           (pIVar6 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar5,0,
                                Method_System_Collections_Generic_List<string>_get_Item__),
           pSVar4 == (System_Xml_XmlAttribute_o *)0x0)) goto LAB_0357b2e4;
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pIVar6,(pSVar4->klass->vtable)._10_set_Value.method);
        pSVar4 = pLVar10->ALNEACNLPDH;
      }
      pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
      }
      pMVar9 = MGNPHCAAEIO_TypeInfo->static_fields->DMMGOHFKKCA;
      if (pMVar9 != (MGNPHCAAEIO_LLBEEBNCOND_o *)0x0) {
        bVar1 = MGNPHCAAEIO_LLBEEBNCOND__KAAFKKOAMKP(pMVar9,pSVar7,(MethodInfo *)0x0);
        if (!bVar1) {
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pMVar9 = MGNPHCAAEIO_TypeInfo->static_fields->DMMGOHFKKCA;
          if ((pMVar9 == (MGNPHCAAEIO_LLBEEBNCOND_o *)0x0) ||
             (pSVar5 = (pMVar9->fields).PKPJOJCIDGA,
             pSVar5 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_0357b2e4;
          pSVar7 = (System_String_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar5,0,
                              Method_System_Collections_Generic_List<string>_get_Item__);
        }
        ppSVar8 = &(__this->fields).HEADCHPANBF;
        *ppSVar8 = pSVar7;
        thunk_FUN_01c20e04(ppSVar8,pSVar7);
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_10984/*"RaidTutorialStep"*/,(MethodInfo *)0x0);
          ppSVar11 = &(__this->fields).PGPKOCNNKKJ;
          *ppSVar11 = pSVar4;
          thunk_FUN_01c20e04(ppSVar11,pSVar4);
          pSVar4 = *ppSVar11;
          if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
            pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(AHDGNOJPPIB,StringLiteral_10984/*"RaidTutorialStep"*/,(MethodInfo *)0x0);
            *ppSVar11 = pSVar4;
            thunk_FUN_01c20e04(ppSVar11,pSVar4);
            pSVar4 = *ppSVar11;
          }
          pSVar7 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_9626/*"NotStarted"*/,(MethodInfo *)0x0);
          iVar2 = CONLFJJLALA__LJFOPOPKNCL(pSVar7,(MethodInfo *)0x0);
          (__this->fields).AMIMEMOELHE = iVar2;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_10983/*"RaidTutorialGemsTaken"*/,(MethodInfo *)0x0);
            ppSVar11 = &(__this->fields).AFMFLLCLLMM;
            *ppSVar11 = pSVar4;
            thunk_FUN_01c20e04(ppSVar11,pSVar4);
            pSVar4 = *ppSVar11;
            if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
              pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(AHDGNOJPPIB,StringLiteral_10983/*"RaidTutorialGemsTaken"*/,(MethodInfo *)0x0);
              *ppSVar11 = pSVar4;
              thunk_FUN_01c20e04(ppSVar11,pSVar4);
              pSVar4 = *ppSVar11;
            }
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
            (__this->fields).LMGCAJEGBGI = bVar1;
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_4418/*"ClanTutorial"*/,(MethodInfo *)0x0);
              ppSVar11 = &(__this->fields).OPFLPGECHDE;
              *ppSVar11 = pSVar4;
              thunk_FUN_01c20e04(ppSVar11,pSVar4);
              pSVar4 = *ppSVar11;
              if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
                pSVar4 = EIABCPKDEBD__HBGAGFJBGKD(AHDGNOJPPIB,StringLiteral_4418/*"ClanTutorial"*/,(MethodInfo *)0x0);
                *ppSVar11 = pSVar4;
                thunk_FUN_01c20e04(ppSVar11,pSVar4);
                pSVar4 = *ppSVar11;
              }
              iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
              (__this->fields).AHLHMBIFONA = iVar2;
              return;
            }
          }
        }
      }
    }
  }
LAB_0357b2e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JDFDKLKCHKC()  [RVA 0x347B2E8]
// LPAPAMPGDFN$$JDFDKLKCHKC @ RVA 0x347B2E8

void LPAPAMPGDFN__JDFDKLKCHKC(LPAPAMPGDFN_o *__this,MethodInfo *method)

{
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  MGNPHCAAEIO_LLBEEBNCOND_o *pMVar1;
  System_Action_o *pSVar2;
  
  if ((DAT_04568347 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<string>__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568347 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields->DMMGOHFKKCA;
  if (pMVar1 != (MGNPHCAAEIO_LLBEEBNCOND_o *)0x0) {
    CJNHFNHJHPE = (System_String_o *)
                  DJNBJHPDKDP__KIKGKKGDCKK<object>
                            ((System_Collections_Generic_List_T__o *)(pMVar1->fields).PKPJOJCIDGA,
                             Method_DJNBJHPDKDP_KIKGKKGDCKK<string>__);
    LPAPAMPGDFN__CBALBLBOEJC(__this,CJNHFNHJHPE,in_x2);
    pSVar2 = (__this->fields).JKPKAMGOAAB;
    (__this->fields).HBFBGGBPLOB = true;
    if (pSVar2 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0357b38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar2->fields).super.super.invoke_impl)
                ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HCMCKCNCLPH(OHKKMHNBHLM CJNHFNHJHPE, bool OIJDDKPKJIO)  [RVA 0x347B480]
// LPAPAMPGDFN$$HCMCKCNCLPH @ RVA 0x347B480

void LPAPAMPGDFN__HCMCKCNCLPH
               (LPAPAMPGDFN_o *__this,int32_t CJNHFNHJHPE,bool OIJDDKPKJIO,MethodInfo *method)

{
  System_String_o *pSVar1;
  ACHLOMELAJE_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  System_Xml_XmlAttribute_o *pSVar2;
  
  if ((DAT_04568348 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568348 = 1;
  }
  pSVar2 = (__this->fields).PGPKOCNNKKJ;
  (__this->fields).AMIMEMOELHE = CJNHFNHJHPE;
  pSVar1 = CONLFJJLALA__GKMAFGODLLG(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
    (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
              (pSVar2,pSVar1,(pSVar2->klass->vtable)._10_set_Value.method);
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
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
        EEGDOGKBLNG__POPAIDFJPEB(__this_01,OIJDDKPKJIO,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DHALEEECIOA(bool CJNHFNHJHPE)  [RVA 0x347B594]
// LPAPAMPGDFN$$DHALEEECIOA @ RVA 0x347B594

void LPAPAMPGDFN__DHALEEECIOA(LPAPAMPGDFN_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  ACHLOMELAJE_o *__this_00;
  
  if ((DAT_04568349 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568349 = 1;
  }
  if ((__this->fields).LMGCAJEGBGI == CJNHFNHJHPE) {
    return;
  }
  pSVar2 = (__this->fields).AFMFLLCLLMM;
  (__this->fields).LMGCAJEGBGI = CJNHFNHJHPE;
  if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 0357b618 to 0367b63f has its CatchHandler @ 0357b97c */
    puVar1 = &StringLiteral_1606/*"1"*/;
    if (!CJNHFNHJHPE) {
      puVar1 = &StringLiteral_1567/*"0"*/;
    }
    (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
              (pSVar2,*puVar1,(pSVar2->klass->vtable)._10_set_Value.method);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 0357b67c to 0367b6a3 has its CatchHandler @ 0357b978 */
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MBIEJFDDPAG(OHKKMHNBHLM CJNHFNHJHPE)  [RVA 0x347B6A8]
// LPAPAMPGDFN$$MBIEJFDDPAG @ RVA 0x347B6A8

void LPAPAMPGDFN__MBIEJFDDPAG(LPAPAMPGDFN_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *in_x3;
  
  if (CJNHFNHJHPE < (__this->fields).AMIMEMOELHE) {
                    /* try { // try from 0357b6b4 to 0367b6c3 has its CatchHandler @ 0357b984 */
    return;
  }
  LPAPAMPGDFN__HCMCKCNCLPH(__this,CJNHFNHJHPE,false,in_x3);
  return;
}


// ===== public bool LBMNAEJPNNJ()  [RVA 0x347B6C0]
// LPAPAMPGDFN$$LBMNAEJPNNJ @ RVA 0x347B6C0

bool LPAPAMPGDFN__LBMNAEJPNNJ(LPAPAMPGDFN_o *__this,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 0357b6d4 to 0367b6db has its CatchHandler @ 0357b94c */
  if ((DAT_0456834a & 1) == 0) {
                    /* try { // try from 0357b6e4 to 0367b6eb has its CatchHandler @ 0357b948 */
    FUN_01bab630(&StringLiteral_5549/*"END"*/);
    DAT_0456834a = 1;
  }
                    /* try { // try from 0357b6fc to 0367b703 has its CatchHandler @ 0357b968 */
                    /* try { // try from 0357b708 to 0367b70f has its CatchHandler @ 0357b964 */
  bVar1 = System_String__op_Inequality
                    ((__this->fields).HEADCHPANBF,StringLiteral_5549/*"END"*/,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public void OAFIHCDEOAD(Action CJNHFNHJHPE)  [RVA 0x347B70C]
// LPAPAMPGDFN$$OAFIHCDEOAD @ RVA 0x347B70C

void LPAPAMPGDFN__OAFIHCDEOAD(LPAPAMPGDFN_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
                    /* try { // try from 0357b720 to 0367b727 has its CatchHandler @ 0357b960 */
                    /* try { // try from 0357b728 to 0367b73b has its CatchHandler @ 0357b944 */
  if ((DAT_0456834b & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456834b = 1;
  }
                    /* try { // try from 0357b740 to 0367b74b has its CatchHandler @ 0357b954 */
  ppSVar4 = &(__this->fields).JKPKAMGOAAB;
  a = *ppSVar4;
                    /* try { // try from 0357b74c to 0367b757 has its CatchHandler @ 0357b970 */
                    /* try { // try from 0357b76c to 0367b773 has its CatchHandler @ 0357b950 */
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* try { // try from 0357b77c to 0367b783 has its CatchHandler @ 0357b930 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
                    /* try { // try from 0357b794 to 0367b79b has its CatchHandler @ 0357b938 */
      return;
    }
  }
                    /* try { // try from 0357b7a0 to 0367b7a7 has its CatchHandler @ 0357b928 */
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void CBALBLBOEJC(string CJNHFNHJHPE)  [RVA 0x347B394]
// LPAPAMPGDFN$$CBALBLBOEJC @ RVA 0x347B394

void LPAPAMPGDFN__CBALBLBOEJC(LPAPAMPGDFN_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  ACHLOMELAJE_o *__this_00;
  System_String_o **ppSVar3;
  
  if ((DAT_0456834c & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456834c = 1;
  }
  ppSVar3 = &(__this->fields).HEADCHPANBF;
  bVar1 = System_String__op_Equality(*ppSVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
                    /* try { // try from 0357b3e8 to 0367b617 has its CatchHandler @ 0357b3e8
                       catch() { ... } // from try @ 0357b3e8 with catch @ 0357b3e8
                       catch() { ... } // from try @ 0357b86c with catch @ 0357b3e8
                       catch() { ... } // from try @ 0357b910 with catch @ 0357b3e8
                       catch() { ... } // from try @ 0357b918 with catch @ 0357b3e8
                       catch() { ... } // from try @ 0357ba14 with catch @ 0357b3e8 */
  (__this->fields).HEADCHPANBF = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar3,CJNHFNHJHPE);
  pSVar2 = (__this->fields).ALNEACNLPDH;
  if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
    (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
              (pSVar2,*ppSVar3,(pSVar2->klass->vtable)._10_set_Value.method);
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
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x347B7A8]
// LPAPAMPGDFN$$.ctor @ RVA 0x347B7A8

void LPAPAMPGDFN___ctor(LPAPAMPGDFN_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  System_Action_o *pSVar2;
  
                    /* try { // try from 0357b7b0 to 0367b7b7 has its CatchHandler @ 0357b93c */
                    /* try { // try from 0357b7b8 to 0367b7cb has its CatchHandler @ 0357b940 */
                    /* try { // try from 0357b7d0 to 0367b7db has its CatchHandler @ 0357b934 */
  if ((DAT_0456834d & 1) == 0) {
                    /* try { // try from 0357b7dc to 0367b7ff has its CatchHandler @ 0357b974 */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_LPAPAMPGDFN_<>c_MFHNBJHNFEO__);
    FUN_01bab630(&LPAPAMPGDFN_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456834d = 1;
  }
  (__this->fields).HEADCHPANBF = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  if ((LPAPAMPGDFN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = LPAPAMPGDFN_<>c_TypeInfo->static_fields->__9__31_0;
  if (pSVar2 == (System_Action_o *)0x0) {
    if ((LPAPAMPGDFN_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
                    /* try { // try from 0357b848 to 0367b86b has its CatchHandler @ 0357b924 */
    }
    pSVar2 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0357b86c to 0367b8f7 has its CatchHandler @ 0357b3e8 */
    System_Action___ctor();
    ppSVar1 = &LPAPAMPGDFN_<>c_TypeInfo->static_fields->__9__31_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  ppSVar1 = &(__this->fields).JKPKAMGOAAB;
  *ppSVar1 = pSVar2;
  thunk_FUN_01c20e04(ppSVar1,pSVar2);
  (__this->fields).AMIMEMOELHE = -0x14;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void OJMMJBJOPKK(Action CJNHFNHJHPE)  [RVA 0x347B8C4]
// LPAPAMPGDFN$$OJMMJBJOPKK @ RVA 0x347B8C4

void LPAPAMPGDFN__OJMMJBJOPKK(LPAPAMPGDFN_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_0456834e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456834e = 1;
  }
                    /* try { // try from 0357b8f8 to 0367b8fb has its CatchHandler @ 0357b96c */
  ppSVar4 = &(__this->fields).JKPKAMGOAAB;
                    /* try { // try from 0357b8fc to 0367b8ff has its CatchHandler @ 0357b95c */
                    /* try { // try from 0357b900 to 0367b903 has its CatchHandler @ 0357b958 */
  source = *ppSVar4;
                    /* try { // try from 0357b904 to 0367b907 has its CatchHandler @ 0357b92c */
                    /* try { // try from 0357b908 to 0367b90f has its CatchHandler @ 0357b980 */
                    /* try { // try from 0357b910 to 0367b913 has its CatchHandler @ 0357b3e8 */
                    /* try { // try from 0357b914 to 0367b917 has its CatchHandler @ 0357b920 */
                    /* try { // try from 0357b918 to 0367b99b has its CatchHandler @ 0357b3e8 */
                    /* catch() { ... } // from try @ 0357b914 with catch @ 0357b920 */
                    /* catch() { ... } // from try @ 0357b848 with catch @ 0357b924 */
                    /* catch() { ... } // from try @ 0357b7a0 with catch @ 0357b928 */
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
                    /* catch() { ... } // from try @ 0357b904 with catch @ 0357b92c */
                    /* catch() { ... } // from try @ 0357b77c with catch @ 0357b930 */
                    /* catch() { ... } // from try @ 0357b7d0 with catch @ 0357b934 */
                    /* catch() { ... } // from try @ 0357b794 with catch @ 0357b938 */
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
                    /* catch() { ... } // from try @ 0357b7b0 with catch @ 0357b93c */
    bVar1 = source == pSVar3;
    source = pSVar3;
                    /* catch() { ... } // from try @ 0357b7b8 with catch @ 0357b940 */
                    /* catch() { ... } // from try @ 0357b728 with catch @ 0357b944 */
    if (bVar1) {
                    /* catch() { ... } // from try @ 0357b6e4 with catch @ 0357b948 */
                    /* catch() { ... } // from try @ 0357b6d4 with catch @ 0357b94c */
                    /* catch() { ... } // from try @ 0357b76c with catch @ 0357b950 */
                    /* catch() { ... } // from try @ 0357b740 with catch @ 0357b954 */
      return;
    }
  }
                    /* catch() { ... } // from try @ 0357b900 with catch @ 0357b958 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0357b8fc with catch @ 0357b95c */
  FUN_01babc64(pSVar2);
}


// ===== public int OINJNHOJIPA()  [RVA 0x347B960]
// LPAPAMPGDFN$$OINJNHOJIPA @ RVA 0x347B960

int32_t LPAPAMPGDFN__OINJNHOJIPA(LPAPAMPGDFN_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0357b720 with catch @ 0357b960 */
                    /* catch() { ... } // from try @ 0357b708 with catch @ 0357b964 */
  return (__this->fields).AHLHMBIFONA;
}


// ===== public string KHPPMGOLPAD()  [RVA 0x347B968]
// LPAPAMPGDFN$$KHPPMGOLPAD @ RVA 0x347B968

System_String_o * LPAPAMPGDFN__KHPPMGOLPAD(LPAPAMPGDFN_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0357b6fc with catch @ 0357b968 */
                    /* catch() { ... } // from try @ 0357b8f8 with catch @ 0357b96c */
  return (__this->fields).HEADCHPANBF;
}


// ===== public bool IMFHJKOENJM()  [RVA 0x347B970]
// LPAPAMPGDFN$$IMFHJKOENJM @ RVA 0x347B970

bool LPAPAMPGDFN__IMFHJKOENJM(LPAPAMPGDFN_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0357b74c with catch @ 0357b970 */
                    /* catch() { ... } // from try @ 0357b7dc with catch @ 0357b974 */
  return (__this->fields).LMGCAJEGBGI;
}


// ===== public void MKACHLMIINH(int CJNHFNHJHPE)  [RVA 0x347B978]
// LPAPAMPGDFN$$MKACHLMIINH @ RVA 0x347B978

void LPAPAMPGDFN__MKACHLMIINH(LPAPAMPGDFN_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  ACHLOMELAJE_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar2;
  int32_t *piVar3;
  
                    /* catch() { ... } // from try @ 0357b67c with catch @ 0357b978 */
                    /* catch() { ... } // from try @ 0357b618 with catch @ 0357b97c */
                    /* catch() { ... } // from try @ 0357b908 with catch @ 0357b980 */
                    /* catch() { ... } // from try @ 0357b6b4 with catch @ 0357b984 */
  if ((DAT_0456834f & 1) == 0) {
                    /* try { // try from 0357b99c to 0367b99f has its CatchHandler @ 0357b9ac */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456834f = 1;
  }
  piVar3 = &(__this->fields).AHLHMBIFONA;
  *piVar3 = CJNHFNHJHPE;
                    /* catch() { ... } // from try @ 0357b99c with catch @ 0357b9ac */
  pSVar2 = (__this->fields).OPFLPGECHDE;
  pSVar1 = System_Int32__ToString((int32_t)piVar3,(MethodInfo *)0x0);
  if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
    (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
              (pSVar2,pSVar1,(pSVar2->klass->vtable)._10_set_Value.method);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0357b9ec to 0367ba13 has its CatchHandler @ 0357ba28 */
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 0357ba14 to 0367ba1f has its CatchHandler @ 0357b3e8 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0357ba20 to 0367ba27 has its CatchHandler @ 0357ba28 */
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 0357b9ec with catch @ 0357ba28
                       catch() { ... } // from try @ 0357ba20 with catch @ 0357ba28 */
    if (__this_00 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool GJCLKACCHHF()  [RVA 0x347BA44]
// LPAPAMPGDFN$$GJCLKACCHHF @ RVA 0x347BA44

bool LPAPAMPGDFN__GJCLKACCHHF(LPAPAMPGDFN_o *__this,MethodInfo *method)

{
  return (__this->fields).HBFBGGBPLOB;
}


// ===== public OHKKMHNBHLM NFKIPKMNNPI()  [RVA 0x347BA4C]
// LPAPAMPGDFN$$NFKIPKMNNPI @ RVA 0x347BA4C

int32_t LPAPAMPGDFN__NFKIPKMNNPI(LPAPAMPGDFN_o *__this,MethodInfo *method)

{
  return (__this->fields).AMIMEMOELHE;
}

