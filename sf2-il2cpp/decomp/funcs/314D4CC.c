// Nekki.SF2.GUI.Map.ContentCompleteOrLocked$$Init @ RVA 0x314D4CC

void Nekki_SF2_GUI_Map_ContentCompleteOrLocked__Init
               (Nekki_SF2_GUI_Map_ContentCompleteOrLocked_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               DNELIPCHKLK_o *PBDMBCJNKII,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  int32_t iVar5;
  OOMHDDBCBJP_o **ppOVar6;
  DNELIPCHKLK_o *__this_00;
  DNELIPCHKLK_o **ppDVar7;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  
  if ((DAT_045667d9 & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_16667);
    FUN_01bab630(&StringLiteral_16666);
    FUN_01bab630(&StringLiteral_16665);
    FUN_01bab630(&StringLiteral_1);
    DAT_045667d9 = 1;
  }
  ppOVar6 = &(__this->fields).ACMHOIKOLBE;
  *ppOVar6 = BANHBMINMMP;
  thunk_FUN_01c20e04(ppOVar6,BANHBMINMMP);
  __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
  DNELIPCHKLK___ctor(__this_00,PBDMBCJNKII,(MethodInfo *)0x0);
  ppDVar7 = &(__this->fields).AABIECAIFGA;
  *ppDVar7 = __this_00;
  thunk_FUN_01c20e04(ppDVar7,__this_00);
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    iVar4 = (*(BANHBMINMMP->klass->vtable)._15_AAHLCCCONKI.methodPtr)
                      (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._15_AAHLCCCONKI.method);
    pNVar8 = (__this->fields)._lblLocked;
    if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      puVar1 = &StringLiteral_16666;
      if (iVar4 != 1) {
        puVar1 = &StringLiteral_16667;
      }
      puVar2 = &StringLiteral_16665;
      if ((BANHBMINMMP->fields).KIHDFNGKPGN != 0) {
        puVar2 = puVar1;
      }
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar8,(System_String_o *)*puVar2,(MethodInfo *)0x0);
      pNVar8 = (__this->fields)._lblTime;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar3) {
        pNVar8 = (__this->fields)._lblTime;
        if (pNVar8 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0324d690;
        (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                  (pNVar8,StringLiteral_1,(pNVar8->klass->vtable)._75_set_text.method);
      }
      __this_01 = (__this->fields)._btnPlayVideo;
      if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
        __this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        iVar5 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
        if (iVar5 == 0x12) {
          bVar3 = true;
        }
        else {
          iVar5 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
          bVar3 = iVar5 == 0x15;
        }
        if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_02,bVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0324d690:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

