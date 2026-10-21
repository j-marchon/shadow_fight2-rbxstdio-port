// NGJHCIGFLFD$$HNIHOIAMDPC @ RVA 0x31178F4

void NGJHCIGFLFD__HNIHOIAMDPC
               (NGJHCIGFLFD_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *a;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  MethodInfo *method_00;
  int32_t iVar4;
  
  if ((DAT_045665c3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_4571);
    FUN_01bab630(&StringLiteral_2641);
    FUN_01bab630(&StringLiteral_9685);
    FUN_01bab630(&StringLiteral_13991);
    DAT_045665c3 = 1;
  }
  OANBNKOOJFH__HNIHOIAMDPC((OANBNKOOJFH_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13991,(MethodInfo *)0x0);
      a = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      bVar1 = System_String__op_Equality(a,StringLiteral_9685,(MethodInfo *)0x0);
      if (bVar1) {
        iVar4 = 1;
      }
      else {
        method_00 = (MethodInfo *)0x0;
        bVar1 = System_String__op_Equality(a,StringLiteral_2641,(MethodInfo *)0x0);
        if (bVar1) {
          iVar4 = 2;
        }
        else {
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          if (args == (System_Object_array *)0x0) goto LAB_03217a94;
          if ((a != (System_String_o *)0x0) &&
             (lVar2 = thunk_FUN_01bda71c(a,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
            uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar3,0);
          }
          if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          args->m_Items[0] = (Il2CppObject *)a;
          thunk_FUN_01c20e04(args->m_Items,a);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          method_00 = (MethodInfo *)0x0;
          UnityEngine_Debug__LogErrorFormat(StringLiteral_4571,args,(MethodInfo *)0x0);
          iVar4 = 0;
        }
      }
      (__this->fields).BGHFADDGPAD = iVar4;
      NGJHCIGFLFD__NDDOJNBEGNE(__this,AHDGNOJPPIB,method_00);
      return;
    }
  }
LAB_03217a94:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

