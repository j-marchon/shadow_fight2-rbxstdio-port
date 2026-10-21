// Nekki.SF2.GUI.Dialogs.NotificationsGame$$GIENGNEGHPJ @ RVA 0x30F69C4

void Nekki_SF2_GUI_Dialogs_NotificationsGame__GIENGNEGHPJ
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Object_array *pSVar5;
  ulong uVar6;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *pUVar7;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  UnityEngine_RectTransform_array *pUVar8;
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_Object_o *y;
  System_Collections_Generic_List_RectTransform__o *__this_01;
  uint uVar9;
  
  if ((DAT_0456646c & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponentsInChildren<Graphic>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RectTransform>_Add__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NotificationsGame_GJBIHHLINEG__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&WideScreenController_TypeInfo);
    DAT_0456646c = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_NotificationsGame__NBKJLHGEDLH(__this,method);
  pUVar4 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar5 = UnityEngine_GameObject__GetComponentsInChildren<object>
                         (pUVar4,true,
                          Method_UnityEngine_GameObject_GetComponentsInChildren<Graphic>__),
     pSVar5 != (System_Object_array *)0x0)) {
    uVar1 = (uint)pSVar5->max_length;
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        __this_00 = (UnityEngine_UI_Graphic_o *)pSVar5->m_Items[(int)uVar9];
        if (__this_00 == (UnityEngine_UI_Graphic_o *)0x0) goto LAB_031f6c14;
        uVar6 = (*(__this_00->klass->vtable)._24_get_raycastTarget.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._24_get_raycastTarget.method);
        if ((uVar6 & 1) != 0) {
          x = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          y = (UnityEngine_Object_o *)(__this->fields)._inputBlocker;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
          }
          bVar3 = UnityEngine_Object__op_Inequality(x,y,(MethodInfo *)0x0);
          if (bVar3) {
            __this_01 = (__this->fields).KGJOFOAOICJ;
            pUVar7 = UnityEngine_UI_Graphic__get_rectTransform(__this_00,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<RectTransform>_Add__;
            if (__this_01 == (System_Collections_Generic_List_RectTransform__o *)0x0)
            goto LAB_031f6c14;
            pUVar8 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pUVar8 == (UnityEngine_RectTransform_array *)0x0) goto LAB_031f6c14;
            uVar1 = (__this_01->fields)._size;
            if (uVar1 < (uint)pUVar8->max_length) {
              (__this_01->fields)._size = uVar1 + 1;
              pUVar8->m_Items[(int)uVar1] = pUVar7;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,
                         (Il2CppObject *)pUVar7,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
        uVar1 = (uint)pSVar5->max_length;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
    CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if ((WideScreenController_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    WideScreenController__add_UpdateEvent(CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_NotificationsGame__GJBIHHLINEG(__this,method_01);
    pUVar7 = (__this->fields)._renderRoot;
    if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._inputBlocker;
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_NotificationsGame__ImmediateCloseNotifications(method_00);
        return;
      }
    }
  }
LAB_031f6c14:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

