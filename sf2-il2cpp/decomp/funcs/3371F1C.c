// EIEJHJLDGNH$$.ctor @ RVA 0x3371F1C

void EIEJHJLDGNH___ctor(EIEJHJLDGNH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  PNGKLCHKPEO_o *pPVar3;
  PNGKLCHKPEO_o **ppPVar4;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *a;
  MGNDHCBAPEN_float__float__o *pMVar6;
  undefined8 uVar7;
  uint uVar8;
  
  if ((DAT_04567b29 & 1) == 0) {
    FUN_01bab630(&PNGKLCHKPEO_TypeInfo);
    FUN_01bab630(&StringLiteral_13833);
    FUN_01bab630(&StringLiteral_6609);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_3270);
    DAT_04567b29 = 1;
  }
  pPVar3 = (PNGKLCHKPEO_o *)thunk_FUN_01bda818(PNGKLCHKPEO_TypeInfo);
  PNGKLCHKPEO___ctor(pPVar3,(MethodInfo *)0x0);
  ppPVar4 = &(__this->fields).AHBMLEMJNLG;
  *ppPVar4 = pPVar3;
  thunk_FUN_01c20e04(ppPVar4,pPVar3);
  pPVar3 = (PNGKLCHKPEO_o *)thunk_FUN_01bda818(PNGKLCHKPEO_TypeInfo);
  PNGKLCHKPEO___ctor(pPVar3,(MethodInfo *)0x0);
  ppPVar4 = &(__this->fields).LJIPNPBLONM;
  *ppPVar4 = pPVar3;
  thunk_FUN_01c20e04(ppPVar4,pPVar3);
  IENLNOEDCFF___ctor((IENLNOEDCFF_o *)__this,2,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (__this_00,StringLiteral_3270,(MethodInfo *)0x0);
      if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) {
        uVar8 = 2;
      }
      else {
        a = (System_String_o *)
            (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                      (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
        bVar2 = System_String__op_Equality(a,StringLiteral_15021,(MethodInfo *)0x0);
        uVar8 = ~(uint)bVar2 & 1;
      }
      (__this->fields).NMEBNDDAFLJ = uVar8;
      pMVar6 = GIAMPEGMNHE__DOLFIEDIDHN(AHDGNOJPPIB,-1e+06,1e+06,(MethodInfo *)0x0);
      if (pMVar6 != (MGNDHCBAPEN_float__float__o *)0x0) {
        fVar1 = (pMVar6->fields).DOKHHBGJICA;
        (__this->fields).PEOMJHJICCM = (pMVar6->fields).PHPELPFMOII;
        (__this->fields).GKBCJOEFFCP = fVar1;
        pPVar3 = (__this->fields).AHBMLEMJNLG;
        uVar7 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                          (AHDGNOJPPIB,StringLiteral_6609,
                           (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        if (pPVar3 != (PNGKLCHKPEO_o *)0x0) {
          (*(pPVar3->klass->vtable)._4_EOHMFJFFFIN.methodPtr)
                    (pPVar3,uVar7,(pPVar3->klass->vtable)._4_EOHMFJFFFIN.method);
          pPVar3 = *ppPVar4;
          uVar7 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_13833,
                             (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
          if (pPVar3 != (PNGKLCHKPEO_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034720f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pPVar3->klass->vtable)._4_EOHMFJFFFIN.methodPtr)
                      (pPVar3,uVar7,(pPVar3->klass->vtable)._4_EOHMFJFFFIN.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

