// PADDODJLLFJ$$HNIHOIAMDPC @ RVA 0x358BDB0

void PADDODJLLFJ__HNIHOIAMDPC
               (PADDODJLLFJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  MGNDHCBAPEN_float__float__o *pMVar6;
  undefined8 uVar7;
  
  if ((DAT_04568d48 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9544);
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_3270);
    DAT_04568d48 = 1;
  }
  AJNNHGGLGIF__HNIHOIAMDPC((AJNNHGGLGIF_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_9544,(MethodInfo *)0x0);
      pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
      (__this->fields).PCNGAEBMNDH = pSVar5;
      thunk_FUN_01c20e04();
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_3270,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1,(MethodInfo *)0x0);
        pMVar6 = GIAMPEGMNHE__DOLFIEDIDHN(AHDGNOJPPIB,100000.0,-100000.0,(MethodInfo *)0x0);
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_15021,(MethodInfo *)0x0);
        if (bVar2) {
          if (pMVar6 == (MGNDHCBAPEN_float__float__o *)0x0) goto LAB_0368bf38;
          fVar1 = (pMVar6->fields).DOKHHBGJICA;
          (__this->fields).HNJEMFFEBBH = (pMVar6->fields).PHPELPFMOII;
          (__this->fields).GJPJBEBEFDA = fVar1;
        }
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_15134,(MethodInfo *)0x0);
        if (bVar2) {
          if (pMVar6 == (MGNDHCBAPEN_float__float__o *)0x0) goto LAB_0368bf38;
          uVar7 = NEON_rev64(pMVar6->fields,4);
          (__this->fields).EMCONLBCHAB = (float)(int)uVar7;
          (__this->fields).ODJMFPBPLNH = (float)(int)((ulong)uVar7 >> 0x20);
        }
        return;
      }
    }
  }
LAB_0368bf38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

