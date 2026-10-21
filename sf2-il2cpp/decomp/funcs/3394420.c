// Nekki.SF2.GUI.Profile.ProfileScene$$SelectSubItem @ RVA 0x3394420

void Nekki_SF2_GUI_Profile_ProfileScene__SelectSubItem
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,
               Nekki_SF2_GUI_Profile_SubItem_o *OLNJMPMPLOB,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_SubItem_o **ppNVar1;
  int iVar2;
  bool bVar3;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *OLNJMPMPLOB_00;
  Nekki_SF2_GUI_Profile_AchievementSubItem_o *OLNJMPMPLOB_01;
  Nekki_SF2_GUI_Profile_TrickSubItem_o *OLNJMPMPLOB_02;
  JEIEEMKCNOJ_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Profile_InfoPanel_o *pNVar4;
  Nekki_SF2_GUI_Profile_SubItem_o *pNVar5;
  Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *pNVar6;
  Nekki_SF2_GUI_Profile_ProfileCell_o *pNVar7;
  
  if ((DAT_04567c46 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_FLIPKMFLGNB<AchievementSubItem>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_FLIPKMFLGNB<PerkSubItem>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_FLIPKMFLGNB<TrickSubItem>__);
    DAT_04567c46 = 1;
  }
  pNVar5 = (__this->fields).PFKHDCBBDOG;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)OLNJMPMPLOB,
                     (MethodInfo *)0x0);
  if (!bVar3) {
    ppNVar1 = &(__this->fields).PFKHDCBBDOG;
    pNVar5 = *ppNVar1;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar3) {
      pNVar5 = *ppNVar1;
      if (pNVar5 == (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) goto LAB_03494678;
      (*(pNVar5->klass->vtable)._55_SetSelected.methodPtr)
                (pNVar5,0,(pNVar5->klass->vtable)._55_SetSelected.method);
    }
    *ppNVar1 = OLNJMPMPLOB;
    thunk_FUN_01c20e04(ppNVar1,OLNJMPMPLOB);
    pNVar5 = *ppNVar1;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar3) {
      if (OLNJMPMPLOB != (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) {
        pNVar6 = (__this->fields)._ItemsSelectionManager;
        pNVar7 = (OLNJMPMPLOB->fields).PEJMMOONAHC;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        CJNHFNHJHPE = (JEIEEMKCNOJ_o *)0x0;
        if (bVar3) {
          pNVar7 = (OLNJMPMPLOB->fields).PEJMMOONAHC;
          if (pNVar7 == (Nekki_SF2_GUI_Profile_ProfileCell_o *)0x0) goto LAB_03494678;
          CJNHFNHJHPE = (pNVar7->fields).MKAAKGJNBHI;
        }
        if (pNVar6 != (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) {
          Nekki_SF2_GUI_Profile_ItemsSelectionManager__set_SubItemsContainer
                    (pNVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
          pNVar6 = (__this->fields)._ItemsSelectionManager;
          if (pNVar6 != (Nekki_SF2_GUI_Profile_ItemsSelectionManager_o *)0x0) {
            Nekki_SF2_GUI_Profile_ItemsSelectionManager__set_SelectedSubItem
                      (pNVar6,OLNJMPMPLOB,(MethodInfo *)0x0);
            pNVar5 = *ppNVar1;
            if (pNVar5 != (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) {
              (*(pNVar5->klass->vtable)._55_SetSelected.methodPtr)
                        (pNVar5,1,(pNVar5->klass->vtable)._55_SetSelected.method);
              iVar2 = (__this->fields).AIAODGKGPEI;
              if (iVar2 == 2) {
                pNVar4 = (__this->fields)._RightPanel;
                OLNJMPMPLOB_01 =
                     (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)
                     Nekki_SF2_GUI_Profile_ProfileScene__FLIPKMFLGNB<object>
                               (__this,
                                Method_Nekki_SF2_GUI_Profile_ProfileScene_FLIPKMFLGNB<AchievementSubItem>__
                               );
                if (pNVar4 != (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0) {
                  Nekki_SF2_GUI_Profile_InfoPanel__Refresh(pNVar4,OLNJMPMPLOB_01,(MethodInfo *)0x0);
                  return;
                }
              }
              else if (iVar2 == 1) {
                pNVar4 = (__this->fields)._RightPanel;
                OLNJMPMPLOB_02 =
                     (Nekki_SF2_GUI_Profile_TrickSubItem_o *)
                     Nekki_SF2_GUI_Profile_ProfileScene__FLIPKMFLGNB<object>
                               (__this,
                                Method_Nekki_SF2_GUI_Profile_ProfileScene_FLIPKMFLGNB<TrickSubItem>__
                               );
                if (pNVar4 != (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0) {
                  Nekki_SF2_GUI_Profile_InfoPanel__Refresh(pNVar4,OLNJMPMPLOB_02,(MethodInfo *)0x0);
                  return;
                }
              }
              else {
                if (iVar2 != 0) {
                  return;
                }
                pNVar4 = (__this->fields)._RightPanel;
                OLNJMPMPLOB_00 =
                     (Nekki_SF2_GUI_Profile_PerkSubItem_o *)
                     Nekki_SF2_GUI_Profile_ProfileScene__FLIPKMFLGNB<object>
                               (__this,
                                Method_Nekki_SF2_GUI_Profile_ProfileScene_FLIPKMFLGNB<PerkSubItem>__
                               );
                if (pNVar4 != (Nekki_SF2_GUI_Profile_InfoPanel_o *)0x0) {
                  Nekki_SF2_GUI_Profile_InfoPanel__Refresh(pNVar4,OLNJMPMPLOB_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
LAB_03494678:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

