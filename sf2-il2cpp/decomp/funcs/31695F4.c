// AFIEAGJGHGK.PACFKHPIMAP$$.ctor @ RVA 0x31695F4

void AFIEAGJGHGK_PACFKHPIMAP___ctor
               (AFIEAGJGHGK_PACFKHPIMAP_o *__this,System_Xml_XmlNode_o *CMBPNGHLCKH,
               MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  MGNDHCBAPEN_float__float__o *pMVar5;
  
  if ((DAT_045668da & 1) == 0) {
    FUN_01bab630(&StringLiteral_22052);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_22158);
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_3270);
    DAT_045668da = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).AHDGNOJPPIB = (IEFEBEDLHNN_o *)0x0;
  (__this->fields).EKBJJKEAJCF = -3.4028235e+38;
  (__this->fields).HAPEBHGDPEK = -3.4028235e+38;
  (__this->fields).LCMEKIMFLCH = 3.4028235e+38;
  (__this->fields).OLMPFBPMOCO = 3.4028235e+38;
  thunk_FUN_01c20e04(&__this->fields,0);
  if (CMBPNGHLCKH != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                       (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).KGLJICLJHEL = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                         (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_3270,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
        pMVar5 = EIABCPKDEBD__AKEMHLAANAH
                           (CMBPNGHLCKH,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar4,StringLiteral_15021,(MethodInfo *)0x0);
        if ((bVar1) ||
           (bVar1 = System_String__op_Equality(pSVar4,StringLiteral_22052,(MethodInfo *)0x0), bVar1)
           ) {
          if (pMVar5 == (MGNDHCBAPEN_float__float__o *)0x0) goto LAB_032697f0;
          (__this->fields).EKBJJKEAJCF = (pMVar5->fields).PHPELPFMOII;
          (__this->fields).LCMEKIMFLCH = (pMVar5->fields).DOKHHBGJICA;
        }
        bVar1 = System_String__op_Equality(pSVar4,StringLiteral_15134,(MethodInfo *)0x0);
        if ((bVar1) ||
           (bVar1 = System_String__op_Equality(pSVar4,StringLiteral_22158,(MethodInfo *)0x0), bVar1)
           ) {
          if (pMVar5 == (MGNDHCBAPEN_float__float__o *)0x0) goto LAB_032697f0;
          (__this->fields).HAPEBHGDPEK = (pMVar5->fields).PHPELPFMOII;
          (__this->fields).OLMPFBPMOCO = (pMVar5->fields).DOKHHBGJICA;
        }
        return;
      }
    }
  }
LAB_032697f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

