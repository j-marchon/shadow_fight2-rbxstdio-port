// TypeDefIndex 2760
// Namespace: 
// public class FFFAKMHNGKI : QuestAction
// Fields:

// ===== private void NAJLKMODAKH()  [RVA 0x33FB2DC]
// FFFAKMHNGKI$$NAJLKMODAKH @ RVA 0x33FB2DC

void FFFAKMHNGKI__NAJLKMODAKH(FFFAKMHNGKI_o *__this,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  System_Collections_Generic_List_object__o *__this_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *pUVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_04567fb7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    DAT_04567fb7 = 1;
    method = extraout_x1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  auVar5._8_8_ = method;
  auVar5._0_8_ = lVar2;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    auVar5 = FUN_01b81620(lVar2,method);
  }
  lVar2 = *(long *)(*(long *)(auVar5._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2,auVar5._8_8_);
  }
  pUVar4 = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    pUVar4 = *(UnityEngine_Object_o **)(**(long **)(lVar2 + 0xb8) + 0x178);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((**(long **)(lVar2 + 0xb8) != 0) &&
       (pNVar3 = *(Nekki_SF2_GUI_Shop_ItemsPanel_o **)(**(long **)(lVar2 + 0xb8) + 0x178),
       pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) {
      bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToLastItemWithoutEnchantments
                        (pNVar3,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if ((**(long **)(lVar2 + 0xb8) != 0) &&
         (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x178), lVar2 != 0)) {
        __this_00 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x70);
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
          return;
        }
        if ((__this_00->fields)._size < 1) {
          return;
        }
        IKKAMAMLIKA = (HOOAAGABMBL_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (__this_00,0,
                                 Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
        AMIINPEKKFB__KMJPPCLIEDG(IKKAMAMLIKA,false,false,(MethodInfo *)0x0);
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
            (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
          Nekki_SF2_GUI_Shop_ShopScene__RefreshItems
                    ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                     (MethodInfo *)0x0);
          lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8) !=
              (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
            Nekki_SF2_GUI_Shop_ShopScene__Refresh
                      ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar2 + 0xb8),
                       (MethodInfo *)0x0);
            lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_01b81620();
            }
            lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
            if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
              lVar2 = FUN_01b81620();
            }
            if ((**(long **)(lVar2 + 0xb8) != 0) &&
               (pNVar3 = *(Nekki_SF2_GUI_Shop_ItemsPanel_o **)(**(long **)(lVar2 + 0xb8) + 0x178),
               pNVar3 != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) {
              Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToLastItemWithoutEnchantments
                        (pNVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BKOFAELILJE()  [RVA 0x33FB57C]
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
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_034fb848:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KFIBMPDDAFG(bool CICIOPHDHAF)  [RVA 0x33FB84C]
// FFFAKMHNGKI$$KFIBMPDDAFG @ RVA 0x33FB84C

void FFFAKMHNGKI__KFIBMPDDAFG(FFFAKMHNGKI_o *__this,bool CICIOPHDHAF,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  UnityEngine_Events_UnityEvent_bool__o *__this_01;
  
  if ((DAT_04567fb9 & 1) == 0) {
    FUN_01bab630(&Method_FFFAKMHNGKI_KFIBMPDDAFG__,CICIOPHDHAF);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__);
    DAT_04567fb9 = 1;
  }
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  if ((**(long **)(lVar1 + 0xb8) != 0) &&
     (lVar1 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x100), lVar1 != 0)) {
    __this_01 = *(UnityEngine_Events_UnityEvent_bool__o **)(lVar1 + 0x78);
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<bool>_TypeInfo);
    UnityEngine_Events_UnityAction<bool>___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
      UnityEngine_Events_UnityEvent<bool>__RemoveListener
                (__this_01,call,Method_UnityEngine_Events_UnityEvent<bool>_RemoveListener__);
      __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
        Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,false,(MethodInfo *)0x0);
        QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x33FB95C]
// FFFAKMHNGKI$$MAHFCKJGBPP @ RVA 0x33FB95C

void FFFAKMHNGKI__MAHFCKJGBPP(FFFAKMHNGKI_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  FFFAKMHNGKI_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,true,(MethodInfo *)0x0);
    FFFAKMHNGKI__NAJLKMODAKH(__this_01,method_00);
    FFFAKMHNGKI__BKOFAELILJE(__this,method_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33FB998]
// FFFAKMHNGKI$$.ctor @ RVA 0x33FB998

void FFFAKMHNGKI___ctor(FFFAKMHNGKI_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

