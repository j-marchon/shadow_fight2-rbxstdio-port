// FFFAKMHNGKI$$BKOFAELILJE @ RVA 0x33FB57C

void FFFAKMHNGKI__BKOFAELILJE(FFFAKMHNGKI_o *__this,MethodInfo *method)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_Shop_SidePanel_o *__this_01;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Events_UnityEvent_bool__o *__this_02;
  undefined1 auVar5 [16];
  
  if ((DAT_04567fb8 & 1) == 0) {
    FUN_01bab630(&Method_FFFAKMHNGKI_KFIBMPDDAFG__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_AddListener__);
    DAT_04567fb8 = 1;
    method = extraout_x1;
  }
  lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  auVar5._8_8_ = method;
  auVar5._0_8_ = lVar3;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    auVar5 = FUN_01b81620(lVar3,method);
  }
  lVar3 = *(long *)(*(long *)(auVar5._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620(lVar3,auVar5._8_8_);
  }
  pUVar4 = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar2 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_034fb848;
    pUVar4 = *(UnityEngine_Object_o **)(**(long **)(lVar3 + 0xb8) + 0x100);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      if ((**(long **)(lVar3 + 0xb8) == 0) ||
         (lVar3 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x100), lVar3 == 0)) goto LAB_034fb848;
      if (*(char *)(lVar3 + 0x98) == '\0') {
        lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_01b81620();
        }
        if ((**(long **)(lVar3 + 0xb8) != 0) &&
           (lVar3 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x100), lVar3 != 0)) {
          cVar1 = *(char *)(lVar3 + 0x99);
          lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01b81620();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_01b81620();
          }
          if ((**(long **)(lVar3 + 0xb8) != 0) &&
             (lVar3 = *(long *)(**(long **)(lVar3 + 0xb8) + 0x100), lVar3 != 0)) {
            __this_02 = *(UnityEngine_Events_UnityEvent_bool__o **)(lVar3 + 0x78);
            call = (UnityEngine_Events_UnityAction_T0__o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction<bool>_TypeInfo);
            UnityEngine_Events_UnityAction<bool>___ctor();
            if (__this_02 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
              UnityEngine_Events_UnityEvent<bool>__AddListener
                        (__this_02,call,Method_UnityEngine_Events_UnityEvent<bool>_AddListener__);
              if (cVar1 != '\0') {
                return;
              }
              lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01b81620();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_01b81620();
              }
              if ((**(long **)(lVar3 + 0xb8) != 0) &&
                 (__this_01 = *(Nekki_SF2_GUI_Shop_SidePanel_o **)
                               (**(long **)(lVar3 + 0xb8) + 0x100),
                 __this_01 != (Nekki_SF2_GUI_Shop_SidePanel_o *)0x0)) {
                Nekki_SF2_GUI_Shop_SidePanel__SetOpen(__this_01,true,-1.0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto LAB_034fb848;
      }
    }
  }
  __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,false,(MethodInfo *)0x0);
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_034fb848:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

