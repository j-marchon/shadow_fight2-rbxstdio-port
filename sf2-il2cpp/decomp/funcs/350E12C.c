// AMIINPEKKFB$$NKGDNFCCFCD @ RVA 0x350E12C

void AMIINPEKKFB__NKGDNFCCFCD
               (HOOAAGABMBL_o *IKKAMAMLIKA,
               System_Collections_Generic_List_PKKLIJLIKGF__o *LDAIPGBJEOG,MethodInfo *method)

{
  bool bVar1;
  int32_t EDEIFHGMBFA;
  int32_t EBDDELGICGB;
  System_String_o *pSVar2;
  IGFGDDANEPE_o *__this;
  ACHLOMELAJE_o *pAVar3;
  System_Xml_XmlNode_o *pSVar4;
  undefined8 *puVar5;
  
  if ((DAT_045688f7 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<PKKLIJLIKGF>__);
    FUN_01bab630(&Method_KFJJHMDIFIG_ONCJPMNKDIM<AMIINPEKKFB>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_802);
    FUN_01bab630(&StringLiteral_6855);
    FUN_01bab630(&StringLiteral_6861);
    FUN_01bab630(&StringLiteral_5703);
    FUN_01bab630(&StringLiteral_6860);
    DAT_045688f7 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    puVar5 = &StringLiteral_6855;
  }
  else {
                    /* try { // try from 0360e1b8 to 0370e423 has its CatchHandler @ 0360e1b8
                       catch() { ... } // from try @ 0360e1b8 with catch @ 0360e1b8
                       catch() { ... } // from try @ 0360e4a4 with catch @ 0360e1b8
                       catch() { ... } // from try @ 0360e630 with catch @ 0360e1b8
                       catch() { ... } // from try @ 0360e670 with catch @ 0360e1b8
                       catch() { ... } // from try @ 0360e6a0 with catch @ 0360e1b8 */
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)LDAIPGBJEOG,
                       Method_DJNBJHPDKDP_OBECCOPBADO<PKKLIJLIKGF>__);
    if (!bVar1) {
      pSVar2 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = NLPJLHOEAOE__JNFIBDBHNOA(pSVar2,(MethodInfo *)0x0);
      if (__this != (IGFGDDANEPE_o *)0x0) {
        EDEIFHGMBFA = IGFGDDANEPE__LGIMDOAMCNG(__this,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
          EBDDELGICGB = ACHLOMELAJE__EOEAKGGDBFH(pAVar3,(MethodInfo *)0x0);
          IGFGDDANEPE__IHPKFKLKPPP(__this,LDAIPGBJEOG,EDEIFHGMBFA,EBDDELGICGB,(MethodInfo *)0x0);
          pSVar4 = (__this->fields).DMLGJFCNNJF;
          if (pSVar4 != (System_Xml_XmlNode_o *)0x0) {
            pSVar4 = (System_Xml_XmlNode_o *)
                     (*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar4,StringLiteral_5703,
                                (pSVar4->klass->vtable)._51_get_Item.method);
            IGFGDDANEPE__LPLGJMMAKJG(__this,pSVar4,true,(MethodInfo *)0x0);
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
              CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar3,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar2 = System_String__Concat
                         (StringLiteral_6860,(IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                          StringLiteral_802,(MethodInfo *)0x0);
      goto LAB_0360e1f4;
    }
    puVar5 = &StringLiteral_6861;
  }
  pSVar2 = (System_String_o *)*puVar5;
LAB_0360e1f4:
  KFJJHMDIFIG__ONCJPMNKDIM<object>(pSVar2,Method_KFJJHMDIFIG_ONCJPMNKDIM<AMIINPEKKFB>__);
  return;
}

