// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellMember$$UpdateAll @ RVA 0x33548B0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__UpdateAll
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember_o *__this,MethodInfo *method
               )

{
  int iVar1;
  int32_t OJDBABKBAFA;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  IDGOGBNEGAM_o *pIVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  
  if ((DAT_04567a40 & 1) == 0) {
    FUN_01bab630(&LPGPNBGHDBD_TypeInfo);
    DAT_04567a40 = 1;
  }
  pIVar6 = (__this->fields).PAAIEEFEBKK;
  if (pIVar6 != (IDGOGBNEGAM_o *)0x0) {
    pSVar2 = System_Int32__ToString((int)pIVar6 + 0x14,(MethodInfo *)0x0);
    pNVar7 = (__this->fields)._memberPlace;
    if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                (pNVar7,pSVar2,(pNVar7->klass->vtable)._75_set_text.method);
      pIVar6 = (__this->fields).PAAIEEFEBKK;
      if ((pIVar6 != (IDGOGBNEGAM_o *)0x0) &&
         (pNVar7 = (__this->fields)._memberPlace, pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
        iVar1 = (pIVar6->fields).LLNMDPPIGLF;
        pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar3,iVar1 != 1,(MethodInfo *)0x0);
          pNVar4 = (__this->fields)._leaderIcon;
          if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,iVar1 == 1,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__FDFHMHPOHKA(__this,method_00);
            Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellMember__NLBPEFENJIK(__this,method_01);
            pIVar6 = (__this->fields).PAAIEEFEBKK;
            if (pIVar6 != (IDGOGBNEGAM_o *)0x0) {
              pNVar7 = (__this->fields)._danNumber;
              pSVar2 = System_Int32__ToString((int)pIVar6 + 0x2c,(MethodInfo *)0x0);
              if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                          (pNVar7,pSVar2,(pNVar7->klass->vtable)._75_set_text.method);
                pIVar6 = (__this->fields).PAAIEEFEBKK;
                if ((pIVar6 != (IDGOGBNEGAM_o *)0x0) &&
                   (pNVar7 = (__this->fields)._playerNameText,
                   pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
                  (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                            (pNVar7,(pIVar6->fields).JIJLBFGKNJK,
                             (pNVar7->klass->vtable)._75_set_text.method);
                  pIVar6 = (__this->fields).PAAIEEFEBKK;
                  if (pIVar6 != (IDGOGBNEGAM_o *)0x0) {
                    pNVar7 = (__this->fields)._ratingNumber;
                    OJDBABKBAFA = (pIVar6->fields).HHOPNIKFJNE;
                    if ((LPGPNBGHDBD_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pSVar2 = LPGPNBGHDBD__LLOLNNDDPFM(OJDBABKBAFA,(MethodInfo *)0x0);
                    if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                      (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                                (pNVar7,pSVar2,(pNVar7->klass->vtable)._75_set_text.method);
                      pIVar6 = (__this->fields).PAAIEEFEBKK;
                      if (pIVar6 != (IDGOGBNEGAM_o *)0x0) {
                        pNVar7 = (__this->fields)._roleText;
                        pSVar2 = IDGOGBNEGAM__NPAOCMPEILP
                                           ((pIVar6->fields).LLNMDPPIGLF,(MethodInfo *)0x0);
                        if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar7,pSVar2,(MethodInfo *)0x0);
                          pNVar5 = (__this->fields)._kick;
                          if (pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                            pUVar3 = UnityEngine_Component__get_gameObject
                                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0)
                            ;
                            pIVar6 = (__this->fields).PAAIEEFEBKK;
                            if ((pIVar6 != (IDGOGBNEGAM_o *)0x0) &&
                               (pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                              UnityEngine_GameObject__SetActive
                                        (pUVar3,(pIVar6->fields).GDFDBJCDBJE,(MethodInfo *)0x0);
                              pNVar5 = (__this->fields)._up;
                              if (pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                                pUVar3 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)pNVar5,
                                                    (MethodInfo *)0x0);
                                pIVar6 = (__this->fields).PAAIEEFEBKK;
                                if ((pIVar6 != (IDGOGBNEGAM_o *)0x0) &&
                                   (pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                                  UnityEngine_GameObject__SetActive
                                            (pUVar3,(pIVar6->fields).KIKDLMBJEEG,(MethodInfo *)0x0);
                                  pNVar5 = (__this->fields)._down;
                                  if (pNVar5 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) {
                                    pUVar3 = UnityEngine_Component__get_gameObject
                                                       ((UnityEngine_Component_o *)pNVar5,
                                                        (MethodInfo *)0x0);
                                    pIVar6 = (__this->fields).PAAIEEFEBKK;
                                    if ((pIVar6 != (IDGOGBNEGAM_o *)0x0) &&
                                       (pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                                      UnityEngine_GameObject__SetActive
                                                (pUVar3,(pIVar6->fields).PGDEOIHFHCI,
                                                 (MethodInfo *)0x0);
                                      pNVar4 = (__this->fields)._playerPointer;
                                      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
                                        pUVar3 = UnityEngine_Component__get_gameObject
                                                           ((UnityEngine_Component_o *)pNVar4,
                                                            (MethodInfo *)0x0);
                                        pIVar6 = (__this->fields).PAAIEEFEBKK;
                                        if ((pIVar6 != (IDGOGBNEGAM_o *)0x0) &&
                                           (pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                                          UnityEngine_GameObject__SetActive
                                                    (pUVar3,(pIVar6->fields).KGCEKHGKGFP,
                                                     (MethodInfo *)0x0);
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
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

