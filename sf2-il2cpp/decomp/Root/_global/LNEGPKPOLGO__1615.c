// TypeDefIndex 1615
// Namespace: 
// public static class LNEGPKPOLGO
// Fields:
//   private static float KLAPNGPGIGB; // 0x0

// ===== public static float EHONBBFMHJI()  [RVA 0x31BA898]
// LNEGPKPOLGO$$EHONBBFMHJI @ RVA 0x31BA898

float LNEGPKPOLGO__EHONBBFMHJI(MethodInfo *method)

{
  if ((DAT_04566bd6 & 1) == 0) {
    FUN_01bab630(&LNEGPKPOLGO_TypeInfo);
    DAT_04566bd6 = 1;
  }
  return LNEGPKPOLGO_TypeInfo->static_fields->KLAPNGPGIGB;
}


// ===== public static void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x31BA8E0]
// LNEGPKPOLGO$$HNIHOIAMDPC @ RVA 0x31BA8E0

void LNEGPKPOLGO__HNIHOIAMDPC(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  float fVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = AHDGNOJPPIB;
  if ((DAT_04566bd7 & 1) == 0) {
    FUN_01bab630(&LNEGPKPOLGO_TypeInfo);
    FUN_01bab630(&StringLiteral_8427/*"LifeBarMin"*/);
    auVar3 = FUN_01bab630(&StringLiteral_10224/*"PerkIcons"*/);
    DAT_04566bd7 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_10224/*"PerkIcons"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    OCAJCDIOMKB__HNIHOIAMDPC(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_8427/*"LifeBarMin"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    LBJNDMNEJJB = EIABCPKDEBD__IOBEKBNCOMI(pSVar1,(MethodInfo *)0x0);
    fVar2 = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
    LNEGPKPOLGO_TypeInfo->static_fields->KLAPNGPGIGB = fVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

