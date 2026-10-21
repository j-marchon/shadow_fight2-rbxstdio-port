// Nekki.SF2.GUI.Scenes.GameLoaderScene$$GIENGNEGHPJ @ RVA 0x31D2324

void Nekki_SF2_GUI_Scenes_GameLoaderScene__GIENGNEGHPJ
               (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  Nekki_SF2_GUI_LockScreen_o *pNVar9;
  Nekki_SF2_GUI_Scenes_LoaderScreen_o *pNVar10;
  
  if ((DAT_04566cb5 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<LoaderScreen>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<LockScreen>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GameLoaderScene>_GIENGNEGHPJ__);
    DAT_04566cb5 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Scene_T__o *)__this,IMMNELPBGIF,
             Method_Nekki_SF2_GUI_Scene<GameLoaderScene>_GIENGNEGHPJ__);
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar4 = Nekki_SF2_GUI_Scenes_GameLoaderScene__CBIAIEJMKFO(__this,method_00);
  if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
    pPVar6 = pPVar3->klass;
    uVar1._0_1_ = (pPVar6->_2).rank;
    uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar5 = pPVar6->vtable + *piVar8;
          goto LAB_032d2428;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_032d2428:
    (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
    __this_00 = (__this->fields).logo;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      pNVar9 = (__this->fields)._lockScreenPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04566d6a == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_LockScreen_TypeInfo);
          DAT_04566d6a = '\x01';
        }
        if ((Nekki_SF2_GUI_LockScreen_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar9 = Nekki_SF2_GUI_LockScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          pNVar9 = (__this->fields)._lockScreenPrefab;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Object__Instantiate<object>
                    ((Il2CppObject *)pNVar9,Method_UnityEngine_Object_Instantiate<LockScreen>__);
        }
      }
      pNVar10 = (__this->fields)._loaderScreenPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_045624ed == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
          DAT_045624ed = '\x01';
        }
        if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar10 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->
                  _JPDNDPEAJAL_k__BackingField;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pNVar10,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          pNVar10 = (__this->fields)._loaderScreenPrefab;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Object__Instantiate<object>
                    ((Il2CppObject *)pNVar10,Method_UnityEngine_Object_Instantiate<LoaderScreen>__);
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

