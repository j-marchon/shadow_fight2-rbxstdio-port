// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$ShowPergament @ RVA 0x330C414

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__ShowPergament
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  CocosAnimation_o *pCVar5;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  System_Exception_o *__this_02;
  undefined8 uVar6;
  MethodInfo *extraout_x1;
  CBLABOPKBKD_o *pCVar7;
  UnityEngine_Events_UnityEvent_o *__this_03;
  UnityEngine_Vector2_o CJNHFNHJHPE;
  
  if ((DAT_04567789 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_KHPEJMPPJOI__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_5958);
    DAT_04567789 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Menu_MenuAdvertisingButton__ICLJOJFKBMD(__this,method);
  pCVar7 = (__this->fields)._FONGIJNHBLK_k__BackingField;
  if (((pCVar7 != (CBLABOPKBKD_o *)0x0) &&
      (pSVar3 = (pCVar7->fields).BLBMGMJLEEL, pSVar3 != (System_String_o *)0x0)) &&
     (pSVar4 = System_String__Split(pSVar3,0x2e,0,(MethodInfo *)0x0),
     pSVar4 != (System_String_array *)0x0)) {
    if ((int)pSVar4->max_length != 2) {
      thunk_FUN_01bb9178(&System_Exception_TypeInfo);
      __this_02 = (System_Exception_o *)thunk_FUN_01bda818();
      pSVar3 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_7718);
      System_Exception___ctor(__this_02,pSVar3,(MethodInfo *)0x0);
      uVar6 = thunk_FUN_01bb9178(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_ShowPergament__);
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(__this_02,uVar6);
    }
    if (pSVar4 != (System_String_array *)0x0) {
      iVar1 = (int)pSVar4->max_length;
      if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pCVar5 = (__this->fields)._pergamentEffect;
      if (pCVar5 != (CocosAnimation_o *)0x0) {
        pSVar3 = pSVar4->m_Items[0];
        bVar2 = CocosAnimation__Init(pCVar5,pSVar3,0,pSVar4->m_Items[1],(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar3 = System_String__Concat(StringLiteral_5958,pSVar3,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
          return;
        }
        pCVar5 = (__this->fields)._pergamentEffect;
        if (pCVar5 != (CocosAnimation_o *)0x0) {
          __this_03 = (pCVar5->fields).OnAnimationComplete;
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
            pCVar5 = (__this->fields)._pergamentEffect;
            if (pCVar5 != (CocosAnimation_o *)0x0) {
              CocosAnimation__SetFramesRange(pCVar5,0,-1,(MethodInfo *)0x0);
              pCVar5 = (__this->fields)._pergamentEffect;
              if (pCVar5 != (CocosAnimation_o *)0x0) {
                (pCVar5->fields)._PPEGDOHGLJJ_k__BackingField = (__this->fields)._advAnimationTime;
                CocosAnimation__SetFirstFrame(pCVar5,(MethodInfo *)0x0);
                pCVar5 = (__this->fields)._pergamentEffect;
                if (pCVar5 != (CocosAnimation_o *)0x0) {
                  (pCVar5->fields)._FEBBHCOAEMI_k__BackingField = 1;
                  (pCVar5->fields)._NOAJIBNJKPE_k__BackingField = true;
                  __this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pCVar5,(MethodInfo *)0x0);
                  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
                    pCVar5 = (__this->fields)._pergamentEffect;
                    if ((pCVar5 != (CocosAnimation_o *)0x0) &&
                       (__this_01 = (pCVar5->fields)._MPAMHJJKABE_k__BackingField,
                       __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
                      CJNHFNHJHPE = UnityEngine_RectTransform__get_anchorMax
                                              (__this_01,(MethodInfo *)0x0);
                      CocosAnimation__set_RectAnchor(pCVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
                      (__this->fields)._NNCECFJGBFF_k__BackingField = false;
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

