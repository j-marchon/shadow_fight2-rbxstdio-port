// Nekki.SF2.GUI.Menu.MainMenu$$UpdateNewPerks @ RVA 0x356C504

void Nekki_SF2_GUI_Menu_MainMenu__UpdateNewPerks
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_Image_o *pUVar7;
  NFGLEDADCGL_o *__this_01;
  FEPPOONJCGI_o *__this_02;
  EGMONPGHHDP_o *__this_03;
  System_String_o *pSVar8;
  ACHLOMELAJE_o *pAVar9;
  int local_34;
  
  if ((DAT_04568c3b & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568c3b = 1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
    return;
  }
  __this_00 = (__this->fields)._skipTutorialBtn;
  if ((__this_00 != (UnityEngine_UI_Button_o *)0x0) &&
     (pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._newPerksCircle;
    if ((pUVar7 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar6 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
       pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._newPerksEllipse;
      if ((pUVar7 != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar6,false,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField ==
            (ACHLOMELAJE_o *)0x0) {
          return;
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if ((pAVar9 != (ACHLOMELAJE_o *)0x0) &&
           (__this_01 = (pAVar9->fields).CKJAGLDEMAE, __this_01 != (NFGLEDADCGL_o *)0x0)) {
          iVar1 = NFGLEDADCGL__DBOOGGKPPIP(__this_01,(MethodInfo *)0x0);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if ((pAVar9 != (ACHLOMELAJE_o *)0x0) &&
             (__this_02 = (pAVar9->fields).IMJJJJJMMHL, __this_02 != (FEPPOONJCGI_o *)0x0)) {
            iVar2 = FEPPOONJCGI__NIKBIHOFOOD(__this_02,(MethodInfo *)0x0);
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if (pAVar9 != (ACHLOMELAJE_o *)0x0) {
              iVar3 = ACHLOMELAJE__JNFJHGPHLGC(pAVar9,(MethodInfo *)0x0);
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pAVar9 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar9 != (ACHLOMELAJE_o *)0x0) {
                iVar4 = ACHLOMELAJE__DDKLAHEHGBG(pAVar9,(MethodInfo *)0x0);
                if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
                }
                __this_03 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
                if (__this_03 != (EGMONPGHHDP_o *)0x0) {
                  iVar5 = EGMONPGHHDP__BAOGFDIDOMJ
                                    (__this_03,(JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0,(MethodInfo *)0x0);
                  local_34 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5;
                  if (local_34 < 1) {
                    return;
                  }
                  if (local_34 < 10) {
                    pUVar7 = (UnityEngine_UI_Image_o *)(__this->fields)._skipTutorialBtn;
                  }
                  else {
                    pUVar7 = (__this->fields)._newPerksCircle;
                  }
                  if ((pUVar7 != (UnityEngine_UI_Image_o *)0x0) &&
                     (pUVar6 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
                     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                    UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
                    pUVar7 = (__this->fields)._newPerksEllipse;
                    pSVar8 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
                    if (pUVar7 != (UnityEngine_UI_Image_o *)0x0) {
                      (*(pUVar7->klass->vtable)._75_unknown.methodPtr)
                                (pUVar7,pSVar8,(pUVar7->klass->vtable)._75_unknown.method);
                      pUVar7 = (__this->fields)._newPerksEllipse;
                      if ((pUVar7 != (UnityEngine_UI_Image_o *)0x0) &&
                         (pUVar6 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
                         pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                        UnityEngine_GameObject__SetActive(pUVar6,true,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

