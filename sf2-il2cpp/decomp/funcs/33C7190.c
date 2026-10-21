// MEMHEPBAJJA$$MAMEMHEFIKB @ RVA 0x33C7190

void MEMHEPBAJJA__MAMEMHEFIKB(MEMHEPBAJJA_o *__this,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  MethodInfo *extraout_x1;
  MEMHEPBAJJA_Fields *pMVar2;
  
  if ((DAT_04567df7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10714);
    DAT_04567df7 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).JHFENACKNPG;
  if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
    method = (MethodInfo *)
             (*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar1,StringLiteral_10714,(pSVar1->klass->vtable)._51_get_Item.method);
    if (method != (MethodInfo *)0x0) {
      pSVar1 = (__this->fields).JHFENACKNPG;
      if (pSVar1 == (System_Xml_XmlNode_o *)0x0) goto LAB_034c722c;
      (*(pSVar1->klass->vtable)._25_RemoveChild.methodPtr)
                (pSVar1,method,(pSVar1->klass->vtable)._25_RemoveChild.method);
    }
    pMVar2 = &__this->fields;
    if (pMVar2->_JNLLKNHOBDG_k__BackingField != (KCFIOKDFHIB_o *)0x0) {
      pMVar2->_JNLLKNHOBDG_k__BackingField = (KCFIOKDFHIB_o *)0x0;
      thunk_FUN_01c20e04(pMVar2,0);
      return;
    }
    return;
  }
LAB_034c722c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

