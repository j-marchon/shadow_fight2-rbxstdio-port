// Nekki.SF2.GUI.Menu.MainMenu$$UpdateMenu @ RVA 0x356D330

void Nekki_SF2_GUI_Menu_MainMenu__UpdateMenu
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Menu_MenuExpPanel_o *pNVar3;
  Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this_00;
  int32_t CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  UnityEngine_Component_o *pUVar4;
  UnityEngine_Object_o *pUVar5;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = method;
  auVar6._0_8_ = __this;
  if ((DAT_04568c37 & 1) == 0) {
    auVar6 = FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c37 = 1;
  }
                    /* try { // try from 0366d35c to 0376d387 has its CatchHandler @ 0367330c */
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  bVar1 = Nekki_SF2_GUI_Menu_MainMenu__DNLOKLACJHA(auVar6._0_8_,auVar6._8_8_);
  pUVar4 = *(UnityEngine_Component_o **)&(__this->fields).CMKBLDOABLB;
  *(bool *)&(__this->fields).BIMMDBGIMFN = bVar1;
  if ((pUVar4 != (UnityEngine_Component_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    if (bVar1) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._experience;
      if ((pNVar3 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pUVar5 = *(UnityEngine_Object_o **)&(__this->fields)._MaterialsMoveDuration;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        method_00 = extraout_x1;
        if (bVar1) {
                    /* try { // try from 0366d3f8 to 0376d3fb has its CatchHandler @ 03673788 */
          pUVar4 = *(UnityEngine_Component_o **)&(__this->fields)._MaterialsMoveDuration;
                    /* try { // try from 0366d3fc to 0376d3ff has its CatchHandler @ 036738c4 */
                    /* try { // try from 0366d408 to 0376d40f has its CatchHandler @ 036738c0 */
          if ((pUVar4 == (UnityEngine_Component_o *)0x0) ||
             (pUVar2 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0),
             pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0366d4f8;
          UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
          method_00 = extraout_x1_00;
        }
        Nekki_SF2_GUI_Menu_MainMenu__UpdateRaidRating(__this,method_00);
        __this_00 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(__this->fields)._energy;
        if (__this_00 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
          CJNHFNHJHPE = 2;
LAB_0366d4b8:
                    /* try { // try from 0366d4b8 to 0376d4bf has its CatchHandler @ 036738b0 */
          Nekki_SF2_GUI_Menu_MenuMoneyPanel__set_CurrentViewMode
                    (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Menu_MainMenu__HLMADGFFIND(__this,method_01);
          Nekki_SF2_GUI_Menu_MainMenu__UpdateNewPerks(__this,method_02);
                    /* try { // try from 0366d4d0 to 0376d4d7 has its CatchHandler @ 03673894 */
          Nekki_SF2_GUI_Menu_MainMenu__UpdateNewItems(__this,method_03);
                    /* try { // try from 0366d4d8 to 0376d4eb has its CatchHandler @ 03673880 */
          Nekki_SF2_GUI_Menu_MainMenu__UpdateMaterials(__this,method_04);
          Nekki_SF2_GUI_Menu_MainMenu__UpdateBarEnergy(__this,method_05);
                    /* try { // try from 0366d4f0 to 0376d4ff has its CatchHandler @ 0367387c */
          Nekki_SF2_GUI_Menu_MainMenu__IDMLEMPNLFH(__this,method_06);
          return;
        }
      }
    }
    else {
                    /* try { // try from 0366d434 to 0376d437 has its CatchHandler @ 03673784 */
                    /* try { // try from 0366d438 to 0376d43b has its CatchHandler @ 036738ac */
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._experience;
                    /* try { // try from 0366d444 to 0376d44b has its CatchHandler @ 036738a0 */
      if ((pNVar3 != (Nekki_SF2_GUI_Menu_MenuExpPanel_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0366d450 to 0376d453 has its CatchHandler @ 036738bc */
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
                    /* try { // try from 0366d45c to 0376d463 has its CatchHandler @ 0367389c */
        pUVar5 = *(UnityEngine_Object_o **)&(__this->fields)._MaterialsMoveDuration;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          (pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
                    /* try { // try from 0366d48c to 0376d493 has its CatchHandler @ 03673890 */
          pUVar4 = *(UnityEngine_Component_o **)&(__this->fields)._MaterialsMoveDuration;
          if ((pUVar4 == (UnityEngine_Component_o *)0x0) ||
             (pUVar2 = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0),
             pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0366d4f8;
                    /* try { // try from 0366d4a4 to 0376d4ab has its CatchHandler @ 036738b8 */
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        }
        __this_00 = (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)(__this->fields)._energy;
        if (__this_00 != (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *)0x0) {
          CJNHFNHJHPE = 0;
          goto LAB_0366d4b8;
        }
      }
    }
  }
LAB_0366d4f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

