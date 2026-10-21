// TypeDefIndex 555
// Namespace: 
// public static class FIPOABEGELK
// Fields:
//   public static int EBHMIOHJIJJ; // 0x0
//   public static GODDDLLLOLB FCHIMNCGKJF; // 0x8
//   public static GODDDLLLOLB PNKKLHDNAGP; // 0x10
//   public static float BCBHBHADEJL; // 0x18

// ===== private static void .cctor()  [RVA 0x35A98D4]
// FIPOABEGELK$$.cctor @ RVA 0x35A98D4

void FIPOABEGELK___cctor(MethodInfo *method)

{
  GODDDLLLOLB_o *pGVar1;
  GODDDLLLOLB_o **ppGVar2;
  
  if ((DAT_04568e3b & 1) == 0) {
    FUN_01bab630(&FIPOABEGELK_TypeInfo);
    FUN_01bab630(&GODDDLLLOLB_TypeInfo);
    DAT_04568e3b = 1;
  }
  FIPOABEGELK_TypeInfo->static_fields->EBHMIOHJIJJ = 1;
  pGVar1 = (GODDDLLLOLB_o *)thunk_FUN_01bda818(GODDDLLLOLB_TypeInfo);
  GODDDLLLOLB___ctor(pGVar1,0.0,0.0,(MethodInfo *)0x0);
  ppGVar2 = &FIPOABEGELK_TypeInfo->static_fields->FCHIMNCGKJF;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  pGVar1 = (GODDDLLLOLB_o *)thunk_FUN_01bda818(GODDDLLLOLB_TypeInfo);
  GODDDLLLOLB___ctor(pGVar1,0.0,0.0,(MethodInfo *)0x0);
  ppGVar2 = &FIPOABEGELK_TypeInfo->static_fields->PNKKLHDNAGP;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  FIPOABEGELK_TypeInfo->static_fields->BCBHBHADEJL = 0.0;
  return;
}


// ===== public static void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x35A99A0]
// FIPOABEGELK$$HNIHOIAMDPC @ RVA 0x35A99A0

void FIPOABEGELK__HNIHOIAMDPC(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  FIPOABEGELK_StaticFields *pFVar4;
  GODDDLLLOLB_o *pGVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = AHDGNOJPPIB;
  if ((DAT_04568e3c & 1) == 0) {
    FUN_01bab630(&FIPOABEGELK_TypeInfo);
    FUN_01bab630(&StringLiteral_12297/*"SpeedScrollAchievements"*/);
    FUN_01bab630(&StringLiteral_11791/*"SelectOpacity"*/);
    FUN_01bab630(&StringLiteral_10231/*"PerkOpacity"*/);
    auVar7 = FUN_01bab630(&StringLiteral_2979/*"AnimationSpeed"*/);
    DAT_04568e3c = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_2979/*"AnimationSpeed"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    pSVar3 = EIABCPKDEBD__IOBEKBNCOMI(pSVar2,(MethodInfo *)0x0);
    iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,1,(MethodInfo *)0x0);
    if ((FIPOABEGELK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FIPOABEGELK_TypeInfo);
    }
    pFVar4 = FIPOABEGELK_TypeInfo->static_fields;
    pFVar4->EBHMIOHJIJJ = iVar1;
    pGVar5 = pFVar4->FCHIMNCGKJF;
    auVar7 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_10231/*"PerkOpacity"*/,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (pGVar5 != (GODDDLLLOLB_o *)0x0) {
      GODDDLLLOLB__HNIHOIAMDPC(pGVar5,auVar7._0_8_,1.0,1.0,(MethodInfo *)0x0);
      pGVar5 = FIPOABEGELK_TypeInfo->static_fields->PNKKLHDNAGP;
      auVar7 = (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                         (AHDGNOJPPIB,StringLiteral_11791/*"SelectOpacity"*/,
                          (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
      if (pGVar5 != (GODDDLLLOLB_o *)0x0) {
        GODDDLLLOLB__HNIHOIAMDPC(pGVar5,auVar7._0_8_,1.0,1.0,(MethodInfo *)0x0);
        pSVar2 = (System_Xml_XmlNode_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                           (AHDGNOJPPIB,StringLiteral_12297/*"SpeedScrollAchievements"*/,
                            (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
        pSVar3 = EIABCPKDEBD__IOBEKBNCOMI(pSVar2,(MethodInfo *)0x0);
        fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                    /* try { // try from 036a9b38 to 037a9b3f has its CatchHandler @ 036a9bec */
        FIPOABEGELK_TypeInfo->static_fields->BCBHBHADEJL = fVar6 / 60.0;
                    /* try { // try from 036a9b40 to 037a9b43 has its CatchHandler @ 036a9bd8 */
                    /* try { // try from 036a9b44 to 037a9b47 has its CatchHandler @ 036a9bd4 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036a9b48 to 037a9b4b has its CatchHandler @ 036a92a0 */
  FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
}

