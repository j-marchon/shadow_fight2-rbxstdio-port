// Nekki.SF2.GUI.Dialogs.ShowLoot.LootCell$$CJJBDJHKDEO @ RVA 0x321B254

void Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell__CJJBDJHKDEO
               (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  OGNCMFBMBMB_o *__this_00;
  Il2CppClass *pIVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  System_Collections_Generic_List_PerkUI__o *__this_02;
  long lVar5;
  Nekki_SF2_GUI_Common_PerkUI_array *pNVar6;
  UnityEngine_Events_UnityEvent_o *__this_03;
  
  if ((DAT_04566f01 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_GLHOFGPDIKF_APCOHLGGEJK__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_GLHOFGPDIKF_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_Add__);
    FUN_01bab630(&Method_OGNCMFBMBMB_KNMENIBLFGF<PerkUI>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_5704);
    DAT_04566f01 = 1;
  }
  pIVar3 = (Il2CppObject *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_GLHOFGPDIKF_TypeInfo);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3[1].monitor = __this;
    thunk_FUN_01c20e04(&pIVar3[1].monitor,__this);
    __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (OGNCMFBMBMB_o *)0x0) {
      pIVar4 = (Il2CppClass *)
               OGNCMFBMBMB__KNMENIBLFGF<object>
                         (__this_00,(__this->fields)._perkIconPrefab,
                          Method_OGNCMFBMBMB_KNMENIBLFGF<PerkUI>__);
      pIVar3 = pIVar3 + 1;
      pIVar3->klass = pIVar4;
      thunk_FUN_01c20e04(pIVar3,pIVar4);
      pIVar4 = pIVar3->klass;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pIVar4,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      if ((pIVar3->klass != (Il2CppClass *)0x0) &&
         (__this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pIVar3->klass,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent
                  (__this_01,(__this->fields)._perkIconHolder,false,(MethodInfo *)0x0);
        if (pIVar3->klass != (Il2CppClass *)0x0) {
          (pIVar3->klass->_1).this_arg.data = StringLiteral_5704;
          thunk_FUN_01c20e04();
          if (pIVar3->klass != (Il2CppClass *)0x0) {
            Nekki_SF2_GUI_Common_PerkUI__set_Perk
                      ((Nekki_SF2_GUI_Common_PerkUI_o *)pIVar3->klass,EIKFGOCCOIE,(MethodInfo *)0x0)
            ;
            if ((pIVar3->klass != (Il2CppClass *)0x0) &&
               (lVar5 = *(long *)&(pIVar3->klass->_1).byval_arg.bits, lVar5 != 0)) {
              __this_03 = *(UnityEngine_Events_UnityEvent_o **)(lVar5 + 0x100);
              call = (UnityEngine_Events_UnityAction_o *)
                     thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
                lVar5 = Method_System_Collections_Generic_List<PerkUI>_Add__;
                __this_02 = (__this->fields).AHJLOHFIEGJ;
                if (__this_02 != (System_Collections_Generic_List_PerkUI__o *)0x0) {
                  pIVar4 = pIVar3->klass;
                  pNVar6 = (__this_02->fields)._items;
                  (__this_02->fields)._version = (__this_02->fields)._version + 1;
                  if (pNVar6 != (Nekki_SF2_GUI_Common_PerkUI_array *)0x0) {
                    uVar1 = (__this_02->fields)._size;
                    if (uVar1 < (uint)pNVar6->max_length) {
                      (__this_02->fields)._size = uVar1 + 1;
                      pNVar6->m_Items[(int)uVar1] = (Nekki_SF2_GUI_Common_PerkUI_o *)pIVar4;
                      thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1);
                      return;
                    }
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_02,
                               (Il2CppObject *)pIVar4,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

