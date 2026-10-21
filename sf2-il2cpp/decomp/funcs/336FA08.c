// Nekki.SF2.GUI.Shop.PerksPanel$$JJPEDCEMMID @ RVA 0x336FA08

void Nekki_SF2_GUI_Shop_PerksPanel__JJPEDCEMMID
               (Nekki_SF2_GUI_Shop_PerksPanel_o *__this,HEFOANCOHDC_o *EIPPAPOBPMI,
               int32_t KDCFCALHEMN,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Il2CppObject *__this_00;
  OGNCMFBMBMB_o *__this_01;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityAction_o *call;
  System_Collections_Generic_List_PerkUI__o *__this_04;
  Nekki_SF2_GUI_Common_PerkUI_o *item;
  long lVar4;
  Nekki_SF2_GUI_Common_PerkUI_array *pNVar5;
  UnityEngine_Events_UnityEvent_o *__this_05;
  void **ppvVar6;
  UnityEngine_Object_o *exists;
  
  if ((DAT_04567b0c & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_PerksPanel_AABMACMOENA_NLJNHDBAGDL__,EIPPAPOBPMI,
                 KDCFCALHEMN);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_PerksPanel_AABMACMOENA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkUI>_Add__);
    FUN_01bab630(&Method_OGNCMFBMBMB_KNMENIBLFGF<PerkUI>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567b0c = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_PerksPanel_AABMACMOENA_TypeInfo)
  ;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_01 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (OGNCMFBMBMB_o *)0x0) {
      pIVar3 = OGNCMFBMBMB__KNMENIBLFGF<object>
                         (__this_01,(__this->fields)._PerkPrefab,
                          Method_OGNCMFBMBMB_KNMENIBLFGF<PerkUI>__);
      ppvVar6 = &__this_00[1].monitor;
      *ppvVar6 = pIVar3;
      thunk_FUN_01c20e04(ppvVar6,pIVar3);
      exists = *ppvVar6;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      if (*ppvVar6 != (UnityEngine_Component_o *)0x0) {
        __this_02 = UnityEngine_Component__get_transform(*ppvVar6,(MethodInfo *)0x0);
        __this_03 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((__this_03 != (UnityEngine_GameObject_o *)0x0) &&
           (parent = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(__this_02,parent,false,(MethodInfo *)0x0);
          if (*ppvVar6 != (void *)0x0) {
            *(System_String_o **)((long)*ppvVar6 + 0x30) = (__this->fields)._Atlas;
            thunk_FUN_01c20e04();
            if (*ppvVar6 != (Nekki_SF2_GUI_Common_PerkUI_o *)0x0) {
              Nekki_SF2_GUI_Common_PerkUI__set_Perk(*ppvVar6,EIPPAPOBPMI,(MethodInfo *)0x0);
              if ((*ppvVar6 != (void *)0x0) &&
                 (lVar4 = *(long *)((long)*ppvVar6 + 0x28), lVar4 != 0)) {
                __this_05 = *(UnityEngine_Events_UnityEvent_o **)(lVar4 + 0x100);
                call = (UnityEngine_Events_UnityAction_o *)
                       thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                UnityEngine_Events_UnityAction___ctor();
                if (__this_05 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                  UnityEngine_Events_UnityEvent__AddListener(__this_05,call,(MethodInfo *)0x0);
                  lVar4 = Method_System_Collections_Generic_List<PerkUI>_Add__;
                  __this_04 = (__this->fields).LLMOAIMNMHM;
                  if (__this_04 != (System_Collections_Generic_List_PerkUI__o *)0x0) {
                    item = *ppvVar6;
                    pNVar5 = (__this_04->fields)._items;
                    (__this_04->fields)._version = (__this_04->fields)._version + 1;
                    if (pNVar5 != (Nekki_SF2_GUI_Common_PerkUI_array *)0x0) {
                      uVar1 = (__this_04->fields)._size;
                      if (uVar1 < (uint)pNVar5->max_length) {
                        (__this_04->fields)._size = uVar1 + 1;
                        pNVar5->m_Items[(int)uVar1] = item;
                        thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1);
                        return;
                      }
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)__this_04,
                                 (Il2CppObject *)item,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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

