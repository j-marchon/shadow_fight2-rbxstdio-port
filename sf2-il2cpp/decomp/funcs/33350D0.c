// FGKGKDEJCOG$$OJOGIDJOKMK @ RVA 0x33350D0

void FGKGKDEJCOG__OJOGIDJOKMK
               (FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *DBKIEKFPFOH,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  long *plVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  float fVar6;
  
  if ((DAT_0456793d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&StringLiteral_9277);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_9259);
    FUN_01bab630(&StringLiteral_12226);
    FUN_01bab630(&StringLiteral_8800);
    DAT_0456793d = 1;
  }
  if (DBKIEKFPFOH != (System_Xml_XmlNode_o *)0x0) {
    plVar3 = (long *)(*(DBKIEKFPFOH->klass->vtable)._51_get_Item.methodPtr)
                               (DBKIEKFPFOH,StringLiteral_12226,
                                (DBKIEKFPFOH->klass->vtable)._51_get_Item.method);
    if (plVar3 != (long *)0x0) {
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_14694,(MethodInfo *)0x0);
        fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,1.0,(MethodInfo *)0x0);
        if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        PNLFHHJGDLI__IMFBLHDOHFL(fVar6,(MethodInfo *)0x0);
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_9277,(MethodInfo *)0x0);
          bVar2 = EIABCPKDEBD__FMBMNDIGLIG(pSVar5,false,(MethodInfo *)0x0);
          PNLFHHJGDLI__NEKJIEEEPFO(bVar2,(MethodInfo *)0x0);
          plVar3 = (long *)(*(DBKIEKFPFOH->klass->vtable)._51_get_Item.methodPtr)
                                     (DBKIEKFPFOH,StringLiteral_9259,
                                      (DBKIEKFPFOH->klass->vtable)._51_get_Item.method);
          if (plVar3 != (long *)0x0) {
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
            if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03435268 to 035352ff has its CatchHandler @ 03435268
                       catch() { ... } // from try @ 03435268 with catch @ 03435268
                       catch() { ... } // from try @ 03435328 with catch @ 03435268
                       catch() { ... } // from try @ 03435378 with catch @ 03435268
                       catch() { ... } // from try @ 034353a0 with catch @ 03435268
                       catch() { ... } // from try @ 034353e0 with catch @ 03435268 */
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_14694,(MethodInfo *)0x0);
              fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar5,1.0,(MethodInfo *)0x0);
              PNLFHHJGDLI__GJBPODCHLNP(fVar6,(MethodInfo *)0x0);
              pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
              if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar4,StringLiteral_9277,(MethodInfo *)0x0);
                bVar2 = EIABCPKDEBD__FMBMNDIGLIG(pSVar5,false,(MethodInfo *)0x0);
                PNLFHHJGDLI__FDOGCCOEHPL(bVar2,(MethodInfo *)0x0);
                if (DAT_04565f32 == '\0') {
                  FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                  DAT_04565f32 = '\x01';
                }
                if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                    /* try { // try from 03435300 to 03535307 has its CatchHandler @ 03435380 */
                bVar1 = PNLFHHJGDLI_TypeInfo->static_fields->MGFLMNJLJLK;
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03435314 to 03535327 has its CatchHandler @ 03435384 */
                }
                NLPJLHOEAOE_TypeInfo->static_fields->OFCMOHAEENG = bVar1;
                    /* try { // try from 03435328 to 03535373 has its CatchHandler @ 03435268 */
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_8800,(MethodInfo *)0x0);
  return;
}

