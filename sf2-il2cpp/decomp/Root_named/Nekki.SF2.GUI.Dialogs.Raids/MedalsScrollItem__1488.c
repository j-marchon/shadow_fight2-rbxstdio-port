// TypeDefIndex 1488
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class MedalsScrollItem : BaseScrollItem
// Fields:
//   public Action<MedalsScrollItem.BDLDLFJALKC> OnMedalClick; // 0x130
//   private List<MedalsScrollItem.MedalPanel> _medals; // 0x138
//   private MedalsScrollItem.FALGLCABJFN ACDOFBACGGE; // 0x140

// ===== public void .ctor()  [RVA 0x31982B0]
// Nekki.SF2.GUI.Dialogs.Raids.MedalsScrollItem$$.ctor @ RVA 0x31982B0

void Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollItem___ctor((Nekki_SF2_GUI_BaseScrollItem_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void LHHLFBBBJLD(object IMMNELPBGIF)  [RVA 0x31982B8]
// Nekki.SF2.GUI.Dialogs.Raids.MedalsScrollItem$$LHHLFBBBJLD @ RVA 0x31982B8

void Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem__LHHLFBBBJLD
               (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t index;
  int32_t *piVar1;
  System_Collections_Generic_List_KMDOLFBIGNC__o *pSVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *__this_00;
  Il2CppObject *pIVar5;
  char *pcVar6;
  System_Action_MedalsScrollItem_BDLDLFJALKC__o *pSVar7;
  Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *pNVar8;
  UnityEngine_Vector3_o UVar9;
  
  if ((DAT_04566a8b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_BDLDLFJALKC_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__);
    FUN_01bab630(&LocalizationManager_TypeInfo);
    DAT_04566a8b = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int32_t *)thunk_FUN_01bda96c();
    pNVar8 = (__this->fields).ACDOFBACGGE;
    if ((pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)0x0) &&
       (pSVar2 = (pNVar8->fields).PCAAANOFKNG,
       pSVar2 != (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0)) {
      index = *piVar1;
      if ((pSVar2->fields)._size <= index) {
        return;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__);
      if (pIVar3 != (Il2CppObject *)0x0) {
        if (pIVar3[2].klass == (Il2CppClass *)0x0) {
          return;
        }
        pNVar8 = (__this->fields).ACDOFBACGGE;
        if ((((pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)0x0) &&
             (pSVar2 = (pNVar8->fields).PCAAANOFKNG,
             pSVar2 != (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0)) &&
            (pIVar3 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                 Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__),
            pIVar3 != (Il2CppObject *)0x0)) && (pIVar3[2].klass != (Il2CppClass *)0x0)) {
          pcVar6 = ((pIVar3[2].klass)->_1).namespaze;
          pIVar3 = (Il2CppObject *)
                   thunk_FUN_01bda818(
                                     Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_BDLDLFJALKC_TypeInfo
                                     );
          System_Object___ctor(pIVar3,(MethodInfo *)0x0);
          if ((LocalizationManager_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pIVar4 = (Il2CppClass *)LocalizationManager__IPOELNKMKBA((long)pcVar6 / 1000,(MethodInfo *)0x0);
          if (pIVar3 != (Il2CppObject *)0x0) {
            pIVar3[1].klass = pIVar4;
            thunk_FUN_01c20e04();
            __this_00 = (__this->fields)._medals;
            if (((__this_00 != (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0
                 ) && (pIVar5 = System_Collections_Generic_List<object>__get_Item
                                          ((System_Collections_Generic_List_object__o *)__this_00,
                                           index,
                                           Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                                          ), pIVar5 != (Il2CppObject *)0x0)) &&
               (pIVar5[1].monitor != (UnityEngine_Transform_o *)0x0)) {
              UVar9 = UnityEngine_Transform__get_position(pIVar5[1].monitor,(MethodInfo *)0x0);
              *(float *)&pIVar3[1].monitor = UVar9.fields.x;
              *(float *)((long)&pIVar3[1].monitor + 4) = UVar9.fields.y;
              *(float *)&pIVar3[2].klass = UVar9.fields.z;
              pSVar7 = (__this->fields).OnMedalClick;
              if (pSVar7 == (System_Action_MedalsScrollItem_BDLDLFJALKC__o *)0x0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x03298490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(pSVar7->fields).super.super.invoke_impl)
                        ((pSVar7->fields).super.super.method_code,pIVar3,
                         (pSVar7->fields).super.super.method);
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


// ===== public void Init(MedalsScrollItem.FALGLCABJFN DKMMBMBMJBO)  [RVA 0x31984B4]
// Nekki.SF2.GUI.Dialogs.Raids.MedalsScrollItem$$Init @ RVA 0x31984B4

void Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem__Init
               (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *DKMMBMBMJBO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o **ppNVar1;
  System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  RaidLeaderboardsManager_o *__this_00;
  RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *pJVar5;
  System_Action_object__o *IELDNEAAPBE;
  long *plVar6;
  System_String_o *pSVar7;
  Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *pNVar8;
  System_Collections_Generic_List_KMDOLFBIGNC__o *pSVar9;
  int index;
  int index_00;
  Il2CppClass *__this_01;
  undefined4 local_64;
  
  if ((DAT_04566a8c & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_LHHLFBBBJLD__);
    FUN_01bab630(&StringLiteral_14092/*"UI/Atlases/"*/);
    DAT_04566a8c = 1;
  }
  ppNVar1 = &(__this->fields).ACDOFBACGGE;
  local_64 = 0;
  (__this->fields).ACDOFBACGGE = DKMMBMBMJBO;
  thunk_FUN_01c20e04(ppNVar1,DKMMBMBMJBO);
  pNVar8 = (__this->fields).ACDOFBACGGE;
  if (pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)0x0) {
    index = 0;
    while (pSVar9 = (pNVar8->fields).PCAAANOFKNG,
          pSVar9 != (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0) {
      index_00 = (pSVar9->fields)._size;
      pSVar2 = (__this->fields)._medals;
      if (index_00 <= index) {
        if (pSVar2 != (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0)
        goto LAB_032987fc;
        break;
      }
      if (((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                              ), pIVar3 == (Il2CppObject *)0x0)) ||
         ((pIVar3[1].klass == (Il2CppClass *)0x0 ||
          (pUVar4 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pIVar3[1].klass,(MethodInfo *)0x0),
          pUVar4 == (UnityEngine_GameObject_o *)0x0)))) break;
      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
      if (((*ppNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)0x0) ||
          (pSVar9 = ((*ppNVar1)->fields).PCAAANOFKNG,
          pSVar9 == (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0)) ||
         ((pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar9,index,
                               Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__),
          pIVar3 == (Il2CppObject *)0x0 || (__this_00 == (RaidLeaderboardsManager_o *)0x0)))) break;
      pJVar5 = RaidLeaderboardsManager__LPCLGCOCEEA(__this_00,*(int32_t *)&pIVar3[2].monitor,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._medals;
      if (((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                              ), pIVar3 == (Il2CppObject *)0x0)) ||
         (pIVar3[2].klass == (Il2CppClass *)0x0)) break;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pIVar3[2].klass,true,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._medals;
      if ((((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
           (pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                               ), pIVar3 == (Il2CppObject *)0x0)) ||
          (pJVar5 == (RaidConfig_AEJBILHMFDB_DFCNIHGANOH_o *)0x0)) ||
         (pIVar3[2].klass == (Il2CppClass *)0x0)) break;
      Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                ((Nekki_SF2_GUI_ResolutionButton_o *)pIVar3[2].klass,StringLiteral_14092/*"UI/Atlases/"*/,
                 (pJVar5->fields).HHCNBANOKPB,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._medals;
      if (((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                              ), pIVar3 == (Il2CppObject *)0x0)) ||
         (pIVar3[2].klass == (Il2CppClass *)0x0)) break;
      Nekki_SF2_GUI_ResolutionButton__SetAllSpritesAsNormal
                ((Nekki_SF2_GUI_ResolutionButton_o *)pIVar3[2].klass,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._medals;
      if ((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
         (pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                             ), pIVar3 == (Il2CppObject *)0x0)) break;
      __this_01 = pIVar3[2].klass;
      IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 == (Il2CppClass *)0x0) break;
      SFButton__AddEventListener((SFButton_o *)__this_01,2,IELDNEAAPBE,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._medals;
      if (((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                              ), pIVar3 == (Il2CppObject *)0x0)) ||
         (pIVar3[2].klass == (Il2CppClass *)0x0)) break;
      *(int *)&(pIVar3[2].klass)->vtable[2].method = index;
      pSVar2 = (__this->fields)._medals;
      if (((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                              ), pIVar3 == (Il2CppObject *)0x0)) ||
         (plVar6 = pIVar3[2].monitor, plVar6 == (long *)0x0)) break;
      (**(code **)(*plVar6 + 0x2a8))
                ((pJVar5->fields).JPBGLAAFMKH.fields.r,(pJVar5->fields).JPBGLAAFMKH.fields.g,
                 (pJVar5->fields).JPBGLAAFMKH.fields.b,(pJVar5->fields).JPBGLAAFMKH.fields.a,plVar6,
                 *(undefined8 *)(*plVar6 + 0x2b0));
      pSVar2 = (__this->fields)._medals;
      if (((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                              ), pIVar3 == (Il2CppObject *)0x0)) ||
         ((*ppNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)0x0 ||
          (pSVar9 = ((*ppNVar1)->fields).PCAAANOFKNG,
          pSVar9 == (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0)))) break;
      plVar6 = pIVar3[2].monitor;
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar9,index,
                          Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      local_64 = *(undefined4 *)&pIVar3[2].monitor;
      pSVar7 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
      if (plVar6 == (long *)0x0) break;
      (**(code **)(*plVar6 + 0x5e8))(plVar6,pSVar7,*(undefined8 *)(*plVar6 + 0x5f0));
      pNVar8 = *ppNVar1;
      index = index + 1;
      if (pNVar8 == (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)0x0) break;
    }
  }
  goto LAB_03298844;
  while( true ) {
    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._medals;
    index_00 = index_00 + 1;
    if (pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) break;
LAB_032987fc:
    if ((pSVar2->fields)._size <= index_00) {
      return;
    }
    pIVar3 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,index_00,
                        Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                       );
    if (((pIVar3 == (Il2CppObject *)0x0) || (pIVar3[1].klass == (Il2CppClass *)0x0)) ||
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pIVar3[1].klass,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_GameObject_o *)0x0)) break;
  }
LAB_03298844:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

