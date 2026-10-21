// DBIINAFCKME$$GDCHAJOJGBH @ RVA 0x31BA9A8

void DBIINAFCKME__GDCHAJOJGBH(DBIINAFCKME_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlDocument_o *EKEMDOEAFHP;
  System_String_o *CCKJFMILHLC;
  
  if ((DAT_04566bd8 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566bd8 = 1;
  }
  CIOBNDOOGIM__GDCHAJOJGBH((CIOBNDOOGIM_o *)__this,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).DMLGJFCNNJF;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    EKEMDOEAFHP = (System_Xml_XmlDocument_o *)
                  (*(pSVar1->klass->vtable)._17_get_OwnerDocument.methodPtr)
                            (pSVar1,(pSVar1->klass->vtable)._17_get_OwnerDocument.method);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    CCKJFMILHLC = NLPJLHOEAOE__EEPEGMMLEMA((MethodInfo *)0x0);
    GIAMPEGMNHE__LFKDDMKHGEA(EKEMDOEAFHP,CCKJFMILHLC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

