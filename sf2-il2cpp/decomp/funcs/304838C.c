// Nekki.SF2.GUI.Dialogs.Raids.SeasFinChestContent$$GNOGHFKDPEO @ RVA 0x304838C

void Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__GNOGHFKDPEO
               (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  SFButton_o *__this_00;
  System_String_o *pSVar2;
  CocosAnimation_o *pCVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar4;
  undefined8 *puVar5;
  System_String_o *EIJDDKJONFO;
  UnityEngine_Vector2_o CJNHFNHJHPE;
  
  if ((DAT_04565df8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_20408);
    FUN_01bab630(&StringLiteral_12929);
    FUN_01bab630(&StringLiteral_18661);
    FUN_01bab630(&StringLiteral_21048);
    FUN_01bab630(&StringLiteral_16801);
    FUN_01bab630(&StringLiteral_12928);
    FUN_01bab630(&StringLiteral_12927);
    FUN_01bab630(&StringLiteral_12926);
    DAT_04565df8 = 1;
  }
  __this_00 = (__this->fields)._showChestRewardBtn;
  bVar1 = false;
  if (__this_00 == (SFButton_o *)0x0) goto LAB_0314859c;
  UnityEngine_UI_Selectable__set_interactable
            ((UnityEngine_UI_Selectable_o *)__this_00,true,(MethodInfo *)0x0);
  pJVar4 = (__this->fields).KBMOPEKFNNN;
  if ((pJVar4 == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) ||
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pJVar4->fields).ICGHMKGHKEH,(MethodInfo *)0x0), bVar1)) {
    return;
  }
  pJVar4 = (__this->fields).KBMOPEKFNNN;
  bVar1 = false;
  if (pJVar4 == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) goto LAB_0314859c;
  pSVar2 = (pJVar4->fields).ICGHMKGHKEH;
  bVar1 = false;
  if (pSVar2 == (System_String_o *)0x0) goto LAB_0314859c;
  pSVar2 = System_String__ToLower(pSVar2,(MethodInfo *)0x0);
  bVar1 = false;
  if (pSVar2 == (System_String_o *)0x0) goto LAB_0314859c;
  bVar1 = System_String__Contains(pSVar2,StringLiteral_20408,(MethodInfo *)0x0);
  if (bVar1) {
    puVar5 = &StringLiteral_12928;
LAB_031484d4:
    EIJDDKJONFO = (System_String_o *)*puVar5;
  }
  else {
    bVar1 = System_String__Contains(pSVar2,StringLiteral_16801,(MethodInfo *)0x0);
    if (bVar1) {
      puVar5 = &StringLiteral_12926;
      goto LAB_031484d4;
    }
    bVar1 = System_String__Contains(pSVar2,StringLiteral_21048,(MethodInfo *)0x0);
    if (bVar1) {
      puVar5 = &StringLiteral_12929;
      goto LAB_031484d4;
    }
    bVar1 = System_String__Contains(pSVar2,StringLiteral_18661,(MethodInfo *)0x0);
    EIJDDKJONFO = StringLiteral_12927;
    if (!bVar1) {
      EIJDDKJONFO = pSVar2;
    }
  }
  pCVar3 = (__this->fields)._chestAnimation;
  bVar1 = false;
  if (pCVar3 != (CocosAnimation_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pCVar3,(MethodInfo *)0x0);
    bVar1 = false;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      pCVar3 = (__this->fields)._chestAnimation;
      bVar1 = false;
      if (pCVar3 != (CocosAnimation_o *)0x0) {
        (pCVar3->fields)._autoSize = false;
        bVar1 = CocosAnimation__Init(pCVar3,EIJDDKJONFO,0,(System_String_o *)0x0,(MethodInfo *)0x0);
        pCVar3 = (__this->fields)._chestAnimation;
        if (pCVar3 != (CocosAnimation_o *)0x0) {
          __this_02 = (pCVar3->fields)._MPAMHJJKABE_k__BackingField;
          bVar1 = false;
          if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
            CJNHFNHJHPE = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0);
            CocosAnimation__set_ChildSize(pCVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
            pCVar3 = (__this->fields)._chestAnimation;
            bVar1 = false;
            if (pCVar3 != (CocosAnimation_o *)0x0) {
              (pCVar3->fields)._FEBBHCOAEMI_k__BackingField = 1;
              (pCVar3->fields)._PPEGDOHGLJJ_k__BackingField = 0.06;
              (pCVar3->fields)._NOAJIBNJKPE_k__BackingField = true;
              CocosAnimation__SetFirstFrame(pCVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_0314859c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(bVar1);
}

