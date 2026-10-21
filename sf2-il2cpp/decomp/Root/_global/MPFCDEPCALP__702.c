// TypeDefIndex 702
// Namespace: 
// public class MPFCDEPCALP : BOFEMGGNODC
// Fields:
//   private RaidToggleButton OGOAKBNLIDJ; // 0x68
//   private Vector2 JDIMEBGEJFE; // 0x70
//   private float GBJHFDKDAIB; // 0x78

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3035F94]
// MPFCDEPCALP$$MAHFCKJGBPP @ RVA 0x3035F94

void MPFCDEPCALP__MAHFCKJGBPP(MPFCDEPCALP_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  
  if ((DAT_04565d41 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&Method_MPFCDEPCALP_IOKPGFFEMCE__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04565d41 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03136048 to 0323618b has its CatchHandler @ 03136048
                       catch() { ... } // from try @ 03136048 with catch @ 03136048
                       catch() { ... } // from try @ 03136570 with catch @ 03136048
                       catch() { ... } // from try @ 03136604 with catch @ 03136048
                       catch() { ... } // from try @ 0313669c with catch @ 03136048
                       catch() { ... } // from try @ 03136810 with catch @ 03136048
                       catch() { ... } // from try @ 03136854 with catch @ 03136048
                       catch() { ... } // from try @ 031368c8 with catch @ 03136048 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    MPFCDEPCALP__MAHEOMJKNLK(__this,method_00);
    return;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__IFJFFPAKLKB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MAHEOMJKNLK()  [RVA 0x30360D8]
// MPFCDEPCALP$$MAHEOMJKNLK @ RVA 0x30360D8

void MPFCDEPCALP__MAHEOMJKNLK(MPFCDEPCALP_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *pNVar3;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_Transform_o *INPDGILCEBL;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Map_RaidToggleButton_o **ppNVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_04565d42 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_MPFCDEPCALP_KPPLCBBJIOA__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&StringLiteral_10659/*"QuestActionRaidIndicateRaidBtn::ShowRaidToggleBtnArrow: no MapScene"*/);
    DAT_04565d42 = 1;
    method = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  auVar5._8_8_ = method;
  auVar5._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar5 = FUN_01b81620(lVar2,method);
  }
  lVar2 = *(long *)(*(long *)(auVar5._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar5._8_8_);
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0313618c to 03236193 has its CatchHandler @ 031366c4 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 031361c8 to 032361cb has its CatchHandler @ 03136620 */
    UnityEngine_Debug__LogError(StringLiteral_10659/*"QuestActionRaidIndicateRaidBtn::ShowRaidToggleBtnArrow: no MapScene"*/,(MethodInfo *)0x0);
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 031361e8 to 032361eb has its CatchHandler @ 03136608 */
                    /* try { // try from 031361ec to 032361f7 has its CatchHandler @ 03136630 */
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
                    /* try { // try from 03136200 to 03236223 has its CatchHandler @ 031366cc */
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
      (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
    pNVar3 = Nekki_SF2_GUI_Map_MapScene__GetRaidToggleBtn
                       ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                        (MethodInfo *)0x0);
    ppNVar4 = &(__this->fields).OGOAKBNLIDJ;
    *ppNVar4 = pNVar3;
                    /* try { // try from 03136234 to 0323623b has its CatchHandler @ 031366d4 */
    thunk_FUN_01c20e04(ppNVar4,pNVar3);
    if (*ppNVar4 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
                    /* try { // try from 03136248 to 0323624f has its CatchHandler @ 031366bc */
      AKJJAPEHKCG__GOCEMJOCNEE
                ((UnityEngine_UI_Selectable_o *)((*ppNVar4)->fields)._goToRaidBtn,(MethodInfo *)0x0)
      ;
      __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 03136268 to 0323628b has its CatchHandler @ 031366e4 */
      if (((*ppNVar4 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) &&
          (__this_01 = ((*ppNVar4)->fields)._goToRaidBtn,
          __this_01 != (UnityEngine_UI_Button_o *)0x0)) &&
         (INPDGILCEBL = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0)) {
        Nekki_SF2_GUI_Tutorial_ArrowCanvas__ShowArrow
                  (__this_00,INPDGILCEBL,(UnityEngine_Vector2_o)(__this->fields).JDIMEBGEJFE.fields,
                   (__this->fields).GBJHFDKDAIB,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).OGOAKBNLIDJ;
                    /* try { // try from 03136298 to 032362af has its CatchHandler @ 031366dc */
        CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar3 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
                    /* try { // try from 031362c8 to 032362cb has its CatchHandler @ 03136610 */
                    /* try { // try from 031362cc to 03236313 has its CatchHandler @ 031366e0 */
          Nekki_SF2_GUI_Map_RaidToggleButton__add_OnClick(pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x30362DC]
// MPFCDEPCALP$$HNIHOIAMDPC @ RVA 0x30362DC

void MPFCDEPCALP__HNIHOIAMDPC
               (MPFCDEPCALP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04565d43 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3105/*"ArrowRotation"*/);
    FUN_01bab630(&StringLiteral_3103/*"ArrowOffsetX"*/);
                    /* try { // try from 03136314 to 0323631f has its CatchHandler @ 031366b4 */
    FUN_01bab630(&StringLiteral_3104/*"ArrowOffsetY"*/);
    DAT_04565d43 = 1;
  }
                    /* try { // try from 03136330 to 03236333 has its CatchHandler @ 031366d8 */
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03136344 to 0323634f has its CatchHandler @ 031366b0 */
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03136360 to 0323636b has its CatchHandler @ 031366ac */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3103/*"ArrowOffsetX"*/,(MethodInfo *)0x0);
      fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,100.0,(MethodInfo *)0x0);
                    /* try { // try from 03136380 to 03236383 has its CatchHandler @ 031366c8 */
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_3104/*"ArrowOffsetY"*/,(MethodInfo *)0x0);
                    /* try { // try from 031363b0 to 032363b7 has its CatchHandler @ 0313662c */
        fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
        (__this->fields).JDIMEBGEJFE.fields.x = fVar3;
        (__this->fields).JDIMEBGEJFE.fields.y = fVar4;
                    /* try { // try from 031363c0 to 032363d3 has its CatchHandler @ 031366d0 */
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_3105/*"ArrowRotation"*/,(MethodInfo *)0x0);
          fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,90.0,(MethodInfo *)0x0);
          (__this->fields).GBJHFDKDAIB = fVar3;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03136408 to 0323640f has its CatchHandler @ 031366d4 */
  FUN_01bab8c8();
}


