// TypeDefIndex 891
// Namespace: Nekki.SF2.GUI.GeneralMenu
// public class StoryItemText : MonoBehaviour
// Fields:
//   private MenuItemStory[] _storyButtons; // 0x20
//   private XmlNode BFIOMKAMGGI; // 0x28

// ===== private void OnEnable()  [RVA 0x30931D0]
// Nekki.SF2.GUI.GeneralMenu.StoryItemText$$OnEnable @ RVA 0x30931D0

void Nekki_SF2_GUI_GeneralMenu_StoryItemText__OnEnable
               (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *in_x2;
  Nekki_SF2_GUI_GeneralMenu_MenuItemStory_array *pNVar2;
  uint OKBHJGIOENM;
  long lVar3;
  Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *pNVar4;
  
  pNVar2 = (__this->fields)._storyButtons;
  if (pNVar2 != (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_array *)0x0) {
    lVar3 = 4;
    do {
      uVar1 = (uint)pNVar2->max_length;
      OKBHJGIOENM = (int)lVar3 - 4;
      if ((int)uVar1 <= (int)OKBHJGIOENM) {
        return;
      }
      if (uVar1 <= OKBHJGIOENM) {
LAB_03193278:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pNVar4 = pNVar2->m_Items[lVar3 + -4];
      CJNHFNHJHPE = Nekki_SF2_GUI_GeneralMenu_StoryItemText__HMEMCCGNGFF(__this,OKBHJGIOENM,in_x2);
      if ((pNVar4 == (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *)0x0) ||
         (__this_00 = (pNVar4->fields).super._label, __this_00 == (Nekki_SF2_GUI_LabelAlias_o *)0x0)
         ) break;
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._storyButtons;
      if (pNVar2 == (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_array *)0x0) break;
      if ((uint)pNVar2->max_length <= OKBHJGIOENM) goto LAB_03193278;
      if (pNVar2->m_Items[lVar3 + -4] == (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *)0x0) break;
      in_x2 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_GeneralMenu_MenuItemStory__SetSlotIndex
                (pNVar2->m_Items[lVar3 + -4],OKBHJGIOENM,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._storyButtons;
      lVar3 = lVar3 + 1;
    } while (pNVar2 != (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string HMEMCCGNGFF(int OKBHJGIOENM)  [RVA 0x309327C]
// Nekki.SF2.GUI.GeneralMenu.StoryItemText$$HMEMCCGNGFF @ RVA 0x309327C

System_String_o *
Nekki_SF2_GUI_GeneralMenu_StoryItemText__HMEMCCGNGFF
          (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *__this,int32_t OKBHJGIOENM,MethodInfo *method)

{
  NLPJLHOEAOE_o *pNVar1;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar3;
  System_String_o *str1;
  MethodInfo *method_00;
  undefined8 *puVar4;
  float local_28;
  int32_t local_24;
  
  if ((DAT_045660b8 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15825/*"^SaveSlot_new^"*/);
    FUN_01bab630(&StringLiteral_15824/*"^SaveSlot_lvl{"*/);
    FUN_01bab630(&StringLiteral_22504/*"}^"*/);
    FUN_01bab630(&StringLiteral_15821/*"^SaveSlot_IM^ "*/);
    FUN_01bab630(&StringLiteral_15823/*"^SaveSlot_endGame^ "*/);
    FUN_01bab630(&StringLiteral_15822/*"^SaveSlot_act{"*/);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    FUN_01bab630(&StringLiteral_12434/*"StoryTutorialWelcome"*/);
    FUN_01bab630(&StringLiteral_22505/*"}^ "*/);
    DAT_045660b8 = 1;
  }
  local_28 = 0.0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar1 != (NLPJLHOEAOE_o *)0x0) {
    JHMENEKPIBO = NLPJLHOEAOE__MBLEGLIMGHP(pNVar1,OKBHJGIOENM,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_15825/*"^SaveSlot_new^"*/;
    if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pNVar1 == (NLPJLHOEAOE_o *)0x0) goto LAB_03193498;
      pSVar2 = NLPJLHOEAOE__PPPIEOEMMKL(pNVar1,OKBHJGIOENM,StringLiteral_12434/*"StoryTutorialWelcome"*/,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_15825/*"^SaveSlot_new^"*/;
      if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
        LBJNDMNEJJB = EIABCPKDEBD__NHPDFFAIJMF(JHMENEKPIBO,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
        local_24 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
        pSVar3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        method_00 = StringLiteral_22504/*"}^"*/;
        pSVar3 = System_String__Concat
                           (StringLiteral_15824/*"^SaveSlot_lvl{"*/,pSVar3,(System_String_o *)StringLiteral_22504/*"}^"*/,
                            (MethodInfo *)0x0);
        local_28 = Nekki_SF2_GUI_GeneralMenu_StoryItemText__MBJANJJBMHC
                             (__this,JHMENEKPIBO,method_00);
        if (local_28 == 7.0) {
          puVar4 = &StringLiteral_15821/*"^SaveSlot_IM^ "*/;
        }
        else {
          if (local_28 != 8.0) {
            str1 = System_Single__ToString(local_28,(MethodInfo *)&local_28);
            pSVar3 = System_String__Concat
                               (StringLiteral_15822/*"^SaveSlot_act{"*/,str1,StringLiteral_22505/*"}^ "*/,pSVar3,
                                (MethodInfo *)0x0);
            return pSVar3;
          }
          puVar4 = &StringLiteral_15823/*"^SaveSlot_endGame^ "*/;
        }
        pSVar3 = System_String__Concat((System_String_o *)*puVar4,pSVar3,(MethodInfo *)0x0);
      }
    }
    return pSVar3;
  }
LAB_03193498:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3093820]
// Nekki.SF2.GUI.GeneralMenu.StoryItemText$$.ctor @ RVA 0x3093820

void Nekki_SF2_GUI_GeneralMenu_StoryItemText___ctor
               (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private float MBJANJJBMHC(XmlNode KOHKKIKJLHB)  [RVA 0x309349C]
// Nekki.SF2.GUI.GeneralMenu.StoryItemText$$MBJANJJBMHC @ RVA 0x309349C

float Nekki_SF2_GUI_GeneralMenu_StoryItemText__MBJANJJBMHC
                (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *__this,System_Xml_XmlNode_o *KOHKKIKJLHB
                ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  MethodInfo *in_x3;
  float fVar4;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_a0;
  
  if ((DAT_045660b9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_float>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Value__);
    FUN_01bab630(&StringLiteral_15256/*"ZONE_7|MINIBOSS_SHROUD2|6"*/);
    FUN_01bab630(&StringLiteral_15255/*"ZONE_7|BOSS_TITAN|6"*/);
    FUN_01bab630(&StringLiteral_15243/*"ZONE_3|BOSS_BUTCHER|6"*/);
    FUN_01bab630(&StringLiteral_15251/*"ZONE_6|FINAL_BATTLE|1"*/);
    FUN_01bab630(&StringLiteral_15247/*"ZONE_5|BOSS_HUNTRESS|6"*/);
    FUN_01bab630(&StringLiteral_15241/*"ZONE_2|BOSS_HERMIT|6"*/);
    FUN_01bab630(&StringLiteral_15238/*"ZONE_1|BOSS_LYNX|6"*/);
    FUN_01bab630(&StringLiteral_15257/*"ZONE_7|MINIBOSS_SHROUD|6"*/);
    FUN_01bab630(&StringLiteral_15245/*"ZONE_4|BOSS_WASP|6"*/);
    FUN_01bab630(&StringLiteral_15249/*"ZONE_6|BOSS_SAMURAI_INTERMISSION|1"*/);
    DAT_045660b9 = 1;
  }
  local_a0.fields._getEnumeratorRetType = 0;
  local_a0.fields._36_4_ = 0;
  local_a0.fields._version = 0;
  local_a0.fields._index = 0;
  local_a0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a0.fields._current.fields.value = (Il2CppObject *)0x0;
  local_a0.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_float>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_float>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
  if (__this_00 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15238/*"ZONE_1|BOSS_LYNX|6"*/,2.0,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15241/*"ZONE_2|BOSS_HERMIT|6"*/,3.0,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15243/*"ZONE_3|BOSS_BUTCHER|6"*/,4.0,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15245/*"ZONE_4|BOSS_WASP|6"*/,5.0,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15247/*"ZONE_5|BOSS_HUNTRESS|6"*/,6.0,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15251/*"ZONE_6|FINAL_BATTLE|1"*/,7.0,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15249/*"ZONE_6|BOSS_SAMURAI_INTERMISSION|1"*/,7.1,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15257/*"ZONE_7|MINIBOSS_SHROUD|6"*/,7.2,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15256/*"ZONE_7|MINIBOSS_SHROUD2|6"*/,7.3,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15255/*"ZONE_7|BOSS_TITAN|6"*/,8.0,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__GetEnumerator
            (&local_a0,__this_00,
             Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
  fVar4 = 1.0;
  while( true ) {
    bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_float>__MoveNext
                      (&local_a0,
                       Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__
                      );
    pIVar1 = local_a0.fields._current.fields.value;
    if (!bVar2) break;
    iVar3 = Nekki_SF2_GUI_GeneralMenu_StoryItemText__LGJBNGHJBII
                      ((Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *)(ulong)bVar2,KOHKKIKJLHB,
                       (System_String_o *)local_a0.fields._current.fields.key,in_x3);
    if (0 < iVar3) {
      fVar4 = SUB84(pIVar1,0);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator<object,_float>__Dispose
            (&local_a0,
             Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
  return fVar4;
}


// ===== private void Awake()  [RVA 0x3093BDC]
// Nekki.SF2.GUI.GeneralMenu.StoryItemText$$Awake @ RVA 0x3093BDC

void Nekki_SF2_GUI_GeneralMenu_StoryItemText__Awake
               (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *__this,MethodInfo *method)

{
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar1;
  System_Xml_XmlNode_o *pSVar2;
  long *plVar3;
  MethodInfo *extraout_x1;
  System_Xml_XmlNode_o **ppSVar4;
  
  if ((DAT_045660ba & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_14862/*"Warriors"*/);
    FUN_01bab630(&StringLiteral_21892/*"users.xml"*/);
    FUN_01bab630(&StringLiteral_11416/*"Root"*/);
    DAT_045660ba = 1;
    method = extraout_x1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SF2Paths_TypeInfo,method);
  }
  EIJDDKJONFO = SF2Paths__CPIACIDINLI((MethodInfo *)0x0);
  pSVar1 = GIAMPEGMNHE__GMNIIJJFIJK(EIJDDKJONFO,StringLiteral_21892/*"users.xml"*/,0,true,(MethodInfo *)0x0);
  ppSVar4 = &(__this->fields).BFIOMKAMGGI;
  *ppSVar4 = (System_Xml_XmlNode_o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar4,pSVar1);
  pSVar2 = *ppSVar4;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_11416/*"Root"*/,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    if (plVar3 != (long *)0x0) {
      pSVar2 = (System_Xml_XmlNode_o *)
               (**(code **)(*plVar3 + 0x468))
                         (plVar3,StringLiteral_14862/*"Warriors"*/,*(undefined8 *)(*plVar3 + 0x470));
      *ppSVar4 = pSVar2;
      thunk_FUN_01c20e04(ppSVar4,pSVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FCCHCOFHNFE()  [RVA 0x30931D4]
// Nekki.SF2.GUI.GeneralMenu.StoryItemText$$FCCHCOFHNFE @ RVA 0x30931D4

void Nekki_SF2_GUI_GeneralMenu_StoryItemText__FCCHCOFHNFE
               (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *in_x2;
  Nekki_SF2_GUI_GeneralMenu_MenuItemStory_array *pNVar2;
  uint OKBHJGIOENM;
  long lVar3;
  Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *pNVar4;
  
  pNVar2 = (__this->fields)._storyButtons;
  if (pNVar2 != (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_array *)0x0) {
    lVar3 = 4;
    do {
      uVar1 = (uint)pNVar2->max_length;
      OKBHJGIOENM = (int)lVar3 - 4;
      if ((int)uVar1 <= (int)OKBHJGIOENM) {
        return;
      }
      if (uVar1 <= OKBHJGIOENM) {
LAB_03193278:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pNVar4 = pNVar2->m_Items[lVar3 + -4];
      CJNHFNHJHPE = Nekki_SF2_GUI_GeneralMenu_StoryItemText__HMEMCCGNGFF(__this,OKBHJGIOENM,in_x2);
      if ((pNVar4 == (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *)0x0) ||
         (__this_00 = (pNVar4->fields).super._label, __this_00 == (Nekki_SF2_GUI_LabelAlias_o *)0x0)
         ) break;
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._storyButtons;
      if (pNVar2 == (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_array *)0x0) break;
      if ((uint)pNVar2->max_length <= OKBHJGIOENM) goto LAB_03193278;
      if (pNVar2->m_Items[lVar3 + -4] == (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_o *)0x0) break;
      in_x2 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_GeneralMenu_MenuItemStory__SetSlotIndex
                (pNVar2->m_Items[lVar3 + -4],OKBHJGIOENM,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._storyButtons;
      lVar3 = lVar3 + 1;
    } while (pNVar2 != (Nekki_SF2_GUI_GeneralMenu_MenuItemStory_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private int LGJBNGHJBII(XmlNode KOHKKIKJLHB, string DBIAAJNKHLH)  [RVA 0x3093828]
// Nekki.SF2.GUI.GeneralMenu.StoryItemText$$LGJBNGHJBII @ RVA 0x3093828

/* WARNING: Removing unreachable block (ram,0x03193b04) */

int32_t Nekki_SF2_GUI_GeneralMenu_StoryItemText__LGJBNGHJBII
                  (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *__this,
                  System_Xml_XmlNode_o *KOHKKIKJLHB,System_String_o *DBIAAJNKHLH,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *__this_00;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  if ((DAT_045660bb & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4543/*"CompletedCount"*/);
    FUN_01bab630(&StringLiteral_6379/*"Fights"*/);
    __this = (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *)FUN_01bab630(&StringLiteral_7235/*"IDS"*/);
    DAT_045660bb = 1;
  }
  if (KOHKKIKJLHB != (System_Xml_XmlNode_o *)0x0) {
    plVar4 = (long *)(*(KOHKKIKJLHB->klass->vtable)._51_get_Item.methodPtr)
                               (KOHKKIKJLHB,StringLiteral_6379/*"Fights"*/,
                                (KOHKKIKJLHB->klass->vtable)._51_get_Item.method);
    __this = (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *)0x0;
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
      __this = (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *)0x0;
      if (plVar4 != (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0319395c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0319395c:
          uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar8 & 1) == 0) {
            iVar3 = 0;
            goto LAB_03193a64;
          }
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_031939bc;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_031939bc:
          JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
          if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
               ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(JHMENEKPIBO);
            }
          }
          pSVar6 = EIABCPKDEBD__NHPDFFAIJMF(JHMENEKPIBO,StringLiteral_7235/*"IDS"*/,(MethodInfo *)0x0);
          __this_00 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
          if (__this_00 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__Equals(__this_00,DBIAAJNKHLH,(MethodInfo *)0x0);
        } while (!bVar2);
        pSVar6 = EIABCPKDEBD__NHPDFFAIJMF(JHMENEKPIBO,StringLiteral_4543/*"CompletedCount"*/,(MethodInfo *)0x0);
        iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
LAB_03193a64:
        plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
        if (plVar4 != (long *)0x0) {
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_03193ac4;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03193ac4:
          (*(code *)*puVar5)(plVar4,puVar5[1]);
        }
        return iVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

