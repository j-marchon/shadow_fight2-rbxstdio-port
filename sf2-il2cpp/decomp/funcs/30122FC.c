// AJOGJBFNELI$$CHLJMDILNBI @ RVA 0x30122FC

void AJOGJBFNELI__CHLJMDILNBI(AJOGJBFNELI_o *__this,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  undefined8 uVar2;
  System_Byte_array *MMEEMFOLKPP;
  System_Xml_XmlDocument_o *pSVar3;
  System_String_o *EIJDDKJONFO;
  
  if ((DAT_04565bbf & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&EGFFLEKJFGN_TypeInfo);
    DAT_04565bbf = 1;
  }
  if ((__this->fields).JOBALMMDPAF != false) {
    pSVar1 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    pSVar3 = (__this->fields).KGCDBPOBGFH;
    if ((pSVar3 != (System_Xml_XmlDocument_o *)0x0) &&
       (uVar2 = (*(pSVar3->klass->vtable)._43_get_OuterXml.methodPtr)
                          (pSVar3,(pSVar3->klass->vtable)._43_get_OuterXml.method),
       pSVar1 != (System_Text_Encoding_o *)0x0)) {
      MMEEMFOLKPP = (System_Byte_array *)
                    (*(pSVar1->klass->vtable)._19_GetBytes.methodPtr)
                              (pSVar1,uVar2,(pSVar1->klass->vtable)._19_GetBytes.method);
      if ((EGFFLEKJFGN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EGFFLEKJFGN_TypeInfo);
      }
      EGFFLEKJFGN__BJDAKJJGDLE(MMEEMFOLKPP,(MethodInfo *)0x0);
      NEHNBJKKABI__HEPJLJJMBML((__this->fields).MKKHHBEFNDL,MMEEMFOLKPP,(MethodInfo *)0x0);
      EIJDDKJONFO = (__this->fields).MKKHHBEFNDL;
      if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CFJANHACGMG__GCBGEBGFNHI(EIJDDKJONFO,false,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

