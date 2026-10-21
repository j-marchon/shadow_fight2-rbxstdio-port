// CAAJMGKIPIE$$JJJPBBLJNCD @ RVA 0x3002E7C

void CAAJMGKIPIE__JJJPBBLJNCD
               (System_Xml_XmlNode_o *ELOCKFLGKNO,
               MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *LEAMIBIAIIN,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  OBOBEOMMECI_o *pOVar2;
  
  if ((DAT_04565b2e & 1) == 0) {
    FUN_01bab630(&StringLiteral_8868);
    FUN_01bab630(&StringLiteral_9058);
    DAT_04565b2e = 1;
  }
  if (ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0) {
    if (LEAMIBIAIIN != (MGNDHCBAPEN_OBOBEOMMECI__OBOBEOMMECI__o *)0x0) {
      pOVar2 = (LEAMIBIAIIN->fields).PHPELPFMOII;
      pSVar1 = (System_Xml_XmlNode_o *)
               (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)
                         (ELOCKFLGKNO,StringLiteral_9058,
                          (ELOCKFLGKNO->klass->vtable)._51_get_Item.method);
      if (pOVar2 != (OBOBEOMMECI_o *)0x0) {
        OBOBEOMMECI__HNIHOIAMDPC(pOVar2,pSVar1,(MethodInfo *)0x0);
        pOVar2 = (LEAMIBIAIIN->fields).DOKHHBGJICA;
        pSVar1 = (System_Xml_XmlNode_o *)
                 (*(ELOCKFLGKNO->klass->vtable)._51_get_Item.methodPtr)
                           (ELOCKFLGKNO,StringLiteral_8868,
                            (ELOCKFLGKNO->klass->vtable)._51_get_Item.method);
        if (pOVar2 != (OBOBEOMMECI_o *)0x0) {
          OBOBEOMMECI__HNIHOIAMDPC(pOVar2,pSVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

