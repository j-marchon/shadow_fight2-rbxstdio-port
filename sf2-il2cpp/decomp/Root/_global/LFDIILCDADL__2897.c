// TypeDefIndex 2897
// Namespace: 
// public class LFDIILCDADL : BOFEMGGNODC
// Fields:
//   private string NDAOFIJFOFL; // 0x68
//   private float HCNMEPDPNKC; // 0x70

// ===== public void .ctor()  [RVA 0x34424BC]
// LFDIILCDADL$$.ctor @ RVA 0x34424BC

void LFDIILCDADL___ctor(LFDIILCDADL_o *__this,MethodInfo *method)

{
  if ((DAT_04568231 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568231 = 1;
  }
  (__this->fields).NDAOFIJFOFL = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x3442514]
// LFDIILCDADL$$MAHFCKJGBPP @ RVA 0x3442514

void LFDIILCDADL__MAHFCKJGBPP(LFDIILCDADL_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  AFFHKININGD_o *MHOFCOHFCGL;
  OOMHDDBCBJP_o *BANHBMINMMP;
  DNELIPCHKLK_o *DBIAAJNKHLH;
  ACHLOMELAJE_o *pAVar3;
  UnityEngine_Object_o *x;
  System_String_o *pSVar4;
  
  if ((DAT_04568232 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04568232 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03542594 to 0364259b has its CatchHandler @ 0354268c */
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 035425a4 to 036425ab has its CatchHandler @ 03542688 */
                    /* try { // try from 035425ac to 036426a3 has its CatchHandler @ 0354244c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = (__this->fields).NDAOFIJFOFL;
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar4,(MethodInfo *)0x0);
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__MKKABLNAEOD(pAVar3,pSVar4,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
      DBIAAJNKHLH = (pAVar3->fields).DHDPPCNPAIE;
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 035425a4 with catch @ 03542688 */
        lVar2 = FUN_01b81620();
      }
                    /* catch() { ... } // from try @ 03542594 with catch @ 0354268c */
      x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035426a4 to 036426a7 has its CatchHandler @ 03542808 */
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
                    /* try { // try from 035426a8 to 0364274f has its CatchHandler @ 0354244c */
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MHOFCOHFCGL = NLPJLHOEAOE__OJDOCBFHNBN(DBIAAJNKHLH,(MethodInfo *)0x0);
        if (MHOFCOHFCGL == (AFFHKININGD_o *)0x0) {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          BANHBMINMMP = NLPJLHOEAOE__JIOEHAPGADN(DBIAAJNKHLH,(MethodInfo *)0x0);
          lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
                    /* try { // try from 03542750 to 03642757 has its CatchHandler @ 03542844 */
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620(lVar2);
                    /* try { // try from 03542760 to 03642767 has its CatchHandler @ 0354283c */
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
                    /* try { // try from 0354276c to 03642773 has its CatchHandler @ 03542840 */
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
                    /* try { // try from 03542778 to 03642783 has its CatchHandler @ 03542838 */
          if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
              (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_035427b0;
          Nekki_SF2_GUI_Map_MapScene__SelectBattle
                    ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),BANHBMINMMP,
                     (__this->fields).HCNMEPDPNKC,(MethodInfo *)0x0);
        }
        else {
          lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          if ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
              (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_035427b0;
          Nekki_SF2_GUI_Map_MapScene__SelectFight
                    ((Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8),MHOFCOHFCGL,
                     (__this->fields).HCNMEPDPNKC,(MethodInfo *)0x0);
        }
      }
                    /* try { // try from 03542794 to 0364279f has its CatchHandler @ 0354282c */
                    /* try { // try from 035427a4 to 036427b7 has its CatchHandler @ 03542830 */
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
LAB_035427b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x34427B4]
// LFDIILCDADL$$HNIHOIAMDPC @ RVA 0x34427B4

void LFDIILCDADL__HNIHOIAMDPC
               (LFDIILCDADL_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  float fVar4;
  
                    /* try { // try from 035427b8 to 03642817 has its CatchHandler @ 0354244c */
  if ((DAT_04568233 & 1) == 0) {
    FUN_01bab630(&StringLiteral_6584/*"Frames"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_3426/*"Battle"*/);
    DAT_04568233 = 1;
  }
                    /* catch() { ... } // from try @ 035426a4 with catch @ 03542808 */
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03542818 to 0364282b has its CatchHandler @ 035428b4 */
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 03542794 with catch @ 0354282c
                       try { // try from 0354282c to 0364285b has its CatchHandler @ 0354244c */
                    /* catch() { ... } // from try @ 035427a4 with catch @ 03542830 */
                    /* catch() { ... } // from try @ 03542778 with catch @ 03542838 */
                    /* catch() { ... } // from try @ 03542760 with catch @ 0354283c */
                    /* catch() { ... } // from try @ 0354276c with catch @ 03542840 */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3426/*"Battle"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03542750 with catch @ 03542844 */
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).NDAOFIJFOFL = pSVar3;
                    /* try { // try from 0354285c to 0364285f has its CatchHandler @ 03542888 */
      thunk_FUN_01c20e04();
                    /* try { // try from 03542860 to 03642897 has its CatchHandler @ 0354244c */
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 0354285c with catch @ 03542888 */
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_6584/*"Frames"*/,(MethodInfo *)0x0);
        fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
                    /* try { // try from 03542898 to 0364289f has its CatchHandler @ 035428b4 */
                    /* try { // try from 035428a0 to 036428ab has its CatchHandler @ 0354244c */
        (__this->fields).HCNMEPDPNKC = fVar4 / 60.0;
                    /* try { // try from 035428ac to 036428b3 has its CatchHandler @ 035428b4 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03542818 with catch @ 035428b4
                       catch() { ... } // from try @ 03542898 with catch @ 035428b4
                       catch() { ... } // from try @ 035428ac with catch @ 035428b4 */
  FUN_01bab8c8();
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x34428B8]
// LFDIILCDADL$$OFPHPMGMCAL @ RVA 0x34428B8

System_String_o * LFDIILCDADL__OFPHPMGMCAL(LFDIILCDADL_o *__this,MethodInfo *method)

{
  return (__this->fields).NDAOFIJFOFL;
}

