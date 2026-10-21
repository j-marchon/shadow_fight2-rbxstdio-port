// NFGLEDADCGL$$CBDBJOIFHPC @ RVA 0x316C054

void NFGLEDADCGL__CBDBJOIFHPC
               (NFGLEDADCGL_o *__this,KJBGNIGNECD_AHICALNEICM_o *EIKFGOCCOIE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_String_o *pSVar2;
  System_Xml_XmlElement_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  ACHLOMELAJE_o *__this_00;
  
  if ((DAT_045668fa & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11691);
    FUN_01bab630(&StringLiteral_10223);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_8409);
    FUN_01bab630(&StringLiteral_10213);
    DAT_045668fa = 1;
  }
  if (EIKFGOCCOIE == (KJBGNIGNECD_AHICALNEICM_o *)0x0) {
    return;
  }
  pSVar1 = (__this->fields).HJKLIDCAEOE;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(pSVar1->klass->vtable)._8_unknown.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._8_unknown.method);
    pSVar2 = System_String__Concat(StringLiteral_11691,pSVar2,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).HJKLIDCAEOE;
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
      pSVar3 = (System_Xml_XmlElement_o *)
               (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                         (pSVar1,StringLiteral_10223,(pSVar1->klass->vtable)._51_get_Item.method);
      if (pSVar3 == (System_Xml_XmlElement_o *)0x0) {
        pSVar3 = EIABCPKDEBD__BHPIHHJHELJ
                           ((__this->fields).HJKLIDCAEOE,StringLiteral_10223,(MethodInfo *)0x0);
      }
      pSVar3 = EIABCPKDEBD__BHPIHHJHELJ
                         ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_8409,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                         ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_14694,(MethodInfo *)0x0);
      pSVar2 = System_Int32__ToString((int)EIKFGOCCOIE + 0x18,(MethodInfo *)0x0);
      if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
        (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar4,pSVar2,(pSVar4->klass->vtable)._10_set_Value.method);
        pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                           ((System_Xml_XmlNode_o *)pSVar3,StringLiteral_10213,(MethodInfo *)0x0);
        if (pSVar4 != (System_Xml_XmlAttribute_o *)0x0) {
          (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar4,(EIKFGOCCOIE->fields).JIJLBFGKNJK,
                     (pSVar4->klass->vtable)._10_set_Value.method);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

