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
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
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
          if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pIVar4 = (Il2CppClass *)NGFEKJBMGEB__IPOELNKMKBA((long)pcVar6 / 1000,(MethodInfo *)0x0);
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

