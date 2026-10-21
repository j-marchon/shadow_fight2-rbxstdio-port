// Nekki.SF2.GUI.Profile.TrickContent$$Refresh @ RVA 0x31B1804

void Nekki_SF2_GUI_Profile_TrickContent__Refresh
               (Nekki_SF2_GUI_Profile_TrickContent_o *__this,KCLPNDAPADO_o *EKBENIDNAEE,
               System_Collections_Generic_List_float__o *CAJGNGGLJDF,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *pSVar4;
  LabelButton_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  KCLPNDAPADO_o *pKVar5;
  ECENNHNBAME_o *pEVar6;
  KCLPNDAPADO_o **ppKVar7;
  System_Collections_Generic_List_float__o **ppSVar8;
  
  if ((DAT_04566b7f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<float>_get_Count__);
    DAT_04566b7f = 1;
  }
  ppKVar7 = &(__this->fields).MGHHBGMPDEI;
  *ppKVar7 = EKBENIDNAEE;
  thunk_FUN_01c20e04(ppKVar7,EKBENIDNAEE);
  ppSVar8 = &(__this->fields).LHBGKMGNOEP;
  *ppSVar8 = CAJGNGGLJDF;
  thunk_FUN_01c20e04(ppSVar8,CAJGNGGLJDF);
  pNVar2 = (__this->fields)._DescriptionLabel;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
    if ((*ppKVar7 != (KCLPNDAPADO_o *)0x0) &&
       (bVar1 = System_String__IsNullOrEmpty(((*ppKVar7)->fields).PMOIHBCFLLK,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      method_02 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive(pUVar3,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._DescriptionLabel;
                    /* try { // try from 032b18a8 to 033b18cf has its CatchHandler @ 032b1ad0 */
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
        if (bVar1) {
          pKVar5 = (__this->fields).MGHHBGMPDEI;
          if ((pKVar5 == (KCLPNDAPADO_o *)0x0) ||
             (pNVar2 = (__this->fields)._DescriptionLabel,
             pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0)) goto LAB_032b19a8;
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,(pKVar5->fields).PMOIHBCFLLK,method_02);
        }
        pNVar2 = (__this->fields)._DamageLabel;
        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
          if ((*ppSVar8 != (System_Collections_Generic_List_float__o *)0x0) &&
             (pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 032b1904 to 033b192f has its CatchHandler @ 032b1acc */
            UnityEngine_GameObject__SetActive
                      (pUVar3,0 < ((*ppSVar8)->fields)._size,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._DamageLabel;
            if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
               (pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
               pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
              bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
              if (bVar1) {
                pNVar2 = (__this->fields)._DamageLabel;
                pSVar4 = Nekki_SF2_GUI_Profile_TrickContent__CDOMELDIPFI(__this,method_00);
                if (pNVar2 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_032b19a8;
                (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                          (pNVar2,pSVar4,(pNVar2->klass->vtable)._75_set_text.method);
              }
              __this_00 = (__this->fields)._ShowButton;
              if (__this_00 != (LabelButton_o *)0x0) {
                pUVar3 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                if (*ppKVar7 != (KCLPNDAPADO_o *)0x0) {
                    /* try { // try from 032b196c to 033b19df has its CatchHandler @ 032b1ae8 */
                  pEVar6 = ((*ppKVar7)->fields).FLIONKHMLLB;
                  if (pEVar6 == (ECENNHNBAME_o *)0x0) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = (pEVar6->fields).DKGPOGCGINF != false;
                  }
                  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar3,bVar1,(MethodInfo *)0x0);
                    Nekki_SF2_GUI_Profile_TrickContent__FHDMIIOMAJN(__this,method_01);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_032b19a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