// ===== private void KPPLCBBJIOA()  [RVA 0x303640C]
// MPFCDEPCALP$$KPPLCBBJIOA @ RVA 0x303640C

void MPFCDEPCALP__KPPLCBBJIOA(MPFCDEPCALP_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Map_RaidToggleButton_o *pNVar1;
  
                    /* try { // try from 0313641c to 03236427 has its CatchHandler @ 03136648 */
  if ((DAT_04565d44 & 1) == 0) {
                    /* try { // try from 0313642c to 03236433 has its CatchHandler @ 03136644 */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_MPFCDEPCALP_KPPLCBBJIOA__);
    DAT_04565d44 = 1;
  }
                    /* try { // try from 0313644c to 03236457 has its CatchHandler @ 03136628 */
  __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).OGOAKBNLIDJ;
    if (pNVar1 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
                    /* try { // try from 03136478 to 0323647f has its CatchHandler @ 03136624 */
      AKJJAPEHKCG__HJDDBKPCAFJ
                ((UnityEngine_UI_Selectable_o *)(pNVar1->fields)._goToRaidBtn,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).OGOAKBNLIDJ;
      CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0313648c to 032364ab has its CatchHandler @ 03136634 */
      System_Action___ctor();
      if (pNVar1 != (Nekki_SF2_GUI_Map_RaidToggleButton_o *)0x0) {
        Nekki_SF2_GUI_Map_RaidToggleButton__remove_OnClick(pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031364cc to 032364d3 has its CatchHandler @ 031366c0 */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30364D0]
// MPFCDEPCALP$$.ctor @ RVA 0x30364D0

void MPFCDEPCALP___ctor(MPFCDEPCALP_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void IOKPGFFEMCE(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x30364D8]
// MPFCDEPCALP$$IOKPGFFEMCE @ RVA 0x30364D8

void MPFCDEPCALP__IOKPGFFEMCE(MPFCDEPCALP_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  
  if ((DAT_04565d45 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
                    /* try { // try from 03136500 to 03236507 has its CatchHandler @ 03136618 */
    FUN_01bab630(&Method_MPFCDEPCALP_IOKPGFFEMCE__);
    DAT_04565d45 = 1;
  }
                    /* try { // try from 03136518 to 03236523 has its CatchHandler @ 03136614 */
  if (KDLGNPCKLIJ == 5) {
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                  thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
                    /* try { // try from 0313653c to 03236543 has its CatchHandler @ 03136604 */
                    /* try { // try from 03136550 to 0323656f has its CatchHandler @ 0313660c */
    System_Action<Int32Enum>___ctor();
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__LMMJGPKGCDJ(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 03136570 to 032365bf has its CatchHandler @ 03136048 */
      MPFCDEPCALP__MAHEOMJKNLK(__this,method_00);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

