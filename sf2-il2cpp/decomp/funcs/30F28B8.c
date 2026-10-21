// GPJEDNEEAFK$$HNIHOIAMDPC @ RVA 0x30F28B8

void GPJEDNEEAFK__HNIHOIAMDPC
               (GPJEDNEEAFK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  long *plVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  MGNDHCBAPEN_float__string__o *pMVar6;
  float fVar7;
  
  if ((DAT_04566435 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3202);
    FUN_01bab630(&StringLiteral_5058);
    FUN_01bab630(&StringLiteral_3400);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_10477);
    DAT_04566435 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                               (AHDGNOJPPIB,StringLiteral_10477,
                                (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (plVar1 != (long *)0x0) {
      pMVar6 = (__this->fields).FPJGEAFCMGA;
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_3400,(MethodInfo *)0x0);
        fVar7 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
        if (pMVar6 != (MGNDHCBAPEN_float__string__o *)0x0) {
          (pMVar6->fields).PHPELPFMOII = fVar7;
          pMVar6 = (__this->fields).FPJGEAFCMGA;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_3202,(MethodInfo *)0x0);
            pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
            if (pMVar6 != (MGNDHCBAPEN_float__string__o *)0x0) {
              ppSVar5 = &(pMVar6->fields).DOKHHBGJICA;
              *ppSVar5 = pSVar4;
              thunk_FUN_01c20e04(ppSVar5,pSVar4);
              plVar1 = (long *)(*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                                         (AHDGNOJPPIB,StringLiteral_5058,
                                          (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
              if (plVar1 != (long *)0x0) {
                pMVar6 = (__this->fields).LHBGKMGNOEP;
                pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                         (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
                if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar2,StringLiteral_3400,(MethodInfo *)0x0);
                  fVar7 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                  if (pMVar6 != (MGNDHCBAPEN_float__string__o *)0x0) {
                    (pMVar6->fields).PHPELPFMOII = fVar7;
                    pMVar6 = (__this->fields).LHBGKMGNOEP;
                    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                             (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240))
                    ;
                    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar2,StringLiteral_3202,(MethodInfo *)0x0);
                      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
                      if (pMVar6 != (MGNDHCBAPEN_float__string__o *)0x0) {
                        ppSVar5 = &(pMVar6->fields).DOKHHBGJICA;
                        *ppSVar5 = pSVar4;
                        thunk_FUN_01c20e04(ppSVar5,pSVar4);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

