// ACHLOMELAJE$$AJPFKHFKCLK @ RVA 0x305EE74

void ACHLOMELAJE__AJPFKHFKCLK(ACHLOMELAJE_o *__this,DPIEIFJBFHE_o *GPDMCLBBPAD,MethodInfo *method)

{
  undefined8 *puVar1;
  int32_t length;
  System_Xml_XmlElement_o *JHMENEKPIBO;
  System_Xml_XmlAttribute_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_DPIEIFJBFHE__o *pSVar3;
  
  if ((DAT_04565eb0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DPIEIFJBFHE>_Clear__);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_13821);
    FUN_01bab630(&StringLiteral_7096);
    FUN_01bab630(&StringLiteral_8679);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04565eb0 = 1;
  }
  JHMENEKPIBO = EIABCPKDEBD__BHPIHHJHELJ
                          ((__this->fields).GOPHEBKALBN,StringLiteral_8679,(MethodInfo *)0x0);
  pSVar2 = EIABCPKDEBD__HBGAGFJBGKD
                     ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_9327,(MethodInfo *)0x0);
  if ((GPDMCLBBPAD != (DPIEIFJBFHE_o *)0x0) && (pSVar2 != (System_Xml_XmlAttribute_o *)0x0)) {
    (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
              (pSVar2,(GPDMCLBBPAD->fields).JIJLBFGKNJK,(pSVar2->klass->vtable)._10_set_Value.method
              );
    pSVar2 = EIABCPKDEBD__HBGAGFJBGKD
                       ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_13821,(MethodInfo *)0x0);
    if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
      (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                (pSVar2,(GPDMCLBBPAD->fields).INLGJADOPFA,
                 (pSVar2->klass->vtable)._10_set_Value.method);
      pSVar2 = EIABCPKDEBD__HBGAGFJBGKD
                         ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_7096,(MethodInfo *)0x0);
      if (pSVar2 != (System_Xml_XmlAttribute_o *)0x0) {
        puVar1 = &StringLiteral_1567;
        if ((GPDMCLBBPAD->fields).IPDNNDFCGBK != false) {
          puVar1 = &StringLiteral_1606;
        }
        (*(pSVar2->klass->vtable)._10_set_Value.methodPtr)
                  (pSVar2,*puVar1,(pSVar2->klass->vtable)._10_set_Value.method);
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this,false,(MethodInfo *)0x0);
        pSVar3 = (__this->fields).CHDBCFCFNAJ;
        if (pSVar3 != (System_Collections_Generic_List_DPIEIFJBFHE__o *)0x0) {
          length = (pSVar3->fields)._size;
          (pSVar3->fields)._size = 0;
          (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
          method_00 = extraout_x1;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0
                               );
            method_00 = extraout_x1_00;
          }
          ACHLOMELAJE__LAHEBBOBBNG(__this,method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

