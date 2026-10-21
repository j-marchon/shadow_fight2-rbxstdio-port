// TypeDefIndex 3111
// Namespace: 
// public class IBKEPOJPLBG : QuestAction
// Fields:
//   private string HIHHACDOFBF; // 0x68
//   private string MLPKGJACOFA; // 0x70

// ===== private static bool ENGFHFALHNC(string CNIELFLIKJB)  [RVA 0x34CC744]
// IBKEPOJPLBG$$ENGFHFALHNC @ RVA 0x34CC744

bool IBKEPOJPLBG__ENGFHFALHNC(System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456867a & 1) == 0) {
                    /* try { // try from 035cc768 to 036cc773 has its CatchHandler @ 035cc398 */
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
                    /* try { // try from 035cc774 to 036cc77b has its CatchHandler @ 035cc77c */
    DAT_0456867a = 1;
  }
                    /* catch() { ... } // from try @ 035cc700 with catch @ 035cc77c
                       catch() { ... } // from try @ 035cc774 with catch @ 035cc77c */
                    /* try { // try from 035cc780 to 036cc84b has its CatchHandler @ 035cc780
                       catch() { ... } // from try @ 035cc780 with catch @ 035cc780
                       catch() { ... } // from try @ 035cc958 with catch @ 035cc780
                       catch() { ... } // from try @ 035cc9fc with catch @ 035cc780
                       catch() { ... } // from try @ 035cca04 with catch @ 035cc780
                       catch() { ... } // from try @ 035ccac8 with catch @ 035cc780 */
  bVar1 = System_String__op_Inequality(CNIELFLIKJB,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public bool MDJOIMMJAIC()  [RVA 0x34CC790]
// IBKEPOJPLBG$$MDJOIMMJAIC @ RVA 0x34CC790

bool IBKEPOJPLBG__MDJOIMMJAIC(IBKEPOJPLBG_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PKHMIGFEJCL_o *pPVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456867b & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_0456867b = 1;
    method = extraout_x1;
  }
  pPVar2 = (__this->fields).super.IJOKKFKPBEP;
  pSVar3 = (__this->fields).MLPKGJACOFA;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo,method);
  }
  pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(pPVar2,pSVar3,(MethodInfo *)0x0);
  bVar1 = IBKEPOJPLBG__ENGFHFALHNC(pSVar3,method_00);
  if (bVar1) {
    bVar1 = AMIINPEKKFB__FBNGEGEDKOA(pSVar3,(MethodInfo *)0x0);
    return bVar1;
  }
  pPVar2 = (__this->fields).super.IJOKKFKPBEP;
  pSVar3 = (__this->fields).HIHHACDOFBF;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(pPVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 035cc84c to 036cc873 has its CatchHandler @ 035cca30 */
  bVar1 = AMIINPEKKFB__BDMNJJAAHAJ(pSVar3,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public void .ctor()  [RVA 0x34CC850]
// IBKEPOJPLBG$$.ctor @ RVA 0x34CC850

void IBKEPOJPLBG___ctor(IBKEPOJPLBG_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x34CC858]
// IBKEPOJPLBG$$MAHFCKJGBPP @ RVA 0x34CC858

void IBKEPOJPLBG__MAHFCKJGBPP(IBKEPOJPLBG_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  System_String_o *pSVar3;
  
  if ((DAT_0456867c & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035cc8a8 to 036cc8d3 has its CatchHandler @ 035cca2c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_0456867c = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).MLPKGJACOFA;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,pSVar3,(MethodInfo *)0x0);
  bVar1 = IBKEPOJPLBG__ENGFHFALHNC(pSVar3,method_00);
  if (bVar1) {
    AMIINPEKKFB__NLJKKOINGGE(pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 035cc910 to 036cc917 has its CatchHandler @ 035cca24 */
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
                    /* try { // try from 035cc92c to 036cc933 has its CatchHandler @ 035cca14 */
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
                    /* try { // try from 035cc938 to 036cc943 has its CatchHandler @ 035cca20 */
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
                    /* try { // try from 035cc948 to 036cc957 has its CatchHandler @ 035cca10 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 035cc958 to 036cc9e7 has its CatchHandler @ 035cc780 */
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) ==
          (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035cc92c with catch @ 035cca14 */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Shop_ShopScene__Refresh
                ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),(MethodInfo *)0x0
                );
    }
  }
  else {
    pSVar3 = (__this->fields).HIHHACDOFBF;
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(AAJBIMFNMBB,pSVar3,(MethodInfo *)0x0);
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035cc9e8 to 036cc9ef has its CatchHandler @ 035cca34 */
      thunk_FUN_01ba7564(GameUtils_TypeInfo);
    }
                    /* try { // try from 035cc9f0 to 036cc9f3 has its CatchHandler @ 035cca28 */
                    /* try { // try from 035cc9f4 to 036cc9f7 has its CatchHandler @ 035cca1c */
                    /* try { // try from 035cc9f8 to 036cc9fb has its CatchHandler @ 035cca18 */
    GameUtils__NKJFPKDJKEN(pSVar3,(MethodInfo *)0x0);
  }
                    /* try { // try from 035cc9fc to 036cc9ff has its CatchHandler @ 035cc780 */
                    /* try { // try from 035cca00 to 036cca03 has its CatchHandler @ 035cca0c */
                    /* try { // try from 035cca04 to 036cca43 has its CatchHandler @ 035cc780 */
                    /* catch() { ... } // from try @ 035cca00 with catch @ 035cca0c */
                    /* catch() { ... } // from try @ 035cc948 with catch @ 035cca10 */
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x34CCA18]
// IBKEPOJPLBG$$HNIHOIAMDPC @ RVA 0x34CCA18

