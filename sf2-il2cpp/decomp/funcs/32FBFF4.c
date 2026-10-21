// Nekki.SF2.GUI.Menu.MenuExpPanel$$BKDODKNEHIM @ RVA 0x32FBFF4

void Nekki_SF2_GUI_Menu_MenuExpPanel__BKDODKNEHIM
               (Nekki_SF2_GUI_Menu_MenuExpPanel_o *__this,float FJJJGOHDLBH,float GKBCJOEFFCP,
               MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  ProgressBar_o *pPVar3;
  ACHLOMELAJE_o *__this_00;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Button_o *__this_01;
  bool value;
  CNKPEGNHNGO_o *pCVar5;
  System_Collections_Generic_List_MGNDHCBAPEN_int__uint___o *pSVar6;
  UnityEngine_UI_Image_o *__this_02;
  float fVar7;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  
  if ((DAT_045676e9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_uint>>_get_Count__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045676e9 = 1;
  }
  if (FJJJGOHDLBH != 0.0) {
    pPVar3 = (__this->fields)._barExp;
    if (pPVar3 == (ProgressBar_o *)0x0) goto LAB_033fc1b4;
    fVar7 = (float)(*(pPVar3->klass->vtable)._5_get_Value.methodPtr)
                             (pPVar3,(pPVar3->klass->vtable)._5_get_Value.method);
                    /* try { // try from 033fc150 to 034fc153 has its CatchHandler @ 033fc2b8 */
                    /* try { // try from 033fc154 to 034fc17f has its CatchHandler @ 033fc2d4 */
    if (fVar7 == FJJJGOHDLBH) {
      return;
    }
  }
  pPVar3 = (__this->fields)._barExp;
  if (pPVar3 != (ProgressBar_o *)0x0) {
                    /* try { // try from 033fc04c to 034fc053 has its CatchHandler @ 033fc300 */
    (*(pPVar3->klass->vtable)._11_SetValueBorders.methodPtr)
              (0,CONCAT44(in_register_00005024,GKBCJOEFFCP),pPVar3,
               (pPVar3->klass->vtable)._11_SetValueBorders.method);
    pPVar3 = (__this->fields)._barExp;
                    /* try { // try from 033fc060 to 034fc06b has its CatchHandler @ 033fc2fc */
    if (pPVar3 != (ProgressBar_o *)0x0) {
                    /* try { // try from 033fc074 to 034fc07f has its CatchHandler @ 033fc2f4 */
      (*(pPVar3->klass->vtable)._7_set_Value.methodPtr)
                (CONCAT44(in_register_00005004,FJJJGOHDLBH),pPVar3,
                 (pPVar3->klass->vtable)._7_set_Value.method);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033fc088 to 034fc093 has its CatchHandler @ 033fc2f0 */
        thunk_FUN_01ba7564();
      }
      pCVar5 = MGNPHCAAEIO_TypeInfo->static_fields->DLPAONNJNMA;
                    /* try { // try from 033fc09c to 034fc0a7 has its CatchHandler @ 033fc2ec */
      if ((pCVar5 != (CNKPEGNHNGO_o *)0x0) &&
         (pSVar6 = (pCVar5->fields).HLIELGNFGLF,
         pSVar6 != (System_Collections_Generic_List_MGNDHCBAPEN_int__uint___o *)0x0)) {
        if ((pSVar6->fields)._size == 0) {
          return;
        }
        __this_00 = (__this->fields).OKNKKHGBECG;
        if (__this_00 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 033fc0b8 to 034fc0bb has its CatchHandler @ 033fc2dc */
          iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 033fc0c4 to 034fc0df has its CatchHandler @ 033fc2e0 */
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
          }
          iVar2 = MGNPHCAAEIO__DGJACOJNPBB((MethodInfo *)0x0);
          __this_02 = (__this->fields)._iconMaxLevel;
                    /* try { // try from 033fc0f4 to 034fc0ff has its CatchHandler @ 033fc2e8 */
          if ((__this_02 != (UnityEngine_UI_Image_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            if (iVar1 < iVar2) {
              UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
              pPVar3 = (__this->fields)._barExp;
                    /* try { // try from 033fc110 to 034fc117 has its CatchHandler @ 033fc2d8 */
              if ((pPVar3 != (ProgressBar_o *)0x0) &&
                 (pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pPVar3,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 033fc128 to 034fc12b has its CatchHandler @ 033fc2bc */
                UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
                __this_01 = (__this->fields)._levelHintButton;
                    /* try { // try from 033fc130 to 034fc137 has its CatchHandler @ 033fc2cc */
                if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
                  value = true;
LAB_033fc1a0:
                  UnityEngine_Behaviour__set_enabled
                            ((UnityEngine_Behaviour_o *)__this_01,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            else {
              UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
              pPVar3 = (__this->fields)._barExp;
              if ((pPVar3 != (ProgressBar_o *)0x0) &&
                 (pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pPVar3,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 033fc188 to 034fc1a3 has its CatchHandler @ 033fc2c0 */
                UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
                __this_01 = (__this->fields)._levelHintButton;
                if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
                  value = false;
                  goto LAB_033fc1a0;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_033fc1b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

