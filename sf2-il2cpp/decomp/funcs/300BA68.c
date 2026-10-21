// Nekki.SF2.GUI.Shop.InfoPanelContent$$ACICKHKFILK @ RVA 0x300BA68

void Nekki_SF2_GUI_Shop_InfoPanelContent__ACICKHKFILK
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,IconLabelButton_o **BECCOGAMKJL,
               System_String_o *KGLJICLJHEL,int32_t EFJKPCADGJH,System_String_o *HCAAAAMDCNO,
               int32_t MHNMDBICHEJ,int32_t OOJKNECICBP,System_String_o *NEDLFJCJLKI,bool MHPCMIBLMPE
               ,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Object_o *__this_00;
  IconLabelButton_o *pIVar6;
  System_Collections_Generic_List_IconLabelButton__o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar7;
  Il2CppObject *pIVar8;
  System_Action_object__o *IELDNEAAPBE;
  IconLabelButton_array *pIVar9;
  UnityEngine_GameObject_o *original;
  
  if ((DAT_04565b74 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<TutorialNode>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<IconLabelButton>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_InfoPanelContent_DJKPEGLONEE__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IconLabelButton>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565b74 = 1;
  }
  pUVar4 = (__this->fields)._buttonPanel;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    original = (__this->fields)._buttonPrefab;
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Object__Instantiate<object>
                          ((Il2CppObject *)original,pUVar5,false,
                           Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
      if (MHPCMIBLMPE) {
        pUVar5 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_0310bd5c;
        UnityEngine_Transform__SetAsFirstSibling(pUVar5,(MethodInfo *)0x0);
      }
      pIVar6 = (IconLabelButton_o *)
               UnityEngine_GameObject__GetComponent<object>
                         ((UnityEngine_GameObject_o *)__this_00,
                          Method_UnityEngine_GameObject_GetComponent<IconLabelButton>__);
      *BECCOGAMKJL = pIVar6;
      thunk_FUN_01c20e04(BECCOGAMKJL,pIVar6);
      lVar2 = Method_System_Collections_Generic_List<IconLabelButton>_Add__;
      __this_01 = (__this->fields).PGCBEJGMIMA;
      if (__this_01 != (System_Collections_Generic_List_IconLabelButton__o *)0x0) {
        pIVar6 = *BECCOGAMKJL;
        pIVar9 = (__this_01->fields)._items;
        (__this_01->fields)._version = (__this_01->fields)._version + 1;
        if (pIVar9 != (IconLabelButton_array *)0x0) {
          uVar1 = (__this_01->fields)._size;
          if (uVar1 < (uint)pIVar9->max_length) {
            (__this_01->fields)._size = uVar1 + 1;
            pIVar9->m_Items[(int)uVar1] = pIVar6;
            thunk_FUN_01c20e04(pIVar9->m_Items + (int)uVar1);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pIVar6
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(HCAAAAMDCNO,(MethodInfo *)0x0);
          if (((*BECCOGAMKJL != (IconLabelButton_o *)0x0) &&
              (pNVar7 = ((*BECCOGAMKJL)->fields)._icon,
              pNVar7 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            if (bVar3) {
              UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
            }
            else {
              UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
              if ((*BECCOGAMKJL == (IconLabelButton_o *)0x0) ||
                 (pNVar7 = ((*BECCOGAMKJL)->fields)._icon,
                 pNVar7 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) goto LAB_0310bd5c;
              Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar7,HCAAAAMDCNO,(MethodInfo *)0x0);
            }
            if (*BECCOGAMKJL != (IconLabelButton_o *)0x0) {
              LabelButton__set_ButtonColor
                        ((LabelButton_o *)*BECCOGAMKJL,EFJKPCADGJH,(MethodInfo *)0x0);
              if (*BECCOGAMKJL != (IconLabelButton_o *)0x0) {
                LabelButton__set_Text((LabelButton_o *)*BECCOGAMKJL,NEDLFJCJLKI,(MethodInfo *)0x0);
                pIVar6 = *BECCOGAMKJL;
                if (pIVar6 != (IconLabelButton_o *)0x0) {
                  (pIVar6->fields).super.super.super.ButtonId = MHNMDBICHEJ;
                  LabelButton__set_Control((LabelButton_o *)pIVar6,OOJKNECICBP,(MethodInfo *)0x0);
                  if (((*BECCOGAMKJL != (IconLabelButton_o *)0x0) &&
                      (pUVar4 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)*BECCOGAMKJL,(MethodInfo *)0x0
                                          ), pUVar4 != (UnityEngine_GameObject_o *)0x0)) &&
                     (pIVar8 = UnityEngine_GameObject__AddComponent<object>
                                         (pUVar4,
                                          Method_UnityEngine_GameObject_AddComponent<TutorialNode>__
                                         ), pIVar8 != (Il2CppObject *)0x0)) {
                    pIVar8[2].klass = (Il2CppClass *)KGLJICLJHEL;
                    thunk_FUN_01c20e04(pIVar8 + 2,KGLJICLJHEL);
                    pIVar6 = *BECCOGAMKJL;
                    IELDNEAAPBE = (System_Action_object__o *)
                                  thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    System_Action<object>___ctor();
                    if (pIVar6 != (IconLabelButton_o *)0x0) {
                      SFButton__AddEventListener
                                ((SFButton_o *)pIVar6,2,IELDNEAAPBE,(MethodInfo *)0x0);
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
LAB_0310bd5c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