void IBKEPOJPLBG__HNIHOIAMDPC
               (IBKEPOJPLBG_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
                    /* catch() { ... } // from try @ 035cc9f8 with catch @ 035cca18 */
                    /* catch() { ... } // from try @ 035cc9f4 with catch @ 035cca1c */
                    /* catch() { ... } // from try @ 035cc938 with catch @ 035cca20 */
                    /* catch() { ... } // from try @ 035cc910 with catch @ 035cca24 */
                    /* catch() { ... } // from try @ 035cc9f0 with catch @ 035cca28 */
                    /* catch() { ... } // from try @ 035cc8a8 with catch @ 035cca2c */
                    /* catch() { ... } // from try @ 035cc84c with catch @ 035cca30 */
  if ((DAT_0456867d & 1) == 0) {
                    /* catch() { ... } // from try @ 035cc9e8 with catch @ 035cca34 */
    FUN_01bab630(&StringLiteral_5701/*"Enchantment"*/);
                    /* try { // try from 035cca44 to 036cca47 has its CatchHandler @ 035cca58 */
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* catch() { ... } // from try @ 035cca44 with catch @ 035cca58 */
    DAT_0456867d = 1;
  }
                    /* try { // try from 035cca60 to 036ccac7 has its CatchHandler @ 035ccadc */
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields).MLPKGJACOFA = pSVar3;
      thunk_FUN_01c20e04();
                    /* try { // try from 035ccac8 to 036ccad3 has its CatchHandler @ 035cc780 */
                    /* try { // try from 035ccad4 to 036ccadb has its CatchHandler @ 035ccadc */
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 035cca60 with catch @ 035ccadc
                       catch() { ... } // from try @ 035ccad4 with catch @ 035ccadc */
                    /* try { // try from 035ccae0 to 036ccbf7 has its CatchHandler @ 035ccae0
                       catch() { ... } // from try @ 035ccae0 with catch @ 035ccae0
                       catch() { ... } // from try @ 035ccd1c with catch @ 035ccae0
                       catch() { ... } // from try @ 035cce68 with catch @ 035ccae0
                       catch() { ... } // from try @ 035cce70 with catch @ 035ccae0
                       catch() { ... } // from try @ 035ccf5c with catch @ 035ccae0 */
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_5701/*"Enchantment"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).HIHHACDOFBF;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

