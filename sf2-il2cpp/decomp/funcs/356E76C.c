// Nekki.SF2.GUI.Menu.MainMenu$$HPHHGGDCCKE @ RVA 0x356E76C

void Nekki_SF2_GUI_Menu_MainMenu__HPHHGGDCCKE
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  DOPEEDABNEK_o *pDVar2;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  long lVar3;
  NDPMLPGANCI_o *__this_00;
  FFHKCJAOPLI_o *__this_01;
  UnityEngine_Object_o *x;
  
                    /* try { // try from 0366e76c to 0376e77f has its CatchHandler @ 03672bf8 */
                    /* try { // try from 0366e780 to 0376e78b has its CatchHandler @ 03672bf4 */
  if ((DAT_04568c41 & 1) == 0) {
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0366e79c to 0376e7a3 has its CatchHandler @ 03672b9c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
                    /* try { // try from 0366e7b4 to 0376e7bb has its CatchHandler @ 03672b98 */
    FUN_01bab630(&StringLiteral_4327);
    DAT_04568c41 = 1;
  }
                    /* try { // try from 0366e7c8 to 0376e7cf has its CatchHandler @ 03672b94 */
                    /* try { // try from 0366e7e0 to 0376e7e7 has its CatchHandler @ 03672b90 */
  if (((__this->fields).super.__IsReleased_k__BackingField != false) ||
     (*(char *)&(__this->fields)._money == '\0')) {
    return;
  }
                    /* try { // try from 0366e7e8 to 0376e7fb has its CatchHandler @ 03672b8c */
  (__this->fields).super.field_0x17 = 1;
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
                    /* try { // try from 0366e7fc to 0376e807 has its CatchHandler @ 03672b88 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
                    /* try { // try from 0366e820 to 0376e823 has its CatchHandler @ 03673328 */
                    /* try { // try from 0366e824 to 0376e827 has its CatchHandler @ 03672c18 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0366e82c to 0376e837 has its CatchHandler @ 03673170 */
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar2 != (DOPEEDABNEK_o *)0x0) {
                    /* try { // try from 0366e850 to 0376e85b has its CatchHandler @ 036731c4 */
    IKKAMAMLIKA = DOPEEDABNEK__GOLEKCCFDAH(pDVar2,(MethodInfo *)0x0);
    if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 0366e868 to 0376e877 has its CatchHandler @ 0367327c */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04563eaa == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0366e884 to 0376e88b has its CatchHandler @ 0367316c */
        DAT_04563eaa = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 0366e89c to 0376e8a3 has its CatchHandler @ 03673168 */
      }
      pDVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if (pDVar2 == (DOPEEDABNEK_o *)0x0) goto LAB_0366e9dc;
                    /* try { // try from 0366e8b0 to 0376e8b7 has its CatchHandler @ 03673164 */
      IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN(pDVar2,StringLiteral_4327,(MethodInfo *)0x0);
    }
                    /* try { // try from 0366e8c8 to 0376e8cf has its CatchHandler @ 03673160 */
                    /* try { // try from 0366e8d0 to 0376e8df has its CatchHandler @ 0367315c */
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 0366e8f0 to 0376e8f7 has its CatchHandler @ 03673158 */
      lVar3 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
                    /* try { // try from 0366e908 to 0376e90f has its CatchHandler @ 03673154 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 0366e91c to 0376e923 has its CatchHandler @ 03673150 */
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
                    /* try { // try from 0366e934 to 0376e93b has its CatchHandler @ 0367314c */
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    /* try { // try from 0366e93c to 0376e967 has its CatchHandler @ 036731c0 */
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8) !=
          (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
                    /* try { // try from 0366e968 to 0376e98f has its CatchHandler @ 03673300 */
        Nekki_SF2_GUI_Shop_ShopScene__ScrollToItem
                  ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar3 + 0xb8),6,IKKAMAMLIKA,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      __this_01 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
                    /* try { // try from 0366e99c to 0376e9a3 has its CatchHandler @ 03673148 */
      FFHKCJAOPLI___ctor(__this_01,6,IKKAMAMLIKA,(System_String_o *)0x0,(System_String_o *)0x0,
                         (MethodInfo *)0x0);
                    /* try { // try from 0366e9b4 to 0376e9bb has its CatchHandler @ 03673144 */
      if (__this_00 != (NDPMLPGANCI_o *)0x0) {
                    /* try { // try from 0366e9c8 to 0376e9cf has its CatchHandler @ 03673140 */
        NDPMLPGANCI__EKPAFDJIAGI
                  (__this_00,4,(Il2CppObject *)__this_01,(System_Action_object__o *)0x0,true,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0366e9dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

