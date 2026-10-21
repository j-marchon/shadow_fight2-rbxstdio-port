// ACHLOMELAJE$$AHGOMJNFBLJ @ RVA 0x305A434

void ACHLOMELAJE__AHGOMJNFBLJ(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Xml_XmlNode_o *pSVar3;
  System_Xml_XmlDocument_o *EKEMDOEAFHP;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e7b & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e7b = 1;
    method = extraout_x1;
  }
  ACHLOMELAJE__DFEDPHHCOBN(__this,method);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = NLPJLHOEAOE__LJAKPLJDGBJ((MethodInfo *)0x0);
  if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo);
  }
  bVar1 = EOOEOHKLOFJ__EGFIEDINDAC(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pSVar3 = (__this->fields).super.HJKLIDCAEOE;
  if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
    EKEMDOEAFHP = (System_Xml_XmlDocument_o *)
                  (*(pSVar3->klass->vtable)._17_get_OwnerDocument.methodPtr)
                            (pSVar3,(pSVar3->klass->vtable)._17_get_OwnerDocument.method);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    pSVar2 = NLPJLHOEAOE__DGBOOECJDDG((MethodInfo *)0x0);
    GIAMPEGMNHE__DGLLHFNFGNO(EKEMDOEAFHP,pSVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

