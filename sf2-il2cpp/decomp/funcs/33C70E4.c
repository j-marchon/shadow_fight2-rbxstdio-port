// MEMHEPBAJJA$$ADKAJLAIBBM @ RVA 0x33C70E4

void MEMHEPBAJJA__ADKAJLAIBBM(MEMHEPBAJJA_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  KCFIOKDFHIB_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567df8 & 1) == 0) {
    FUN_01bab630(&KCFIOKDFHIB_TypeInfo);
    FUN_01bab630(&StringLiteral_10714);
    DAT_04567df8 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).JHFENACKNPG;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_10714,(pSVar1->klass->vtable)._51_get_Item.method);
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
      __this_00 = (KCFIOKDFHIB_o *)thunk_FUN_01bda818(KCFIOKDFHIB_TypeInfo);
      KCFIOKDFHIB___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
      (__this->fields)._JNLLKNHOBDG_k__BackingField = __this_00;
      thunk_FUN_01c20e04(&__this->fields,__this_00);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

