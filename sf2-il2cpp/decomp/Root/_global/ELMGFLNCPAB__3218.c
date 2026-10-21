// TypeDefIndex 3218
// Namespace: 
// public class ELMGFLNCPAB : BOFEMGGNODC
// Fields:
//   private ELMGFLNCPAB.CENJCOHIIJK AJFBKLNHMDG; // 0x64
//   private int FANDONIBLKC; // 0x68
//   private bool NHFPJDAOGGH; // 0x6C

// ===== public void .ctor()  [RVA 0x3503500]
// ELMGFLNCPAB$$.ctor @ RVA 0x3503500

void ELMGFLNCPAB___ctor(ELMGFLNCPAB_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void KJDBNFPFICE()  [RVA 0x3503508]
// ELMGFLNCPAB$$KJDBNFPFICE @ RVA 0x3503508

void ELMGFLNCPAB__KJDBNFPFICE(ELMGFLNCPAB_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Shop_PerksPanel_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  undefined1 auVar3 [16];
  
  if ((DAT_04568875 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04568875 = 1;
    method = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  auVar3._8_8_ = method;
  auVar3._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar3 = FUN_01b81620(lVar2,method);
  }
  lVar2 = *(long *)(*(long *)(auVar3._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar3._8_8_);
  }
  if ((**(long **)(lVar2 + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x178), lVar2 != 0)) {
    x = *(UnityEngine_Object_o **)(lVar2 + 0x78);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((((**(long **)(lVar2 + 0xb8) != 0) &&
         (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x178), lVar2 != 0)) &&
        (lVar2 = *(long *)(lVar2 + 0x78), lVar2 != 0)) &&
       (__this_00 = *(Nekki_SF2_GUI_Shop_PerksPanel_o **)(lVar2 + 0xa8),
       __this_00 != (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0)) {
      Nekki_SF2_GUI_Shop_PerksPanel__ShowPerkHintByIndex
                (__this_00,(__this->fields).AJFBKLNHMDG,SUB41((__this->fields).FANDONIBLKC,0),false,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MCPEEINFDKN()  [RVA 0x350362C]
// ELMGFLNCPAB$$MCPEEINFDKN @ RVA 0x350362C

void ELMGFLNCPAB__MCPEEINFDKN(ELMGFLNCPAB_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  undefined1 auVar3 [16];
  
  if ((DAT_04568876 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04568876 = 1;
    method = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  auVar3._8_8_ = method;
  auVar3._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar3 = FUN_01b81620(lVar2,method);
  }
  lVar2 = *(long *)(*(long *)(auVar3._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar3._8_8_);
  }
  if ((**(long **)(lVar2 + 0xb8) != 0) &&
     (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x110), lVar2 != 0)) {
    x = *(UnityEngine_Object_o **)(lVar2 + 0x80);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
                    /* try { // try from 03603700 to 03703793 has its CatchHandler @ 03603700
                       catch() { ... } // from try @ 03603700 with catch @ 03603700
                       catch() { ... } // from try @ 036037b8 with catch @ 03603700
                       catch() { ... } // from try @ 036037ec with catch @ 03603700
                       catch() { ... } // from try @ 03603814 with catch @ 03603700
                       catch() { ... } // from try @ 03603844 with catch @ 03603700 */
    if (((**(long **)(lVar2 + 0xb8) != 0) &&
        (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x110), lVar2 != 0)) &&
       (__this_00 = *(Nekki_SF2_GUI_Shop_Forge_RecipeUI_o **)(lVar2 + 0x80),
       __this_00 != (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *)0x0)) {
      Nekki_SF2_GUI_Shop_Forge_RecipeUI__ShowPerkHintByIndex
                (__this_00,(__this->fields).AJFBKLNHMDG,SUB41((__this->fields).FANDONIBLKC,0),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3503744]
// ELMGFLNCPAB$$MAHFCKJGBPP @ RVA 0x3503744

void ELMGFLNCPAB__MAHFCKJGBPP(ELMGFLNCPAB_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int iVar1;
  MethodInfo *method_00;
  
  if ((DAT_04568877 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_13936/*"Try to show hint with unknown sender!"*/);
    DAT_04568877 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  iVar1 = *(int *)&(__this->fields).super.field_0x54;
                    /* try { // try from 03603794 to 0370379b has its CatchHandler @ 036037f8 */
  if (iVar1 == 1) {
                    /* try { // try from 036037ac to 037037b7 has its CatchHandler @ 036037f0 */
    ELMGFLNCPAB__MCPEEINFDKN(__this,method_00);
  }
  else if (iVar1 == 0) {
    ELMGFLNCPAB__KJDBNFPFICE(__this,method_00);
  }
  else {
                    /* try { // try from 036037b8 to 037037e7 has its CatchHandler @ 03603700 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_13936/*"Try to show hint with unknown sender!"*/,(MethodInfo *)0x0);
  }
                    /* try { // try from 036037e8 to 037037eb has its CatchHandler @ 036037f4 */
                    /* try { // try from 036037ec to 0370380f has its CatchHandler @ 03603700 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036037ac with catch @ 036037f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036037e8 with catch @ 036037f4
                        */
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x35037F8]
// ELMGFLNCPAB$$HNIHOIAMDPC @ RVA 0x35037F8

void ELMGFLNCPAB__HNIHOIAMDPC
               (ELMGFLNCPAB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03603794 with catch @ 036037f8
                        */
                    /* try { // try from 03603810 to 03703813 has its CatchHandler @ 03603834 */
  if ((DAT_04568878 & 1) == 0) {
                    /* try { // try from 03603814 to 0370383b has its CatchHandler @ 03603700 */
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<ELMGFLNCPAB_CENJCOHIIJK>__);
    FUN_01bab630(&StringLiteral_7467/*"Index"*/);
                    /* catch() { ... } // from try @ 03603810 with catch @ 03603834 */
    FUN_01bab630(&StringLiteral_11809/*"Sender"*/);
                    /* try { // try from 0360383c to 03703843 has its CatchHandler @ 03603858 */
    FUN_01bab630(&StringLiteral_8233/*"KeepVisible"*/);
                    /* try { // try from 03603844 to 0370384f has its CatchHandler @ 03603700 */
    DAT_04568878 = 1;
  }
                    /* try { // try from 03603850 to 03703857 has its CatchHandler @ 03603858 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0360383c with catch @ 03603858
                       catch(type#2 @ 00000000) { ... } // from try @ 03603850 with catch @ 03603858
                        */
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_11809/*"Sender"*/,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                        (pSVar4,2,Method_EIABCPKDEBD_CKHGJBKDIID<ELMGFLNCPAB_CENJCOHIIJK>__);
      *(int32_t *)&(__this->fields).super.field_0x54 = iVar2;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_7467/*"Index"*/,(MethodInfo *)0x0);
        iVar2 = EIABCPKDEBD__EHJNCGCICMP(pSVar4,0,(MethodInfo *)0x0);
        (__this->fields).AJFBKLNHMDG = iVar2;
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 036038f8 to 03703a13 has its CatchHandler @ 036038f8
                       catch() { ... } // from try @ 036038f8 with catch @ 036038f8
                       catch() { ... } // from try @ 03603a98 with catch @ 036038f8
                       catch() { ... } // from try @ 03603ae8 with catch @ 036038f8
                       catch() { ... } // from try @ 03603b24 with catch @ 036038f8
                       catch() { ... } // from try @ 03603b60 with catch @ 036038f8 */
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_8233/*"KeepVisible"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
          *(bool *)&(__this->fields).FANDONIBLKC = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

