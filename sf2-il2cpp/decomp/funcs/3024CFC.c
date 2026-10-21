// KJFPGDFNFCL$$GIENGNEGHPJ @ RVA 0x3024CFC

void KJFPGDFNFCL__GIENGNEGHPJ
               (KJFPGDFNFCL_o *__this,System_Xml_XmlNode_o *JCNDOOCHPGM,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  KJFPGDFNFCL_c *pKVar6;
  
  if ((DAT_04565c80 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8907);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_12334);
    FUN_01bab630(&StringLiteral_10305);
    FUN_01bab630(&StringLiteral_9577);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565c80 = 1;
  }
  if (JCNDOOCHPGM != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.methodPtr)
                       (JCNDOOCHPGM,(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).DHKOGAHJNMK = pSVar5;
      thunk_FUN_01c20e04();
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.methodPtr)
                         (JCNDOOCHPGM,(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_13991,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
        (__this->fields).KFFGGNGPNLO = pSVar5;
        thunk_FUN_01c20e04();
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.methodPtr)
                           (JCNDOOCHPGM,(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_12334,(MethodInfo *)0x0);
          pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
          (__this->fields).OONMCOJPKIH = pSVar5;
          thunk_FUN_01c20e04();
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.methodPtr)
                             (JCNDOOCHPGM,(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_9577,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
            (__this->fields).GBBHFPBFOPI = bVar1;
            pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                     (*(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.methodPtr)
                               (JCNDOOCHPGM,(JCNDOOCHPGM->klass->vtable)._16_get_Attributes.method);
            if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar3,StringLiteral_10305,(MethodInfo *)0x0);
              pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_8907,(MethodInfo *)0x0);
              iVar2 = LCAJGLLBBEC__HGMMJIIEOLF(pSVar5,(MethodInfo *)0x0);
              pKVar6 = __this->klass;
              (__this->fields).BEMCNJHEADJ = iVar2;
                    /* WARNING: Could not recover jumptable at 0x03124efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pKVar6->vtable)._4_HNIHOIAMDPC.methodPtr)
                        (__this,JCNDOOCHPGM,(pKVar6->vtable)._4_HNIHOIAMDPC.method);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

